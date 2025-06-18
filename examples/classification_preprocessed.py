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

from rouxinol.learning.supervised.classification import RandomForestModel, LSTMModel

flags.DEFINE_string("output_directory", None, "Output directory (ir, representation, exec, stats, ...)")
flags.DEFINE_string("dataset_name", None, "Dataset filename")
flags.DEFINE_string("train", "O0", "Train data")
flags.DEFINE_string("test", "O0", "Test data")

flags.DEFINE_integer("problems", 100, "Number of classes")
flags.DEFINE_integer("samples", 500, "Number of samples per problem")

flags.DEFINE_float("test_ratio", 0.2, "Number of test samples")

flags.DEFINE_boolean("shuffle", False, "Shuffle the dataset before selection")

flags.DEFINE_enum("representation", "llvmHistogram", ["llvmHistogram", "x86Histogram", "cfggrindDynamicHistogram", "cfggrindHybridHistogram", "performanceCounterHistogram", "ir2vec", "inst2vecPreprocessed", "inst2vecEmbeddings"], "Representations to evaluate")

flags.mark_flag_as_required("output_directory")


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
                    embeddings_filename = os.path.join(FLAGS.output_directory, label_dir, problem, "inst2vecPreprocessed", f"{sample}.npz")
                    if os.path.isfile(embeddings_filename):
                        inst2vec = np.load(embeddings_filename)
                        if inst2vec:
                            max_len.append(len(inst2vec["embeddings"]))
                            data.append({"x": inst2vec["embeddings"], "y": idx, "info": key})
                else:
                    embeddings_filename = os.path.join(FLAGS.output_directory, label_dir, problem, FLAGS.representation, f"{sample}.yml")
                    if os.path.isfile(embeddings_filename):
                        with open(embeddings_filename, "r") as fin:
                            embeddings = yl.load(fin, Loader=yl.FullLoader)
                        if embeddings:
                            data.append({"x": embeddings, "y": idx, "info": key})

    if FLAGS.representation == "inst2vecPreprocessed":
        data = transform_1d_to_1d_embeddings(data, strategy="padding", pad_value=8564)

    model_transform = {
        "llvmHistogram": (RandomForestModel, train_test_data_with_dict_and_label),
        "x86Histogram": (RandomForestModel, train_test_data_with_dict_and_label),
        "cfggrindDynamicHistogram": (RandomForestModel, train_test_data_with_dict_and_label),
        "cfggrindHybridHistogram": (RandomForestModel, train_test_data_with_dict_and_label),
        "performanceCounterHistogram": (RandomForestModel, train_test_data_with_dict_and_label),
        "ir2vec": (RandomForestModel, train_test_data_with_list_and_label),
        "inst2vecPreprocessed": (RandomForestModel, train_test_data_with_list_and_label),
        "inst2vecEmbeddings": (LSTMModel, train_test_data_with_list_and_label)
    }
    model_class, transform_data = model_transform[FLAGS.representation]
    
    if FLAGS.representation == "inst2vecEmbeddings":
        model = model_class(embedding_dim=200, dense_layer_size=32, num_classes=FLAGS.problems, max_len=max(max_len))
    else:     
        model = model_class()


    data_train, data_test = transform_data(data)

    # Training and test
    model.train(data_train, data_train)
    y_test, y_pred = model.predict(data_test)

    metrics = classification_metrics(y_test, y_pred)

    os.makedirs(os.path.join(FLAGS.output_directory, "statistics"), exist_ok=True)

    stats = {
        "f1": metrics["F1-Score"], 
        "acc": metrics["Accuracy"], 
        "recall": metrics["Recall"], 
        "precision": metrics["Precision"], 
        "y_test": y_test, 
        "y_pred": y_pred.tolist()
    }

    dataset_name = os.path.basename(FLAGS.dataset_name)
    stats_filename = get_next_filename(
                        os.path.join(FLAGS.output_directory, "statistics", f"stats_{FLAGS.representation}_{FLAGS.train}_{FLAGS.test}"),
                        "yml"
                )
    with open(os.path.join(FLAGS.output_directory, stats_filename), "w") as fout:
        yl.dump(stats, fout)


# Execute
if __name__ == "__main__":
    # app
    app.run(main)

