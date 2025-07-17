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
import yaml as yl
import numpy as np

from absl import app, flags, logging

from rouxinol.utility import train_test_data_with_dict, train_test_data_with_list, scale_datasets
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
    short_name="a"
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
    short_name="T"
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
    short_name="t"
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
    short_name="E"
)

flags.DEFINE_string(
    'scaler',
    default=None,
    help='Scaler filename',
    short_name="c"
)

flags.DEFINE_string(
    'model_directory',
    default='./output',
    help='Directory to save the best model',
    short_name="o"
)

flags.DEFINE_string(
    'output_directory',
    default='./output',
    help='Directory to save the predictions, metrics, and history',
    short_name="O"
)

flags.DEFINE_string(
    'model_name',
    default='best_model.pth',
    help='Name of the saved model file',
    short_name="M"
)

flags.DEFINE_integer(
    'patience',
    default=20,
    help='Patience for early stopping',
    short_name="p"
)

flags.DEFINE_integer(
    'num_epochs',
    default=100,
    help='Number of epochs',
    short_name="n"
)

flags.DEFINE_boolean(
    'use_patience',
    default=True,
    help='Apply early stopping if True',
    short_name="P"
)

flags.DEFINE_integer(
    'random_state',
    default=42,
    help='Random state for reproducibility',
    short_name="r"
)

flags.DEFINE_boolean(
    'fine_tuning',
    default=True,
    help='Enable fine-tuning the model',
    short_name="f"
)

flags.DEFINE_float(
    'fine_tuning_size',
    default=0.1,
    help='Proportion of the data for fine-tuning the model',
    short_name="F"
)

flags.DEFINE_float(
    'val_size',
    default=0.2,
    help='Proportion of the training set for validation',
    short_name="s"
)

flags.DEFINE_string(
    'predictions_filename',
    default='predictions_train.npz',
    help='Prediction filename',
    short_name="R"
)

flags.DEFINE_string(
    'metrics_filename',
    default='metrics_train.yml',
    help='Metrics filename',
    short_name="m"
)

flags.DEFINE_string(
    'history_filename',
    default='history_train.yml',
    help='Training history filename',
    short_name="h"
)

flags.DEFINE_string(
    'elapsed_filename',
    default='elapsed_time.yml',
    help='Elapsed time filename',
    short_name="e"
)

flags.DEFINE_integer(
    'hidden_size',
    default=256,
    help='Number of neurons in the hidden layer',
    short_name="H"
)

flags.DEFINE_integer(
    'batch_size',
    default=16,
    help='Size of each batch for training and validation',
    short_name="B"
)

flags.DEFINE_float(
    'learning_rate',
    default=0.0001,
    help='Learning rate for the optimizer',
    short_name="L"
)

flags.DEFINE_float(
    'dropout_rate',
    default=0.5,
    help='Dropout rate for regularization',
    short_name="D"
)

flags.DEFINE_integer(
    'num_layers',
    12,
    'Number of hidden layers',
    short_name="N"
)

flags.DEFINE_integer(
    'freeze_up_to',
    default=6,
    help='Number of layers to freeze',
    short_name="u"
)

flags.DEFINE_float(
    'learning_rate_reduction',
    default=0.1,
    help='Learing rate reduction',
    short_name="l"
)

# Mark required flags  
flags.mark_flag_as_required('baseline')  
flags.mark_flag_as_required('instructions_filename') 


