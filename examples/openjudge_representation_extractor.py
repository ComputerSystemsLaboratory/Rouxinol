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
import numpy as np

from absl import app, flags

from rouxinol.dataset import OpenJudge
from rouxinol.environment import LLVMEnvironment
from rouxinol.utility import create_timestamped_directory, get_next_filename

from rouxinol.transformer import LLVMHistogramBuilder, LLVMVisitor
from rouxinol.transformer import X86HistogramBuilder, X86AllSectionsVisitor
from rouxinol.transformer import CFGgrindHistogramBuilder, CFGgrindVisitor, CFGgrindHybridVisitor, CFGgrindDynamicVisitor
from rouxinol.transformer import Inst2VecBuilder, Inst2VecVisitor, Inst2VecPreprocessedVisitor, Inst2VecEmbeddingsVisitor
from rouxinol.transformer import IR2VecBuilder, IR2VecFlowAwareRepresentationVisitor
from rouxinol.transformer import LLVMGraphBuilder, LLVMProGraMLVisitor
from rouxinol.transformer import PerformanceCounterHistogramBuilder, PerformanceCounterVisitor

flags.DEFINE_string("compiler_dir", "", "Compiler directory (absolute path)")
flags.DEFINE_string("c_compiler", "clang", "C Compiler")
flags.DEFINE_string("cxx_compiler", "clang++", "C++ Compiler")
flags.DEFINE_string("optimizer", "opt", "Optimizer")
flags.DEFINE_string("c_flags", "-w -g -ggdb -fno-stack-protector -no-pie", "C Flags")
flags.DEFINE_string("cxx_flags", "-w -g -ggdb -fno-stack-protector -no-pie --std=c++17", "C++ Flags")
flags.DEFINE_string("output_directory", None, "Data directory (ir, representation, exec, stats, ...)")
flags.DEFINE_string("workload", "workload.yml", "Workload filename")

flags.DEFINE_integer("timeout", 120, "Timeout in seconds")
flags.DEFINE_integer("problems", 100, "Number of classes")

flags.DEFINE_boolean("shuffle", False, "Shuffle the dataset before selection")
flags.DEFINE_boolean("timestamped", True, "Create a timestamped directory (data_directory/date.time.dir)")

flags.DEFINE_enum("representation", "llvmHistogram", ["llvmHistogram", "x86Histogram", "cfggrindHistogram", "cfggrindHybridHistogram", "cfggrindDynamicHistogram", "performanceCounterHistogram", "ir2vec", "inst2vec", "inst2vecPreprocessed", "inst2vecEmbeddings"], "Representations to extract")

flags.DEFINE_list("languages", ["C"], "Programming languages")
flags.DEFINE_list("samples", [500], "Number of samples per language")
flags.DEFINE_list("events", ["branch-load-misses", "L1-icache-load-misses", "iTLB-loads", "branch-loads", "branch-instructions", "branch-misses", "faults", "dTLB-stores", "cycles", "dTLB-loads", "instructions", "dTLB-load-misses", "cache-references", "LLC-stores", "LLC-store-misses", "L1-dcache-stores", "iTLB-load-misses", "LLC-loads", "L1-dcache-loads", "L1-dcache-load-misses", "dTLB-store-misses", "LLC-load-misses", "cache-misses"], "Perf events.")  

flags.mark_flag_as_required("output_directory")

FLAGS = flags.FLAGS


