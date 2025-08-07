"""
CC 2025 Artifact
Copyright (C) 2025 Anderson Faustino da Silva

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program. If not, see <https://www.gnu.org/licenses/>.
"""

import os
import sys
import time
import shap
import yaml as yl
import numpy as np
import pandas as pd
import matplotlib.pyplot as plt

from tqdm import tqdm

from absl import app, flags, logging

from rouxinol.utility import train_test_data_with_dict_and_label, train_test_data_with_list
from rouxinol.utility import X_y_data_with_list, split_dataset

from rouxinol.learning.supervised.classification import RandomForestModel
from rouxinol.learning.supervised.classification import LogisticRegressionModel
from rouxinol.learning.supervised.classification import KNeighborsModel
from rouxinol.learning.supervised.classification import SupportVectorMachineModel
from rouxinol.learning.supervised.classification import MultiLayerPerceptronModel
from rouxinol.learning.supervised.classification import XGBoostModel


# -------------------------
# Define command-line flags
# -------------------------
FLAGS = flags.FLAGS

flags.DEFINE_string(
    'dataset_name', 
    default=None, 
    help='Dataset filename',
    short_name='n'
)

flags.DEFINE_string(
    'train', 
    default='O0',
    help='Train data',
    short_name='T'
)

flags.DEFINE_string(
    'test', 
    default='O0',
    help='Test data',
    short_name='t'
)

flags.DEFINE_integer(
    'problems', 
    default=32, 
    help='Number of classes',
    short_name='P'
)

flags.DEFINE_integer(
    'samples', 
    default=100, 
    help='Number of samples per problem',
    short_name='s'
)

flags.DEFINE_float(
    'test_ratio', 
    default=0.2, 
    help='Number of test samples',
    short_name='r'
)

flags.DEFINE_boolean(
    'shuffle', 
    default=False, 
    help='Shuffle the dataset before selection',
    short_name='S'
)

flags.DEFINE_enum(
    'representation', 
    default='llvmHistogram', 
    enum_values=['llvmHistogram', 'x86Histogram', 'cfggrindDynamicHistogram', 'cfggrindHybridHistogram', 'performanceCounterHistogram'], 
    help='Representation to evaluate',
    short_name='R'
)

flags.DEFINE_enum(
    'model',
    default='RandomForest',
    enum_values=[
                'RandomForest',
                'LogisticRegression',
                'KNeighbors',
                'SupportVectorMachine',
                'MultiLayerPerceptron',
                'XGBoost'
    ],
    help='Model',
    short_name='M'
)

flags.DEFINE_string(
    'data_directory', 
    default=None, 
    help='Data directory (ir, representation, exec, ...)',
    short_name='d'
)

flags.DEFINE_string(
    'output_directory',
    default='./output',
    help='Directory to save the plot',
    short_name='o'
)

flags.DEFINE_float(
    'background_samples_size',
    default=0.1,
    help='Samples to serve as background for SHAP explanation',
    short_name='b'
)

flags.DEFINE_integer(
    'max_display',
    default=None,
    help='Display the top K most important features',
    short_name='m'
)

flags.DEFINE_string(
    'plot_type', 
    default='pdf', 
    help='Type of the SHAP summary plot',
    short_name='p'
)

flags.DEFINE_list(
    'keys', 
    default=None,
    help='Keys for constructing the histogram',
    short_name='k'
)

# Mark required flags  
flags.mark_flag_as_required('data_directory')
flags.mark_flag_as_required('dataset_name')


