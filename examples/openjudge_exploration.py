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
import yaml as yl

from absl import app, flags

from rouxinol.dataset import OpenJudge
from rouxinol.utility import create_timestamped_directory, get_next_filename, create_string, split_data
from rouxinol.utility import transform_split_data_with_dict, transform_split_data_with_list

from rouxinol.learning.supervised.classification import RandomForestModel, GGNNModel

flags.DEFINE_string("compiler_dir", None, "Compiler directory (absolute path)")
flags.DEFINE_string("c_compiler", "clang", "C Compiler")
flags.DEFINE_string("cxx_compiler", "clang++", "C++ Compiler")
flags.DEFINE_string("optimizer", "opt", "Optimizer")
flags.DEFINE_string("c_flags", "-w -g -ggdb -fno-stack-protector -no-pie", "C Flags")
flags.DEFINE_string("cxx_flags", "-w -g -ggdb -fno-stack-protector -no-pie --std=c++11 --std=c++14", "C++ Flags")
flags.DEFINE_string("compiler_flags", "-O0", "Compiler flags")
flags.DEFINE_string("data_directory", None, "Data directory (ir, representation, exec, stats, ...)")
flags.DEFINE_string("label_dir", "O0", "The directory to store the data.")    

flags.DEFINE_integer("timeout", 120, "Timeout in seconds")
flags.DEFINE_integer("problems", 100, "Number of classes")
flags.DEFINE_integer("workers", 10, "Number of worker processes")

flags.DEFINE_boolean("force", False, "Force data generation")
flags.DEFINE_boolean("shuffle", False, "Shuffle the dataset before selection")
flags.DEFINE_boolean("timestamped", True, "Create a timestamped directory (data_directory/date.time.dir)")
flags.DEFINE_boolean("static", False, "Enable CFGgrind static histogram")
flags.DEFINE_boolean("do_not_classify", False, "Do not perform classification")
flags.DEFINE_boolean("no_repr", False, "Do not extract representation")

flags.DEFINE_enum("representation", "llvmHistogram", ["llvmHistogram", "x86Histogram", "cfggrindHistogram", "performanceCounterHistogram", "ir2vec", "inst2vec", "programl"], "Representations to extract")

flags.DEFINE_list("languages", ["C"], "Programming languages")
flags.DEFINE_list("samples", [500], "Number of samples per language")
flags.DEFINE_list("events", ["branch-load-misses", "L1-icache-load-misses", "iTLB-loads", "branch-loads", "branch-instructions", "branch-misses", "faults", "dTLB-stores", "cycles", "dTLB-loads", "instructions", "dTLB-load-misses", "cache-references", "LLC-stores", "LLC-store-misses", "L1-dcache-stores", "iTLB-load-misses", "LLC-loads", "L1-dcache-loads", "L1-dcache-load-misses", "dTLB-store-misses", "LLC-load-misses", "cache-misses"], "Perf events.")  

flags.mark_flag_as_required("compiler_dir")
flags.mark_flag_as_required("data_directory")


FLAGS = flags.FLAGS


