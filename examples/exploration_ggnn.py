import os
import sys
import random  
import yaml as yl

from tqdm import tqdm  
from absl import app, flags

from rouxinol.utility import get_next_filename, split_dataset, split_train_test_data
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

flags.DEFINE_string("output_directory", None, "Output directory (ir, representation, exec, stats, ...)")
flags.DEFINE_string("dataset_name", None, "Dataset filename")
flags.DEFINE_string("train", "O0", "Train data")
flags.DEFINE_string("test", "O0", "Test data")

flags.DEFINE_integer("problems", 100, "Number of classes")
flags.DEFINE_integer("samples", 500, "Number of samples per problem")
flags.DEFINE_integer("timesteps", 4, "Number of time steps")
flags.DEFINE_integer("gnn_h_size", 32, "GNN H size")
flags.DEFINE_integer("batch_size", 64 , "Batch size")
flags.DEFINE_integer("epochs", 1000, "Number of epochs")
flags.DEFINE_integer("patience", 100, "Patience")

flags.DEFINE_float("test_ratio", 0.2, "Number of test samples")
flags.DEFINE_float("learning_rate", 0.001, "Learning rate")

flags.DEFINE_boolean("shuffle", False, "Shuffle the dataset before selection")
flags.DEFINE_boolean("early_stopping", True, "Enable early stopping")
flags.DEFINE_boolean("restore_best_weights", True, "Restore the best weights")

flags.DEFINE_enum("representation", "programl", ["cfg", "cfgc", "cfgcall", "cfgcallc", "cfgcallcs", "cdfg", "cdfgc", "cdfgcs", "cdfgcall", "cdfgcallc", "cdfgcallcs", "cdfgplus", "programl"], "Representation")

flags.mark_flag_as_required("dataset")
flags.mark_flag_as_required("output_directory")

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
                in_filename = os.path.join(FLAGS.output_directory, label_dir, problem, "ir", f"{sample}.ll")  
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
        "hidden_size_orig": builder.num_tokens(),
        "gnn_h_size": FLAGS.gnn_h_size,
        "num_edge_types": num_edge_types,
        "learning_rate": FLAGS.learning_rate,
        "batch_size": FLAGS.batch_size,
        "num_epochs": FLAGS.epochs,
        "early_stopping": 1 if FLAGS.early_stopping else 0,
        "restore_best_weights": 1 if FLAGS.restore_best_weights else 0,
        "patience": FLAGS.patience,
        "num_classes": FLAGS.problems,
    }
    model = GGNNModel(config=config)

    train_summary = model.train(data_train, data_train)
    f1, acc, recall, precision, y_test, y_pred = model.predict(data_test)

    os.makedirs(os.path.join(FLAGS.output_directory, "statistics"), exist_ok=True)

    stats = {"f1": f1, "acc": acc, "recall": recall, "precision": precision, "y_test": y_test,"y_pred": y_pred, "train_summary": train_summary}
    dataset_name = os.path.basename(FLAGS.dataset_name)
    stats_filename = get_next_filename(
                        os.path.join(FLAGS.output_directory, "stats", f"stats_{FLAGS.representation}_{FLAGS.train}_{FLAGS.test}"),
                        "yml"
                )
    with open(os.path.join(FLAGS.output_directory, stats_filename), "w") as fout:
        yl.dump(stats, fout)


# Execute
if __name__ == "__main__":
    # app
    app.run(main)