def main(argv):
    """Source -> LLVM."""
    del argv

    # Dataset
    dataset = OpenJudge()

    # Data dir
    if FLAGS.timestamped:
        output_directory = create_timestamped_directory(FLAGS.output_directory)
    else:
        output_directory = FLAGS.output_directory

    # Select problems and samples per problem
    languages = {FLAGS.languages[i]: int(FLAGS.samples[i]) for i in range(len(FLAGS.languages))}
    samples = dataset.select_problems_and_samples(
                num_problems=FLAGS.problems,
                languages=languages,
                shuffle=FLAGS.shuffle
            )

    stats_directory = os.path.join(output_directory, "statistics")
    os.makedirs(stats_directory, exist_ok=True)

    workload_filename = os.path.join(stats_directory, FLAGS.workload)
    with open(workload_filename, "w") as fout:
        yl.dump(samples, fout)

    # Prepare compiler arguments
    compiler_config = {
        "compiler_dir": FLAGS.compiler_dir,
        "c_compiler": FLAGS.c_compiler,
        "cxx_compiler": FLAGS.cxx_compiler,
        "optimizer": FLAGS.optimizer,
        "c_flags": FLAGS.c_flags,
        "cxx_flags": FLAGS.cxx_flags
    }

    # Builder and Visitor
    b_and_v = {
        "llvmHistogram": (LLVMHistogramBuilder, LLVMVisitor),
        "x86Histogram": (X86HistogramBuilder, X86AllSectionsVisitor),
        "cfggrindHistogram": (CFGgrindHistogramBuilder, CFGgrindVisitor),
        "cfggrindHybridHistogram": (CFGgrindHistogramBuilder, CFGgrindHybridVisitor),
        "cfggrindDynamicHistogram": (CFGgrindHistogramBuilder, CFGgrindDynamicVisitor),
        "ir2vec": (IR2VecBuilder, IR2VecFlowAwareRepresentationVisitor),
        "inst2vec": (Inst2VecBuilder, Inst2VecVisitor),
        "inst2VecPreprocessed": (Inst2VecBuilder, Inst2VecPreprocessedVisitor),
        "inst2vecEmbeddings": (Inst2VecBuilder, Inst2VecEmbeddingsVisitor),
        "performanceCounterHistogram": (PerformanceCounterHistogramBuilder, PerformanceCounterVisitor)
    }


    builder_class, visitor = b_and_v[FLAGS.representation]
    builder = builder_class()

    # Preprocess
    data, elapsed_ir, elapsed_exec, elapsed_representation = dataset.preprocess(
                                                                samples=samples,
                                                                builder=builder,
                                                                visitor=visitor,
                                                                compiler_config=compiler_config,
                                                                timeout=FLAGS.timeout,
                                                                events=FLAGS.events,
                                                                output_directory=output_directory
    )

    # Store the representation
    for representation in data:
        problem = representation["info"]["problem"]
        basename =  representation["info"]["basename"]
        embeddings = representation["x"]
        if FLAGS.representation == "cfggrindHistogram":
            hybrid, dynamic = embeddings
            os.makedirs(os.path.join(output_directory, problem, "cfggrindHybridHistogram"), exist_ok=True)
            with open(os.path.join(output_directory, problem, "cfggrindHybridHistogram", f"{basename}.yml"), "w") as fout:
                yl.dump(hybrid, fout)
            os.makedirs(os.path.join(output_directory, problem, "cfggrindDynamicHistogram"), exist_ok=True)
            with open(os.path.join(output_directory, problem, "cfggrindDynamicHistogram", f"{basename}.yml"), "w") as fout:
                yl.dump(dynamic, fout)
        elif FLAGS.representation == "inst2vec":
            preprocessed, emb = embeddings
            os.makedirs(os.path.join(output_directory, problem, "inst2vecPreprocessed"), exist_ok=True)
            np.savez_compressed(os.path.join(output_directory, problem, "inst2vecPreprocessed", basename), embeddings=preprocessed)
            os.makedirs(os.path.join(output_directory, problem, "inst2vecEmbeddings"), exist_ok=True)
            np.savez_compressed(os.path.join(output_directory, problem, "inst2vecEmbeddings", basename), embeddings=emb)
        elif FLAGS.representation == "inst2VecPreprocessed":
            os.makedirs(os.path.join(output_directory, problem, "inst2vecPreprocessed"), exist_ok=True)
            np.savez_compressed(os.path.join(output_directory, problem, "inst2vecPreprocessed", basename), embeddings=embeddings)
        elif FLAGS.representation == "inst2vecEmbeddings":
            os.makedirs(os.path.join(output_directory, problem, "inst2vecEmbeddings"), exist_ok=True)
            np.savez_compressed(os.path.join(output_directory, problem, "inst2vecEmbeddings", basename), embeddings=embeddings)            
        else:
            os.makedirs(os.path.join(output_directory, problem, FLAGS.representation), exist_ok=True)
            with open(os.path.join(output_directory, problem, FLAGS.representation, f"{basename}.yml"), "w") as fout:
                yl.dump(embeddings, fout)

    # Store the statistics
    ir_filename = get_next_filename(
                        os.path.join(stats_directory, f"elapsed_i_{FLAGS.representation}"),
                        "yml"
                    )
    exe_filename = get_next_filename(
                        os.path.join(stats_directory, f"elapsed_e_{FLAGS.representation}"),
                        "yml"
                    )
    repr_filename = get_next_filename(
                        os.path.join(stats_directory, f"elapsed_r_{FLAGS.representation}"),
                        "yml"
                    )
    
    with open(os.path.join(stats_directory, ir_filename), "w") as fout:
        yl.dump(elapsed_ir, fout)
    with open(os.path.join(stats_directory, exe_filename), "w") as fout:
        yl.dump(elapsed_exec, fout)
    with open(os.path.join(stats_directory, repr_filename), "w") as fout:
        yl.dump(elapsed_representation, fout)


# Execute
if __name__ == "__main__":
    # app
    app.run(main)