def get_shap_explainer(
    model_type, 
    model, 
    background_data
):
    """
    Returns a SHAP explainer for classification models.

    Parameters:
        model_type (str): Type of the model (e.g., "RandomForest", "LogisticRegression", etc.).
                          Supported types: "RandomForest", "XGBoost",
                          "LogisticRegression", "KNeighbors", "SupportVectorMachine",
                          "MultiLayerPerceptron".
        model: The trained classification model. It should ideally have a .predict_proba method
               for non-tree models to explain probabilities.
        background_data (pd.DataFrame or np.array): A representative sample of the training data.
                                                    This is crucial for KernelExplainer and DeepExplainer
                                                    to establish a baseline. For large datasets,
                                                    consider using a small, random subset.

    Returns:
        shap.Explainer: A SHAP explainer object.
    """
    explainer = None

    if model_type in ["RandomForest", "XGBoost"]:
        # For tree-based models, shap.TreeExplainer is highly optimized.
        # For classification, we typically want to explain the probability output.
        # 'model_output="probability"' ensures SHAP values sum to the predicted probability for each class.
        explainer = shap.TreeExplainer(model, data=background_data, model_output="probability")
    elif model_type == "LogisticRegression":
        # For Logistic Regression, shap.LinearExplainer is suitable.
        # It can directly explain the log-odds (logit) output.
        # If you want SHAP values that sum to probabilities, you pass model.predict_proba.
        explainer = shap.LinearExplainer(model.predict_proba, data=background_data)
    elif model_type in ["KNeighbors", "SupportVectorMachine"]:
        # For models like K-Nearest Neighbors and Support Vector Machines,
        # shap.KernelExplainer is a general, model-agnostic explainer.
        # It requires a prediction function that outputs probabilities (model.predict_proba)
        # and a background dataset.
        # Note: For SVC, ensure `probability=True` is set when initializing the SVC model.
        explainer = shap.KernelExplainer(model.predict_proba, data=background_data)
    elif model_type == "MultiLayerPerceptron":
        # For neural networks (like MLPClassifier), shap.DeepExplainer is often preferred
        # for its efficiency with deep learning frameworks (TensorFlow/Keras, PyTorch).
        # If DeepExplainer is not applicable or fails (e.g., due to framework mismatch),
        # it falls back to KernelExplainer.
        try:
            # DeepExplainer expects the model and background data.
            # For Keras/TensorFlow, you might pass (model.input, model.output) as the model.
            # For scikit-learn's MLPClassifier, passing the model directly often works,
            # but ensure it outputs probabilities if that's what you want to explain.
            explainer = shap.DeepExplainer(model, data=background_data)
        except:
            explainer = shap.KernelExplainer(model.predict_proba, data=background_data)

    return explainer


