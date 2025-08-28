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
import yaml as yl

from tqdm import tqdm  
from absl import app, flags

from rouxinol.utility import get_next_filename, split_dataset
from rouxinol.utility import split_train_test_data, classification_metrics

from rouxinol.transformer import LLVMGraphBuilder
from rouxinol.transformer import LLVMProGraMLVisitor
from rouxinol.transformer import LLVMCFGVisitor
from rouxinol.transformer import LLVMCFGCompactVisitor
from rouxinol.transformer import LLVMCFGCallVisitor
from rouxinol.transformer import LLVMCFGCallCompactVisitor
from rouxinol.transformer import LLVMCFGCallCompactSingleVisitor
from rouxinol.transformer import LLVMCDFGVisitor
from rouxinol.transformer import LLVMCDFGCompactVisitor
from rouxinol.transformer import LLVMCDFGCompactSingleVisitor
from rouxinol.transformer import LLVMCDFGCallVisitor
from rouxinol.transformer import LLVMCDFGCallCompactVisitor
from rouxinol.transformer import LLVMCDFGCallCompactSingleVisitor
from rouxinol.transformer import LLVMCDFGPlusVisitor
from rouxinol.transformer import LLVMProGraMLVisitor

from rouxinol.learning.supervised.classification import GGNNModel

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
    default=32, 
    help='Number of classes',
    short_name='p'
)

flags.DEFINE_integer(
    'samples', 
    default=100, 
    help='Number of samples per problem',
    short_name='s'
)

flags.DEFINE_integer(
    'timesteps', 
    4, 
    'Number of time steps',
    short_name='i'
)

flags.DEFINE_integer(
    'emb_dim', 
    64, 
    'Embeddings dimension',
    short_name='m'
)

flags.DEFINE_integer(
    'gnn_h_size', 
    32, 
    'GNN H size',
    short_name='g'
)

flags.DEFINE_integer(
    'batch_size', 
    64 , 
    'Batch size',
    short_name='b'
)

flags.DEFINE_integer(
    'epochs', 
    500, 
    'Number of epochs',
    short_name='e'
)

flags.DEFINE_integer(
    'patience', 
    50, 
    'Patience',
    short_name='P'
)

flags.DEFINE_float(
    'test_ratio', 
    default=0.2, 
    help='Number of test samples',
    short_name='R'
)

flags.DEFINE_float(
    'learning_rate', 
    default=0.001, 
    help='Learning rate',
    short_name='l'
)

flags.DEFINE_boolean(
    'shuffle', 
    default=False, 
    help='Shuffle the dataset before selection',
    short_name='S'
)

flags.DEFINE_boolean(
    'early_stopping', 
    default=True, 
    help='Enable early stopping',
    short_name='E'
)

flags.DEFINE_boolean(
    'restore_best_weights', 
    default=True, 
    help='Restore the best weights',
    short_name='w'
)

flags.DEFINE_enum(
    'representation', 
    default='programl', 
    enum_values=[
            'cfg', 
            'cfgc', 
            'cfgcall', 
            'cfgcallc', 
            'cfgcallcs', 
            'cdfg', 
            'cdfgc', 
            'cdfgcs', 
            'cdfgcall', 
            'cdfgcallc', 
            'cdfgcallcs', 
            'cdfgplus', 
            'programl'
        ], 
    help='Representation',
    short_name='r'
)

flags.mark_flag_as_required('dataset_name')
flags.mark_flag_as_required('data_directory')
flags.mark_flag_as_required('statistics_directory')

FLAGS = flags.FLAGS


def main(argv):
    """Source -> LLVM."""
    del argv

    # Visitor

    graph_params = {
        "cfg": (LLVMCFGVisitor, 1),
        "cfgc": (LLVMCFGCompactVisitor, 1),
        "cfgcall": (LLVMCFGCallVisitor, 2),
        "cfgcallc": (LLVMCFGCallCompactVisitor, 2),
        "cfgcallcs": (LLVMCFGCallCompactSingleVisitor, 2),
        "cdfg": (LLVMCDFGVisitor, 3),
        "cdfgc": (LLVMCDFGCompactVisitor, 3),
        "cdfgcs": (LLVMCDFGCompactSingleVisitor, 3),
        "cdfgcall": (LLVMCDFGCallVisitor, 4),
        "cdfgcallc": (LLVMCDFGCallCompactVisitor, 4),
        "cdfgcallcs": (LLVMCDFGCallCompactSingleVisitor, 4),
        "cdfgplus": (LLVMCDFGPlusVisitor, 5),
        "programl": (LLVMProGraMLVisitor, 3)
    }
    
    # Load the dataset
    dataset = split_dataset(
                FLAGS.dataset_name,
                num_problems=FLAGS.problems,
                num_samples=FLAGS.samples,
                test_ratio=FLAGS.test_ratio,
                shuffle=FLAGS.shuffle
            )
    
    data = []
        
    builder = LLVMGraphBuilder()
    visitor, num_edge_types = graph_params[FLAGS.representation]

    for key in tqdm(["train", "test"], desc="Processing datasets"):  
        label_dir = FLAGS.train if key == "train" else FLAGS.test  
        dataset_items = list(dataset[key].items())  # Convert to list for tqdm compatibility  
        for idx, (problem, samples) in tqdm(enumerate(dataset_items), desc=f"Processing {key} problems", leave=False):  
            for sample in tqdm(samples, desc=f"Processing samples for {problem}", leave=False):  
                in_filename = os.path.join(FLAGS.data_directory, label_dir, problem, "ir", f"{sample}.ll")  
                if os.path.isfile(in_filename):
                    info = builder.string_to_info(  
                                        in_filename  
                            )  
                    
                    embeddings = builder.info_to_representation(  
                                            info,  
                                            visitor=visitor 
                                )  

                    if embeddings:  
                        data.append({"x": embeddings, "y": idx, "info": key})

    # Prepare the data
    data_train, data_test = split_train_test_data(data)
    
    # Training and test            
    config = {
        "num_timesteps": FLAGS.timesteps,
        "emb_dim": FLAGS.emb_dim,
        "gnn_h_size": FLAGS.gnn_h_size,
        "num_edge_types": num_edge_types,
        "learning_rate": FLAGS.learning_rate,
        "batch_size": FLAGS.batch_size,
        "num_epochs": FLAGS.epochs,
        "early_stopping": 1 if FLAGS.early_stopping else 0,
        "restore_best_weights": 1 if FLAGS.restore_best_weights else 0,
        "patience": FLAGS.patience,
        "num_classes": FLAGS.problems,
        "num_types": builder.num_attrs()
    }
    model = GGNNModel(config=config)

    train_summary, _ = model.train(data_train, data_train)
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
        "y_pred": y_pred.tolist(),
        "train_summary": train_summary
    }

    stats_filename = get_next_filename(
                        os.path.join(FLAGS.statistics_directory, f"stats_{FLAGS.representation}_{FLAGS.train}_{FLAGS.test}"),
                        "yml"
                )
    with open(stats_filename, "w") as fout:
        yl.dump(stats, fout)


# Execute
if __name__ == "__main__":
    # app
    app.run(main)

