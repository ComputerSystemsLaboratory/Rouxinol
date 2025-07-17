"""
SAMOS 2025 Artifact
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
import matplotlib.pyplot as plt

from absl import app, flags, logging

from rouxinol.utility import train_test_data_with_dict, X_y_data_with_list, scale_datasets
from rouxinol.utility import regression_metrics, revert_transformer

from rouxinol.learning.supervised.regression import RandomForestModel
from rouxinol.learning.supervised.regression import LinearRegressionModel
from rouxinol.learning.supervised.regression import KNeighborsModel
from rouxinol.learning.supervised.regression import SupportVectorMachineModel
from rouxinol.learning.supervised.regression import MultiLayerPerceptronModel
from rouxinol.learning.supervised.regression import XGBoostModel
from rouxinol.learning.supervised.regression import L2PModel

from utility import parse_log_file, load_offline_embedding

# -------------------------
# Define command-line flags
# -------------------------
FLAGS = flags.FLAGS

flags.DEFINE_list(
    'benchmarks',
    default=[
            'LiRnQ',
            'LiRQ',
            'LoRnQ',
            'LoRQ'
    ],
    help='Training benchmarks',
    short_name="b"
)

flags.DEFINE_string(
    'baseline',
    default=None,
    help='Baseline filename to calculate speedup',
    short_name="B"
)

flags.DEFINE_string(
    'instructions_filename',
    default=None,
    help='Path to a YAML file containing a list of keys',
    short_name="i"
)

flags.DEFINE_enum(
    'transformation',
    default='sqrt',
    enum_values=[
                'original',
                'sqrt',
                'log'
    ],
    help='Apply a transformation to the target column',
    short_name="t"
)

flags.DEFINE_string(
    'data_directory',
    default='./data',
    help='UPMEM logs directory',
    short_name="d"
)

flags.DEFINE_enum(
    'target',
    default='runtime',
    enum_values=[
                'runtime',
                'speedup',
                'both'
    ],
    help='Metric(s) to use as the target(s) (y)',
    short_name="T"
)

flags.DEFINE_enum(
    'model',
    default='RandomForest',
    enum_values=[
                'RandomForest',
                'LinearRegression',
                'KNeighbors',
                'SupportVectorMachine',
                'MultiLayerPerceptron',
                'XGBoost',
                'L2P'
    ],
    help='Model',
    short_name="m"
)

flags.DEFINE_string(
    'scaler',
    default=None,
    help='Scaler filename',
    short_name="s"
)

flags.DEFINE_string(
    'model_directory',
    default='./output',
    help='Directory to save the best model',
    short_name="M"
)

flags.DEFINE_string(
    'output_directory',
    default='./output',
    help='Directory to save the plot',
    short_name="o"
)

flags.DEFINE_string(
    'model_name',
    default='best_model.pth',
    help='Name of the saved model file',
    short_name="n"
)


flags.DEFINE_float(
    'background_samples_size',
    default=0.1,
    help='Samples to serve as background for SHAP explanation',
    short_name="S"
)

flags.DEFINE_integer(
    'hidden_size',
    default=256,
    help='Number of neurons in the hidden layer',
    short_name="h"
)

flags.DEFINE_float(
    'dropout_rate',
    default=0.5,
    help='Dropout rate for regularization',
    short_name="r"
)

flags.DEFINE_integer(
    'num_layers',
    default=12,
    help='Number of hidden layers',
    short_name="l"
)

flags.DEFINE_integer(
    'max_display',
    default=None,
    help='Display the top K most important features',
    short_name="D"
)

flags.DEFINE_string(
    'plot_name',
    default='shap.pdf',
    help='Name of the SHAP summary plot',
    short_name="p"
)

flags.DEFINE_string(
    'plot_type',
    default='pdf',
    help='Type of the SHAP summary plot',
    short_name="P"
)

# Mark required flags
flags.mark_flag_as_required('baseline')
flags.mark_flag_as_required('instructions_filename')


def get_shap_explainer(
    model_type,
    model,
    background_data
):
    """
    Returns a SHAP explainer for regression models.

    This function intelligently selects the appropriate SHAP explainer based on the
    type of the regression model provided. Different model types benefit from
    different SHAP explainers for optimal performance and accuracy.

    Parameters:
        model_type (str): A string indicating the type of the regression model.
                          Supported types include:
                          - "RandomForest": For RandomForestRegressor.
                          - "XGBoost": For XGBoostRegressor.
                          - "LinearRegression": For sklearn.linear_model.LinearRegression.
                          - "KNeighbors": For KNeighborsRegressor.
                          - "SupportVectorMachine": For Support Vector Regressor (SVR).
                          - "MultiLayerPerceptron", "L2P": For MLPRegressor (Neural Networks).
        model: The trained regression model object. This model should have a
               `.predict()` method that returns the continuous prediction.
        background_data (pd.DataFrame or np.array): A representative sample of the
                                                    training data. This is crucial
                                                    for model-agnostic explainers
                                                    (like KernelExplainer and DeepExplainer)
                                                    to establish a baseline for feature
                                                    "absence." For large datasets,
                                                    consider using a small, random subset
                                                    (e.g., 50-100 samples) to speed up
                                                    computation.

    Returns:
        shap.Explainer: A SHAP explainer object configured for the specified model type.

    Raises:
        ValueError: If an unsupported model_type is provided.
    """
    explainer = None

    # Tree-based models (RandomForest, XGBoost)
    # shap.TreeExplainer is highly optimized for these models, providing exact SHAP values
    # efficiently. For regression, the default `model_output` (raw prediction) is usually
    # what we want to explain.
    if model_type in ["RandomForest", "XGBoost"]:
        explainer = shap.TreeExplainer(model, data=background_data)
    # Linear Regression
    # shap.LinearExplainer is specifically designed for linear models. It's very fast
    # and provides exact SHAP values by leveraging the linear structure of the model.
    elif model_type == "LinearRegression":
        explainer = shap.LinearExplainer(model, data=background_data)
    # K-Nearest Neighbors and Support Vector Machines (SVR)
    # shap.KernelExplainer is a model-agnostic explainer. It works by perturbing
    # input features and observing changes in the model's output. It requires
    # a prediction function (model.predict) and a background dataset to simulate
    # feature "absence." This can be computationally intensive for large datasets.
    elif model_type in ["KNeighbors", "SupportVectorMachine"]:
        explainer = shap.KernelExplainer(model.predict, data=background_data)
    # Multi-Layer Perceptron (Neural Networks)
    # shap.DeepExplainer is optimized for deep learning models (like those built
    # with TensorFlow/Keras or PyTorch). It leverages the structure of neural
    # networks to compute SHAP values more efficiently than KernelExplainer
    # for these models. If DeepExplainer is not applicable or fails (e.g., due
    # to framework mismatch or specific model architecture), it falls back to
    # the more general KernelExplainer.
    elif model_type in ["MultiLayerPerceptron", "L2P"]:
        try:
            explainer = shap.DeepExplainer(model, data=background_data)
        except Exception as e:
            logging.warning(f"DeepExplainer failed ({e}). Reverting to KernelExplainer.")
            explainer = shap.KernelExplainer(model.predict, data=background_data)
    else:
        raise ValueError(f"Unsupported model type for regression: {model_type}")

    return explainer


# -------------------------------------------------
# Main routine
# -------------------------------------------------
def main(
    argv
):
    # Verify data directory
    if not os.path.isdir(FLAGS.data_directory):
        logging.error(f"Directory does not exist: {FLAGS.data_directory}")
        sys.exit(1)

    data = load_offline_embedding(FLAGS.data_directory, FLAGS.instructions_filename, FLAGS.benchmarks, FLAGS.baseline, FLAGS.target)

    # Split the data
    if FLAGS.model != "LinearRegression":
        data_prediction, data_background_samples, sorted_keys = train_test_data_with_dict(
                                                                    data,
                                                                    test_ratio=FLAGS.background_samples_size,
                                                                    transformer=FLAGS.transformation,
                                                                    regression=True
                                                                )
    else:
        data_background_samples = []
        _, data_prediction, _ = train_test_data_with_dict(
                                    data,
                                    test_ratio=1.0,
                                    transformer=FLAGS.transformation,
                                    regression=True
                                )
    if FLAGS.scaler:
        data_scaler, scaler = scale_datasets(data_prediction, data_background_samples, scaler_filename=FLAGS.scaler)
        data_prediction = data_scaler[0].copy()
        data_background_samples = data_scaler[1].copy()

    data_prediction_X, _ = X_y_data_with_list(data_prediction, columns=sorted_keys)

    # Ensure data_background_samples_X is defined even if data_background_samples is empty
    if not data_background_samples:
        data_background_samples_X = pd.DataFrame()
    else:
        data_background_samples_X, _ = X_y_data_with_list(data_background_samples, columns=sorted_keys)


    # The model
    config = {
        "input_size": len(data_prediction[0]["x"]),
        "output_size": 2 if FLAGS.target == "both" else 1, # This is the key: output_size can be 2
        "hidden_size": FLAGS.hidden_size,
        "dropout_rate": FLAGS.dropout_rate,
        "num_layers": FLAGS.num_layers
    }

    if FLAGS.model == "RandomForest": model = RandomForestModel()
    elif FLAGS.model == "LinearRegression": model = LinearRegressionModel()
    elif FLAGS.model == "KNeighbors": model = KNeighborsModel()
    elif FLAGS.model == "SupportVectorMachine": model = SupportVectorMachineModel()
    elif FLAGS.model == "MultiLayerPerceptron": model = MultiLayerPerceptronModel()
    elif FLAGS.model == "XGBoost": model = XGBoostModel()
    elif FLAGS.model == "L2P": model = L2PModel(config)

    # Load the pre trainined model
    model_path = os.path.join(FLAGS.model_directory, FLAGS.model_name)
    if FLAGS.model == "L2P":
        model.restore_weights_from_disk(model_path)
    else:
        model.restore_model_from_disk(model_path)

    # Initialize the SHAP explainer
    explainer = get_shap_explainer(FLAGS.model, model.model, data_background_samples_X)

    # Make a prediction to check the model's output shape
    pred = model.model.predict(data_prediction_X)
    logging.info(f"Model prediction shape: {pred.shape}")

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
        base_name, ext = os.path.splitext(FLAGS.plot_name)
        output_filename = os.path.join(
            FLAGS.output_directory,
            f"{base_name}_output_{i+1}{ext}"
        )

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
        
        plt.savefig(output_filename, format=FLAGS.plot_type, bbox_inches="tight")
        plt.close()
        logging.info(f"Summary Plot for Output {i+1} saved to '{output_filename}'.")


if __name__ == '__main__':
    app.run(main)
