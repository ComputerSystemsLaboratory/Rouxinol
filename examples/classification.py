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

from rouxinol.utility import get_next_filename, split_dataset
from rouxinol.utility import split_train_test_data, transform_2d_to_1d_embeddings
from rouxinol.utility import transform_train_test_data_with_dict, transform_train_test_data_with_list

from rouxinol.learning.supervised.classification import RandomForestModel

flags.DEFINE_string("data_directory", None, "Data directory (ir, representation, exec, stats, ...)")
flags.DEFINE_string("dataset_name", None, "Dataset filename")
flags.DEFINE_string("train", "O0", "Train data")
flags.DEFINE_string("test", "O0", "Test data")

flags.DEFINE_integer("problems", 100, "Number of classes")
flags.DEFINE_integer("samples", 500, "Number of samples per problem")

flags.DEFINE_float("test_ratio", 0.2, "Number of test samples")

flags.DEFINE_boolean("shuffle", False, "Shuffle the dataset before selection")
flags.DEFINE_boolean("static", False, "Enable CFGgrind static histogram")

flags.DEFINE_enum("representation", "llvmHistogram", ["llvmHistogram", "x86Histogram", "cfggrindDynamicHistogram", "cfggrindHybridHistogram", "performanceCounterHistogram", "ir2vec", "inst2vecPreprocessed", "inst2vecEmbeddings"], "Representations to evaluate")

flags.mark_flag_as_required("data_directory")


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

    for key in tqdm(["train", "test"], desc="Processing datasets"):  
        label_dir = FLAGS.train if key == "train" else FLAGS.test  
        dataset_items = list(dataset[key].items())  # Convert to list for tqdm compatibility  
        for idx, (problem, samples) in tqdm(enumerate(dataset_items), desc=f"Processing {key} problems", leave=False):  
            for sample in tqdm(samples, desc=f"Processing samples for {problem}", leave=False): 
                if FLAGS.representation == "inst2vecPreprocessed" or FLAGS.representation == "inst2vecEmbeddings":
                    embeddings_filename = os.path.join(FLAGS.data_directory, label_dir, problem, FLAGS.representation, f"{sample}.npz")
                    if os.path.isfile(embeddings_filename):
                        inst2vec = np.load(embeddings_filename)
                        if inst2vec:
                            data.append({"x": inst2vec["embeddings"], "y": idx, "info": key})
                else:
                    embeddings_filename = os.path.join(FLAGS.data_directory, label_dir, problem, FLAGS.representation, f"{sample}.yml")
                    if os.path.isfile(embeddings_filename):
                        with open(embeddings_filename, "r") as fin:
                            embeddings = yl.load(fin, Loader=yl.FullLoader)
                        if embeddings:
                            data.append({"x": embeddings, "y": idx, "info": key})

    # Prepare the data
    model_transform = {
        "llvmHistogram": (RandomForestModel, transform_train_test_data_with_dict),
        "x86Histogram": (RandomForestModel, transform_train_test_data_with_dict),
        "cfggrindDynamicHistogram": (RandomForestModel, transform_train_test_data_with_dict),
        "cfggrindHybridHistogram": (RandomForestModel, transform_train_test_data_with_dict),
        "performanceCounterHistogram": (RandomForestModel, transform_train_test_data_with_dict),
        "ir2vec": (RandomForestModel, transform_train_test_data_with_list),
        "inst2vecPreprocessed": (RandomForestModel, transform_train_test_data_with_list),
        "inst2vecEmbeddings": (RandomForestModel, transform_train_test_data_with_list)
    }
    model_class, transform_data = model_transform[FLAGS.representation]
    model = model_class()

    if FLAGS.representation == "inst2vecEmbeddings" and isinstance(model, RandomForestModel):
        data = transform_2d_to_1d_embeddings(data)

    data_train, data_test = transform_data(data)

    # Training and test
    model.train(data_train, data_train)
    f1, acc, recall, precision, y_test, y_pred = model.predict(data_test)

    os.makedirs(os.path.join(FLAGS.data_directory, "stats"), exist_ok=True)

    stats = {"f1": f1, "acc": acc, "recall": recall, "precision": precision, "y_test": y_test, "y_pred": y_pred.tolist()}
    dataset_name = os.path.basename(FLAGS.dataset_name)
    representation = f"{FLAGS.representation}_static" if FLAGS.static else FLAGS.representation
    stats_filename = get_next_filename(
                        os.path.join(FLAGS.data_directory, "stats", f"stats_{representation}_{FLAGS.train}_{FLAGS.test}"),
                        "yml"
                )
    with open(os.path.join(FLAGS.data_directory, stats_filename), "w") as fout:
        yl.dump(stats, fout)


# Execute
if __name__ == "__main__":
    # app
    app.run(main)

