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

from rouxinol.dataset import CSES
from rouxinol.environment import LLVMEnvironment
from rouxinol.utility import create_timestamped_directory, get_next_filename

from rouxinol.transformer import LLVMHistogramBuilder, LLVMHistogramVisitor
from rouxinol.transformer import X86HistogramBuilder, X86AllSectionsVisitor
from rouxinol.transformer import CFGgrindHistogramBuilder, CFGgrindVisitor, CFGgrindHybridVisitor, CFGgrindDynamicVisitor
from rouxinol.transformer import Inst2VecBuilder, Inst2VecVisitor, Inst2VecPreprocessedVisitor, Inst2VecEmbeddingsVisitor
from rouxinol.transformer import IR2VecBuilder, IR2VecFlowAwareRepresentationVisitor
from rouxinol.transformer import LLVMGraphBuilder, LLVMProGraMLVisitor
from rouxinol.transformer import PerformanceCounterHistogramBuilder, PerformanceCounterVisitor


flags.DEFINE_string(
    'compiler_dir', 
    default='', 
    help='Compiler directory (absolute path)',
    short_name='c'
)

flags.DEFINE_string(
    'c_compiler', 
    default='clang', 
    help='C Compiler',
    short_name='C'
)

flags.DEFINE_string(
    'cxx_compiler', 
    default='clang++', 
    help='C++ Compiler',
    short_name='X'
)

flags.DEFINE_string(
    'optimizer', 
    default='opt', 
    help='Optimizer',
    short_name='o'
)

flags.DEFINE_string(
    'c_flags', 
    default='-w -g -ggdb -fno-stack-protector -no-pie -DONLINE_JUDGE', 
    help='C Flags',
    short_name='f'
)

flags.DEFINE_string(
    'cxx_flags', 
    default='-w -g -ggdb -fno-stack-protector -no-pie -DONLINE_JUDGE --std=c++17', 
    help='C++ Flags',
    short_name='F'
)

flags.DEFINE_string(
    'output_directory', 
    default=None, 
    help='Data directory (ir, representation, exec, statistics, ...)',
    short_name='d'
)

flags.DEFINE_string(
    'workload', 
    default='workload.yml', 
    help='Workload filename',
    short_name='w'
)

flags.DEFINE_integer(
    'timeout', 
    default=480, 
    help='Timeout in seconds',
    short_name='t'
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
    help='Number of samples per class',
    short_name='s'
)

flags.DEFINE_integer(
    'entry', 
    default=1, 
    help='Number of the workload',
    short_name='e'
)

flags.DEFINE_boolean(
    'force', 
    default=False, 
    help='Always compile',
    short_name='R'
)

flags.DEFINE_boolean(
    'shuffle', 
    default=False, 
    help='Shuffle the dataset before selection',
    short_name='S'
)

flags.DEFINE_boolean(
    'timestamped', 
    default=False, 
    help='Create a timestamped directory (output_directory/date.time.dir)',
    short_name='T'
)

flags.DEFINE_enum(
    'representation', 
    default='llvmHistogram', 
    enum_values=[
            'llvmHistogram', 
            'x86Histogram', 
            'cfggrindHistogram', 
            'cfggrindHybridHistogram', 
            'cfggrindDynamicHistogram', 
            'performanceCounterHistogram', 
            'ir2vec', 
            'inst2vec', 
            'inst2vecPreprocessed', 
            'inst2vecEmbeddings'
    ], 
    help='Representations to extract',
    short_name='r'
)

