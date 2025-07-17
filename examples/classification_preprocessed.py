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
from rouxinol.utility import split_train_test_data, transform_1d_to_1d_embeddings, transform_2d_to_1d_embeddings
from rouxinol.utility import train_test_data_with_dict_and_label, train_test_data_with_list_and_label


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
                    'performanceCounterHistogram',
                    'inst2vecPreprocessed',
                    'inst2vecEmbeddings',
                    'ir2vec'
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
                if FLAGS.representation == "inst2vecPreprocessed" or FLAGS.representation == "inst2vecEmbeddings":
                    embeddings_filename = os.path.join(FLAGS.data_directory, label_dir, problem, "inst2vecPreprocessed", f"{sample}.npz")
                    if os.path.isfile(embeddings_filename):
                        inst2vec = np.load(embeddings_filename)
                        if inst2vec:
                            max_len.append(len(inst2vec["embeddings"]))
                            data.append({"x": inst2vec["embeddings"], "y": idx, "info": key})
                else:
                    embeddings_filename = os.path.join(FLAGS.data_directory, label_dir, problem, FLAGS.representation, f"{sample}.yml")
                    if os.path.isfile(embeddings_filename):
                        with open(embeddings_filename, "r") as fin:
                            embeddings = yl.load(fin, Loader=yl.FullLoader)
                        if embeddings:
                            data.append({"x": embeddings, "y": idx, "info": key})

    if FLAGS.representation == "inst2vecPreprocessed":
        data = transform_1d_to_1d_embeddings(data, strategy="padding", pad_value=8564)

    if FLAGS.representation in ["ir2vec", "inst2vecPreprocessed", "inst2vecEmbeddings"]:
        data_train, data_test = train_test_data_with_list_and_label(data)
    else:
        data_train, data_test = train_test_data_with_dict_and_label(data)

    if FLAGS.model == "RandomForest": model = RandomForestModel()
    elif FLAGS.model == "LogisticRegression": model = LogisticRegressionModel()
    elif FLAGS.model == "KNeighbors": model = KNeighborsModel()
    elif FLAGS.model == "SupportVectorMachine": model = SupportVectorMachineModel()
    elif FLAGS.model == "MultiLayerPerceptron": model = MultiLayerPerceptronModel()
    elif FLAGS.model == "XGBoost": model = XGBoostModel()
    elif FLAGS.model == "LSTM": model = LSTMModel(embedding_dim=200, dense_layer_size=32, num_classes=FLAGS.problems, max_len=max(max_len))

    # Training and test
    model.train(data_train, data_train)
    y_test, y_pred, _ = model.predict(data_test)

    metrics = classification_metrics(y_test, y_pred)

    os.makedirs(FLAGS.statistics_directory, exist_ok=True)

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

