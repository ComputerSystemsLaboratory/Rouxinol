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
import itertools
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


flags.mark_flag_as_required('dataset_name')
flags.mark_flag_as_required('data_directory')
flags.mark_flag_as_required('statistics_directory')

FLAGS = flags.FLAGS


def get_all_subsets(input_list):
    """
    Generates all possible unique subsets of a given list, excluding the empty set.

    The order of elements within a subset does not matter, and subsets
    of all possible lengths (from 1 to the length of the input list) are included.

    Args:
        input_list (list): The list from which to generate subsets.

    Returns:
        list: A list of set objects, where each set is a unique subset
              of the input_list, and the empty set is excluded.
    """
    all_subsets = []
    n = len(input_list)

    # Iterate through all possible subset lengths, from 1 to n (excluding 0 for the empty set)
    for r in range(1, n + 1): # Changed range from (0, n + 1) to (1, n + 1)
        # Use itertools.combinations to get all unique combinations of length r.
        # combinations ensures that the order does not matter (e.g., (a,b) is
        # the same as (b,a), so only one is generated).
        for combo in itertools.combinations(input_list, r):
            # Convert the tuple combination to a set to explicitly represent
            # it as a mathematical set where order is irrelevant.
            all_subsets.append(list(combo))

    return all_subsets


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

    # Create features sets
    all_features = set()  
    for item in data:  
        all_features.update(item['x'].keys())

    feature_sets = get_all_subsets(list(all_features))

    # Output
    os.makedirs(FLAGS.statistics_directory, exist_ok=True)

    # Save sets
    sets_dict = {idx:feature_set for idx, feature_set in enumerate(feature_sets)}
    with open(os.path.join(FLAGS.statistics_directory, "sets.yml"), "w") as fout:
        yl.dump(sets_dict, fout)

    # Evaluate the sets    
    for idx, feature_set in enumerate(feature_sets):
        # The model
        if FLAGS.model == "RandomForest": model = RandomForestModel()
        elif FLAGS.model == "LogisticRegression": model = LogisticRegressionModel()
        elif FLAGS.model == "KNeighbors": model = KNeighborsModel()
        elif FLAGS.model == "SupportVectorMachine": model = SupportVectorMachineModel()
        elif FLAGS.model == "MultiLayerPerceptron": model = MultiLayerPerceptronModel()
        elif FLAGS.model == "XGBoost": model = XGBoostModel()
        
        # Prepare data
        data_train = [item for item in data if item["info"] == "train"]  
        data_test = [item for item in data if item["info"] == "test"]
        data_train, data_test = train_test_data_with_dict_and_label(data, use_only_keys=feature_set)

        # Training and test
        model.train(data_train, data_train)
        y_test, y_pred, _ = model.predict(data_test)

        # Metrics
        metrics = classification_metrics(y_test, y_pred)
        stats = {
            "features": feature_set,
            "f1": metrics["F1-Score"], 
            "acc": metrics["Accuracy"], 
            "recall": metrics["Recall"], 
            "precision": metrics["Precision"], 
            "y_test": y_test, 
            "y_pred": y_pred.tolist()
        }

        stats_filename = get_next_filename(
                            os.path.join(FLAGS.statistics_directory, f"stats_{FLAGS.representation}_{FLAGS.train}_{FLAGS.test}_set_{idx}"),
                            "yml"
                    )
        with open(stats_filename, "w") as fout:
            yl.dump(stats, fout)


# Execute
if __name__ == "__main__":
    # app
    app.run(main)