def main(argv):
    """Source -> LLVM."""
    del argv

    # Data dir
    if FLAGS.timestamped:
        data_directory = create_timestamped_directory(FLAGS.data_directory)
    else:
        data_directory = FLAGS.data_directory
    
    # Dataset
    dataset = OpenJudge()
    
    # Select problems and samples per problem
    suffix = create_string(FLAGS.languages, FLAGS.samples)
    samples_filename = os.path.join(
                            data_directory,
                            FLAGS.label_dir,
                            "stats",
                            f"{suffix}.yml"
                        )

    if FLAGS.force or not os.path.isfile(samples_filename):
        languages = {FLAGS.languages[i]: int(FLAGS.samples[i]) for i in range(len(FLAGS.languages))}
        samples = dataset.select_problems_and_samples(
                    num_problems=FLAGS.problems,
                    languages=languages,
                    shuffle=FLAGS.shuffle
                )
        os.makedirs(os.path.join(data_directory, FLAGS.label_dir, "stats"), exist_ok=True)
        with open(samples_filename, "w") as fout:
            yl.dump(samples, fout)
    else:
        with open(samples_filename, "r") as fout:
            samples = yl.load(fout, Loader=yl.FullLoader)

    compiler_args = {
        "compiler_dir": FLAGS.compiler_dir,
        "c_compiler": FLAGS.c_compiler,
        "cxx_compiler": FLAGS.cxx_compiler,
        "optimizer": FLAGS.optimizer,
        "c_flags": FLAGS.c_flags,
        "cxx_flags": FLAGS.cxx_flags,
        "compiler_flags": FLAGS.compiler_flags,
    }

    # Preprocess
    data = dataset.preprocess(
        workers=FLAGS.workers,
        compiler_args=compiler_args,
        timeout=FLAGS.timeout,
        representation=FLAGS.representation,
        cfggrind_static=FLAGS.static,
        label_dir=FLAGS.label_dir,
        force=FLAGS.force, 
        samples=samples,
        events=FLAGS.events,
        data_directory=data_directory,
        do_not_extract_representation=FLAGS.no_repr
    )

    # Store stats
    ir_filename = get_next_filename(
                        os.path.join(data_directory, FLAGS.label_dir, "stats", f"ir_elapsed_{FLAGS.representation}_{suffix}"),
                        "yml"
                    )
    exe_filename = get_next_filename(
                        os.path.join(data_directory, FLAGS.label_dir, "stats", f"exe_elapsed_{FLAGS.representation}_{suffix}"),
                        "yml"
                    )
    repr_filename = get_next_filename(
                        os.path.join(data_directory, FLAGS.label_dir, "stats", f"rep_elapsed_{FLAGS.representation}_{suffix}"),
                        "yml"
                    )
    
    with open(os.path.join(data_directory, FLAGS.label_dir, "stats", ir_filename), "w") as fout:
        yl.dump(data["stats"]["ir"], fout)
    with open(os.path.join(data_directory, FLAGS.label_dir, "stats", exe_filename), "w") as fout:
        yl.dump(data["stats"]["exe"], fout)
    with open(os.path.join(data_directory, FLAGS.label_dir, "stats", repr_filename), "w") as fout:
        yl.dump(data["stats"]["repr"], fout)

    # Do not classify
    if FLAGS.do_not_classify:
        return

    # Prepare the data
    model_transform = {
        "llvmHistogram": (RandomForestModel, transform_split_data_with_dict),
        "x86Histogram": (RandomForestModel, transform_split_data_with_dict),
        "cfggrindHistogram": (RandomForestModel, transform_split_data_with_dict),
        "performanceCounterHistogram": (RandomForestModel, transform_split_data_with_dict),
        "ir2vec": (RandomForestModel, transform_split_data_with_list),
        "inst2vec": (RandomForestModel,transform_split_data_with_list),
        "programl": (GGNNModel, split_data)
    }

    model_class, transform_data = model_transform[FLAGS.representation]
    
    data_train, data_test = transform_data(data["samples"])

    # Training and test
    if FLAGS.representation == "programl":
        model = model_class(num_classes=FLAGS.problems, num_types=data["num_types"])
    else:
        model = model_class()

    model.train(data_train, data_train)
    f1, acc, recall, precision, y_test, y_pred = model.predict(data_test)

    if FLGAS.representation != "programl":
        y_pred = y_pred.tolist()

    stats = {"f1": f1, "acc": acc, "recall": recall, "precision": precision, "y_test": y_test,"y_pred": y_pred}
    dataset_name = os.path.basename(samples_filename)
    representation = f"{FLAGS.representation}_static" if FLAGS.static else FLAGS.representation
    stats_filename = get_next_filename(
                        os.path.join(FLAGS.data_directory, "stats", f"stats_{representation}_{FLAGS.label_dir}_{FLAGS.label_dir}_{dataset_name[:-4]}_{FLAGS.problems}_{FLAGS.samples[0]}"),
                        "yml"
                )
    with open(os.path.join(FLAGS.data_directory, stats_filename), "w") as fout:
        yl.dump(stats, fout)

# Execute
if __name__ == "__main__":
    # app
    app.run(main)