flags.DEFINE_list(
    'events', 
    default=[
        'branch-load-misses', 
        'L1-icache-load-misses', 
        'iTLB-loads', 
        'branch-loads', 
        'branch-instructions', 
        'branch-misses', 
        'faults', 
        'dTLB-stores', 
        'cycles', 
        'dTLB-loads', 
        'instructions', 
        'dTLB-load-misses', 
        'cache-references', 
        'LLC-stores', 
        'LLC-store-misses', 
        'L1-dcache-stores', 
        'iTLB-load-misses', 
        'LLC-loads', 
        'L1-dcache-loads', 
        'L1-dcache-load-misses', 
        'dTLB-store-misses', 
        'LLC-load-misses', 
        'cache-misses'
    ], 
    help='Perf events.',
    short_name='E'
)  

flags.mark_flag_as_required('output_directory')

FLAGS = flags.FLAGS


def main(argv):
    """Source -> LLVM."""
    del argv

    # Dataset
    dataset = CSES()

    # Data dir
    if FLAGS.timestamped:
        output_directory = create_timestamped_directory(FLAGS.output_directory)
    else:
        output_directory = FLAGS.output_directory

    # Select problems and samples per problem
    samples = dataset.select_problems_and_samples(
                num_problems=FLAGS.problems,
                num_samples=FLAGS.samples,
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
                                                                entry=FLAGS.entry,
                                                                timeout=FLAGS.timeout,
                                                                force=FLAGS.force,
                                                                events=FLAGS.events,
                                                                output_directory=output_directory
    )

    # Store the representation
    representation = "energyHistogram" if all("energy" in s for s in FLAGS.events) else FLAGS.representation

    for data_info in data:
        problem = data_info["info"]["problem"]
        basename =  data_info["info"]["basename"]
        embeddings = data_info["x"]
        if representation == "cfggrindHistogram":
            hybrid, dynamic = embeddings
            os.makedirs(os.path.join(output_directory, problem, "cfggrindHybridHistogram"), exist_ok=True)
            with open(os.path.join(output_directory, problem, "cfggrindHybridHistogram", f"{basename}.yml"), "w") as fout:
                yl.dump(hybrid, fout)
            os.makedirs(os.path.join(output_directory, problem, "cfggrindDynamicHistogram"), exist_ok=True)
            with open(os.path.join(output_directory, problem, "cfggrindDynamicHistogram", f"{basename}.yml"), "w") as fout:
                yl.dump(dynamic, fout)
        elif representation == "inst2vec":
            preprocessed, emb = embeddings
            os.makedirs(os.path.join(output_directory, problem, "inst2vecPreprocessed"), exist_ok=True)
            np.savez_compressed(os.path.join(output_directory, problem, "inst2vecPreprocessed", basename), embeddings=preprocessed)
            os.makedirs(os.path.join(output_directory, problem, "inst2vecEmbeddings"), exist_ok=True)
            np.savez_compressed(os.path.join(output_directory, problem, "inst2vecEmbeddings", basename), embeddings=emb)
        elif representation == "inst2VecPreprocessed":
            os.makedirs(os.path.join(output_directory, problem, "inst2vecPreprocessed"), exist_ok=True)
            np.savez_compressed(os.path.join(output_directory, problem, "inst2vecPreprocessed", basename), embeddings=embeddings)
        elif representation == "inst2vecEmbeddings":
            os.makedirs(os.path.join(output_directory, problem, "inst2vecEmbeddings"), exist_ok=True)
            np.savez_compressed(os.path.join(output_directory, problem, "inst2vecEmbeddings", basename), embeddings=embeddings)            
        else: 
            os.makedirs(os.path.join(output_directory, problem, representation), exist_ok=True)
            with open(os.path.join(output_directory, problem, representation, f"{basename}.yml"), "w") as fout:
                yl.dump(embeddings, fout)

    # Store the statistics
    ir_filename = get_next_filename(
                        os.path.join(stats_directory, f"elapsed_i_{representation}"),
                        "yml"
                    )
    exe_filename = get_next_filename(
                        os.path.join(stats_directory, f"elapsed_e_{representation}"),
                        "yml"
                    )
    repr_filename = get_next_filename(
                        os.path.join(stats_directory, f"elapsed_r_{representation}"),
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