# -------------------------------------------------
# Main routine
# -------------------------------------------------
def main(
    argv
):
    # Verify data directory
    if not os.path.isdir(FLAGS.data_directory):
        logging.error(f"Directory does not exist: {FLAGS.data_directory}")
        exit(1)

    # Statistics
    history = []
    elapsed = {}

    # Load and process the datatase
    start_time = time.perf_counter()

    data = load_offline_embedding(FLAGS.data_directory, FLAGS.instructions_filename, FLAGS.benchmarks, FLAGS.baseline, FLAGS.target)

    # Split the data
    if FLAGS.model == "L2P":
        data_fine_tuning, data_prediction,_ = train_test_data_with_dict(
                                                data, 
                                                test_ratio=1.0-FLAGS.fine_tuning_size, 
                                                transformer=FLAGS.transformation, 
                                                regression=True
                                            )


        data_fine_tuning, data_val_fine_tuning, _ = train_test_data_with_list(
                                                    data_fine_tuning, 
                                                    test_ratio=FLAGS.val_size, 
                                                    regression=True
                                                )        
    else:
        data_val_fine_tuning = []
        data_fine_tuning, data_prediction, _ = train_test_data_with_dict(
                                                data, 
                                                test_ratio=1.0, 
                                                transformer=FLAGS.transformation, 
                                                regression=True
                                            )
  
    if FLAGS.scaler:
        data_scaler, scaler = scale_datasets(data_fine_tuning, data_val_fine_tuning, data_prediction, scaler_filename=FLAGS.scaler)
        data_fine_tuning = data_scaler[0].copy()
        data_val_fine_tuning = data_scaler[1].copy()
        data_prediction = data_scaler[2].copy()

    end_time = time.perf_counter()
    elapsed["load dataset"] = end_time - start_time

    # The model
    config = {
        "input_size": len(data_prediction[0]["x"]), 
        "output_size": 2 if FLAGS.target == "both" else 1, 
        "hidden_size": FLAGS.hidden_size, 
        "dropout_rate": FLAGS.dropout_rate, 
        "num_layers": FLAGS.num_layers,
        "learning_rate": FLAGS.learning_rate * FLAGS.learning_rate_reduction,
        "batch_size": FLAGS.batch_size,
        "num_epochs": FLAGS.num_epochs,
        "early_stopping": 1 if FLAGS.use_patience else 0,
        "patience": FLAGS.patience,
        "restore_best_weights": 1
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
        elapsed["restore model"] = model.restore_weights_from_disk(model_path)
    else:
        elapsed["restore model"] = model.restore_model_from_disk(model_path)

    # Fine tuning
    if FLAGS.fine_tuning and FLAGS.model == "L2P":
        elapsed["freeze layers"] = model.freeze_layers(freeze_up_to=FLAGS.freeze_up_to)
        history, elapsed["train fine tuning"] = model.train(data_fine_tuning, data_val_fine_tuning, classification=False)

    # Test 
    data_test_y, data_pred_y, elapsed["predict"] = model.predict(data_prediction)

    # Create output directory
    os.makedirs(FLAGS.output_directory, exist_ok=True)

    y_test_revert = revert_transformer(data_test_y, FLAGS.transformation)
    y_pred_revert = revert_transformer(data_pred_y, FLAGS.transformation).squeeze()

    metrics = regression_metrics(y_test_revert, y_pred_revert)

    output_npz = os.path.join(FLAGS.output_directory, FLAGS.predictions_filename)
    np.savez_compressed(
        output_npz,
        y_test=y_test_revert,
        y_pred=y_pred_revert
    )
    logging.info(f"Predictions saved to {output_npz}")
 
    metrics_yml = os.path.join(FLAGS.output_directory, FLAGS.metrics_filename)
    with open(metrics_yml, 'w', encoding='utf-8') as yml_file:
        yl.dump(metrics, yml_file, default_flow_style=False, sort_keys=True)
    logging.info(f"Metrics saved to {metrics_yml}")

    # Save histogram
    history_yml = os.path.join(FLAGS.output_directory, FLAGS.history_filename)
    with open(history_yml, 'w', encoding='utf-8') as yml_file:
        yl.dump(history, yml_file, default_flow_style=False, sort_keys=True)
    logging.info(f"History saved to {history_yml}")
    
    # Save elapsed time
    elapsed_yml = os.path.join(FLAGS.output_directory, FLAGS.elapsed_filename)
    with open(elapsed_yml, 'w', encoding='utf-8') as yml_file:
        yl.dump(elapsed, yml_file, default_flow_style=False, sort_keys=True)
    logging.info(f"Elapsed time saved to {elapsed_yml}")


if __name__ == '__main__':
    app.run(main)        