# -------------------------------------------------
# Main routine
# -------------------------------------------------
def main(
    argv
):
    # Load the dataset
    dataset = split_dataset(
                FLAGS.dataset_name,
                num_problems=FLAGS.problems,
                num_samples=FLAGS.samples,
                test_ratio=FLAGS.test_ratio,
                shuffle=FLAGS.shuffle
            )
        
    data = []

    max_len = []
    for key in tqdm(["train", "test"], desc="Processing datasets"):  
        label_dir = FLAGS.train if key == "train" else FLAGS.test  
        dataset_items = list(dataset[key].items())  # Convert to list for tqdm compatibility  
        for idx, (problem, samples) in tqdm(enumerate(dataset_items), desc=f"Processing {key} problems", leave=False):  
            for sample in tqdm(samples, desc=f"Processing samples for {problem}", leave=False): 
                embeddings_filename = os.path.join(FLAGS.data_directory, label_dir, problem, FLAGS.representation, f"{sample}.yml")
                if os.path.isfile(embeddings_filename):
                    with open(embeddings_filename, "r") as fin:
                        embeddings = yl.load(fin, Loader=yl.FullLoader)
                    if embeddings:
                        data.append({"x": embeddings, "y": idx, "info": key})

    # Split the data
    data_train, data_test, sorted_keys = train_test_data_with_dict_and_label(
                                            data, use_only_keys=FLAGS.keys
                                        )
    
    data_prediction, data_background_samples = train_test_data_with_list(
                                                    data_test
                                                )
            
    data_prediction_X, _ = X_y_data_with_list(data_prediction, columns=sorted_keys)
    data_background_samples_X, _ = X_y_data_with_list(data_background_samples, columns=sorted_keys)

    if FLAGS.model == "RandomForest": model = RandomForestModel()
    elif FLAGS.model == "LogisticRegression": model = LogisticRegressionModel()
    elif FLAGS.model == "KNeighbors": model = KNeighborsModel()
    elif FLAGS.model == "SupportVectorMachine": model = SupportVectorMachineModel()
    elif FLAGS.model == "MultiLayerPerceptron": model = MultiLayerPerceptronModel()
    elif FLAGS.model == "XGBoost": model = XGBoostModel()

    model.train(data_train, data_train)

    # Calculate SHAP values 
    explainer = get_shap_explainer(FLAGS.model, model.model, data_background_samples_X)
    # Calculate SHAP values
    raw_shap_values = explainer.shap_values(data_prediction_X)

    # --- Start of Unified SHAP Value Handling and Plotting ---
    # Determine the number of outputs from the SHAP values
    num_outputs = 1
    if isinstance(raw_shap_values, list):
        # If it's a list, the number of outputs is the length of the list
        num_outputs = len(raw_shap_values)
        logging.info(f"SHAP values are a list (multi-output detected). Will generate {num_outputs} plots.")
    elif raw_shap_values.ndim == 3:
        # If it's a 3D array, the last dimension is the number of outputs
        num_outputs = raw_shap_values.shape[2]
        logging.info(f"SHAP values are a 3D array (multi-output detected). Will generate {num_outputs} plots.")
    else:
        # Otherwise, it's a single 2D array for a single output
        logging.info("SHAP values are a single 2D array (single-output model detected). Will generate one plot.")

    # Create output directory if it doesn't exist
    os.makedirs(FLAGS.output_directory, exist_ok=True)

    # Iterate through each output
    for i in range(num_outputs):
        # Select the SHAP values for the current output
        shap_values_for_output = None
        if isinstance(raw_shap_values, list):
            shap_values_for_output = raw_shap_values[i]
        elif raw_shap_values.ndim == 3:
            shap_values_for_output = raw_shap_values[:, :, i]
        else: # This case is for a single 2D array, which means num_outputs must be 1 and i must be 0
            shap_values_for_output = raw_shap_values

        # Construct a specific filename for each output
        output_filename = os.path.join(
            FLAGS.output_directory,
            f"shap_{FLAGS.representation}_{FLAGS.train}_{FLAGS.test}_{i+1}"
        )

        # Save SHAP data
        np.savez_compressed(f"{output_filename}.npz", shap_values=shap_values_for_output, data_prediction=data_prediction_X)

        # The overall "importance" of each feature
        feature_importances = np.abs(shap_values_for_output).mean(axis=0)

        feature_names = data_prediction_X.columns
        feature_importance_df = pd.DataFrame({
            'Feature': feature_names,
            'Importance': feature_importances
        })

        with open(f"{output_filename}.yml", "w") as fout:
            yl.dump(feature_importance_df.to_dict(), fout)

        # Plot
        plt.style.use('seaborn-v0_8-darkgrid')
        plt.figure(figsize=(10, 7))

        # Plot the summary for the current output
        shap.summary_plot(
            shap_values_for_output,
            data_prediction_X,
            plot_type="dot",
            show=False,
            max_display=FLAGS.max_display
        )
        # Add a title specific to the output
        #plt.title(f'SHAP Summary Plot for Output {i+1}', fontsize=16)
        plt.tight_layout()

        # --- Remove the x-axis label ---
        ax = plt.gca() # Get the current axes
        ax.set_xlabel('') # Set the x-label to an empty string
        
        plt.savefig(f"{output_filename}.{FLAGS.plot_type}", format=FLAGS.plot_type, bbox_inches="tight")
        plt.close()
        logging.info(f"Summary Plot for Output {i+1} saved to '{output_filename}'.")


if __name__ == '__main__':
    app.run(main)        
