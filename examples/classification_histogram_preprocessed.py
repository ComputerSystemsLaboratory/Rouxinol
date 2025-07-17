"""
Rouxinol an infrastructure to explore code generation and machine learning models.
Copyright (C) 2023 Anderson Faustino da Silva

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
import random 
import numpy as np 
import yaml as yl

from tqdm import tqdm
from absl import app, flags

from rouxinol.utility import get_next_filename, split_dataset, classification_metrics
from rouxinol.utility import train_test_data_with_dict_and_label

from rouxinol.learning.supervised.classification import RandomForestModel
from rouxinol.learning.supervised.classification import LogisticRegressionModel
from rouxinol.learning.supervised.classification import KNeighborsModel
from rouxinol.learning.supervised.classification import SupportVectorMachineModel
from rouxinol.learning.supervised.classification import MultiLayerPerceptronModel
from rouxinol.learning.supervised.classification import XGBoostModel


flags.DEFINE_string(
    'data_directory', 
    default=None, 
    help='Data directory (ir, representation, exec, ...)',
    short_name='d'
)

flags.DEFINE_string(
    'statistics_directory', 
    default=None, 
    help='Statistics output directory',
    short_name='D'
)

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
    short_name='t'
)

flags.DEFINE_string(
    'test', 
    default='O0', 
    help='Test data',
    short_name='T'
)

flags.DEFINE_integer(
    'problems', 
    default=100, 
    help='Number of classes',
    short_name='p'
)

flags.DEFINE_integer(
    'samples', 
    default=500, 
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
    enum_values=[
                    'llvmHistogram', 
                    'x86Histogram', 
                    'cfggrindDynamicHistogram', 
                    'cfggrindHybridHistogram', 
                    'performanceCounterHistogram'
                ], 
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
    short_name='m'
)

flags.DEFINE_list(
    'keys', 
    default=None,
    help='Keys for constructing the histogram',
    short_name='k'
)

flags.mark_flag_as_required('dataset_name')
flags.mark_flag_as_required('data_directory')
flags.mark_flag_as_required('statistics_directory')


FLAGS = flags.FLAGS


# HALIDE / ZIG
amd_counters = [
    "L1-dcache-load-misses", 
    "L1-dcache-loads", 
    "L1-dcache-prefetches", 
    "L1-icache-load-misses", 
    "L1-icache-loads"
    "branch-instructions",
    "branch-load-misses",
    "branch-loads",
    "branch-misses",
    "cache-misses",
    "cache-references",
    "cycles",
    "dTLB-load-misses",
    "dTLB-loads",
    "faults",
    "iTLB-load-misses",
    "iTLB-loads",
    "instructions",
    "stalled-cycles-backend",
    "stalled-cycles-frontend"
]

# SHAKESPEARE
intel_counters = [
    "L1-dcache-load-misses",
    "L1-dcache-loads", 
    "L1-dcache-stores", 
    "L1-icache-load-misses",
    "LLC-load-misses", 
    "LLC-loads", 
    "LLC-store-misses", 
    "LLC-stores", 
    "branch-instructions",
    "branch-load-misses",
    "branch-loads",
    "branch-misses",
    "cache-misses",
    "cache-references",
    "cycles",
    "dTLB-load-misses",
    "dTLB-loads",
    "dTLB-store-misses",
    "dTLB-stores",
    "faults",
    "iTLB-load-misses",
    "iTLB-loads",
    "instructions"
]

# COMMON
common_keys = [
    "L1-dcache-load-misses",
    "L1-dcache-loads",
    "branch-instructions",
    "branch-load-misses",
    "branch-loads",
    "branch-misses",
    "cache-misses",
    "cache-references",
    "cycles",
    "dTLB-load-misses",
    "dTLB-loads",
    "faults",
    "iTLB-load-misses",
    "iTLB-loads",
    "instructions"
]


def main(argv):
    """Source -> LLVM."""
    del argv

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

    data_train, data_test = train_test_data_with_dict_and_label(data, use_only_keys=FLAGS.keys)

    # Training and test
    if FLAGS.model == "RandomForest": model = RandomForestModel()
    elif FLAGS.model == "LogisticRegression": model = LogisticRegressionModel()
    elif FLAGS.model == "KNeighbors": model = KNeighborsModel()
    elif FLAGS.model == "SupportVectorMachine": model = SupportVectorMachineModel()
    elif FLAGS.model == "MultiLayerPerceptron": model = MultiLayerPerceptronModel()
    elif FLAGS.model == "XGBoost": model = XGBoostModel()

    model.train(data_train, data_train)
    y_test, y_pred, _ = model.predict(data_test)

    # Metrics
    os.makedirs(FLAGS.statistics_directory, exist_ok=True)
    
    metrics = classification_metrics(y_test, y_pred)
    stats = {
        "f1": metrics["F1-Score"], 
        "acc": metrics["Accuracy"], 
        "recall": metrics["Recall"], 
        "precision": metrics["Precision"], 
        "y_test": y_test, 
        "y_pred": y_pred.tolist()
    }

    stats_filename = get_next_filename(
                        os.path.join(FLAGS.statistics_directory, f"stats_{FLAGS.representation}_{FLAGS.train}_{FLAGS.test}"),
                        "yml"
                )
    with open(os.path.join(FLAGS.output_directory, stats_filename), "w") as fout:
        yl.dump(stats, fout)


# Execute
if __name__ == "__main__":
    # app
    app.run(main)

