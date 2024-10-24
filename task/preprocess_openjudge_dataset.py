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
import glob as gl
import yaml as yl
import pandas as pd

from tqdm import tqdm
from absl import app, flags, logging

from multiprocessing import Pool, Manager

from rouxinol.dataset import OpenJudge
from rouxinol.utility import multiple_file_types
from rouxinol.environment import LLVMEnvironment
from rouxinol.transformer import LLVMVisitor, LLVMHistogramBuilder
from rouxinol.transformer import X86ExecutableSectionsVisitor, X86AllSectionsVisitor, X86HistogramBuilder
from rouxinol.transformer import CFGgrindHistogramBuilder, CFGgrindStaticDynamicVisitor

FLAGS = flags.FLAGS


def process_program(args):
    # Arguments
    sample, config, ir_elapsed, exe_elapsed, repr_elapsed = args
    compiler_dir = config["compiler_dir"]
    c_compiler = config["c_compiler"]
    cxx_compiler = config["cxx_compiler"]
    optimizer = config["optimizer"]
    c_flags = config["c_flags"]
    cxx_flags = config["cxx_flags"]
    compiler_flags = config["compiler_flags"]
    dataset_directory = config["dataset_directory"]
    representation_names = config["representation_names"]
    timeout = config["timeout"]
    subdir = config["subdir"]

    # Environment
    env_config = {
        "absolute_path": compiler_dir,
        "compiler": {"c": c_compiler, "cxx": cxx_compiler},
        "optimizer": optimizer
    }
    env = LLVMEnvironment(env_config)

    # Problem name
    head_tail = os.path.split(sample)
    head_tail = os.path.split(head_tail[0])
    head_tail = os.path.split(head_tail[0])
    problem_name = head_tail[1]

    # Generate IR
    flags = c_flags if sample.endswith(".c") else cxx_flags
    flags += " " + compiler_flags
    ir_filename, output = env.src_to_ir(
                                sample,
                                flags,
                                ir_directory=os.path.join(dataset_directory, problem_name, subdir, "ir"),
                                timeout=timeout
    )
    ir_elapsed.setdefault(sample, output["runtime"]["elapsed_time"])

    # Generate EXEC
    exec_filename, output = env.ir_to_exec(
                                ir_filename,
                                exec_directory=os.path.join(dataset_directory, problem_name, subdir, "exec"),
                                timeout=timeout
    )
    exe_elapsed.setdefault(sample, output["runtime"]["elapsed_time"])

    # Generate the representations
    repr_classes = {
        "LLVMHistogram": (LLVMHistogramBuilder, LLVMVisitor, ir_filename),
        "X86Histogram": (X86HistogramBuilder, X86AllSectionsVisitor, exec_filename),
        "CFGgrindHistogram": (CFGgrindHistogramBuilder, CFGgrindStaticDynamicVisitor, exec_filename),
    }

    for representation_name in representation_names:

        builder_class, visitor, in_filename = repr_classes[representation_name]
        builder = builder_class()

        if representation_name == "LLVMHistogram":
            with open(in_filename, "r") as fin:
                in_filename = fin.read()

        builder.string_to_info(
                in_filename,
                stdin_filename=os.path.join(dataset_directory, problem_name, "info", "input.txt"),
                timeout=timeout
        )

        histogram = builder.info_to_representation(
                    visitor=visitor
        )
        repr_elapsed.setdefault(f"{sample}###{representation_name}", builder.get_elapsed())
        
        os.makedirs(os.path.join(dataset_directory, problem_name, subdir, representation_name), exist_ok=True)
        if representation_name == "CFGgrindHistogram" and histogram:
            static, dynamic = histogram
            histogram_filename = os.path.join(dataset_directory, problem_name, subdir, representation_name, f"{os.path.basename(exec_filename)}.static.yml")
            with open(histogram_filename, "w") as fout:
                yl.dump(static, fout)
            histogram_filename = os.path.join(dataset_directory, problem_name, subdir, representation_name, f"{os.path.basename(exec_filename)}.dynamic.yml")
            with open(histogram_filename, "w") as fout:
                yl.dump(dynamic, fout)
        else:
            histogram_filename = os.path.join(dataset_directory, problem_name, subdir, representation_name, f"{os.path.basename(exec_filename)}.yml")
            with open(histogram_filename, "w") as fout:
                yl.dump(histogram, fout)


def main(argv):
    """Source -> LLVM."""
    del argv

    # Configuration parameters
    config = {
        "compiler_dir": FLAGS.compiler_dir,
        "c_compiler": FLAGS.c_compiler,
        "cxx_compiler": FLAGS.cxx_compiler,
        "optimizer": FLAGS.optimizer,
        "c_flags": FLAGS.c_flags,
        "cxx_flags": FLAGS.cxx_flags,
        "compiler_flags": FLAGS.compiler_flags,
        "dataset_directory": FLAGS.dataset_directory,
        "timeout": FLAGS.timeout,
        "representation_names": FLAGS.representation_names,
        "subdir": FLAGS.subdir
    }
  
    # Initialize shared vocabularies for node and edge features  
    manager = Manager()
    ir_elapsed = manager.dict()
    exe_elapsed = manager.dict()
    repr_elapsed = manager.dict()
  
    problems = problems = gl.glob(f"{FLAGS.dataset_directory}/p*")
    program_list = []
    for problem in problems:
        program_list.extend(multiple_file_types(os.path.join(problem, "sample"), "*.c", "*.cpp"))

    # Process programs in parallel
    task_args = [(program_info, config, ir_elapsed, exe_elapsed, repr_elapsed) for program_info in program_list]
    with Pool(processes=FLAGS.workers) as pool:
        list(tqdm(pool.imap_unordered(process_program, task_args), total=len(task_args)))

    os.makedirs(os.path.join(FLAGS.dataset_directory, "stats"), exist_ok=True)
    with open(os.path.join(FLAGS.dataset_directory, "stats", f"ir_elapsed_{FLAGS.subdir}.yml"), "w") as fout:
        yl.dump(dict(ir_elapsed), fout)
    with open(os.path.join(FLAGS.dataset_directory, "stats", f"exe_elapsed_{FLAGS.subdir}.yml"), "w") as fout:
        yl.dump(dict(exe_elapsed), fout)
    with open(os.path.join(FLAGS.dataset_directory, "stats", f"repr_elapsed_{FLAGS.subdir}.yml"), "w") as fout:
        yl.dump(dict(repr_elapsed), fout)


# Execute
if __name__ == "__main__":
    # app
    flags.DEFINE_string(
        "compiler_dir",
        "/home/anderson/Anaconda/envs/rouxinol/bin",
        "Compiler directory (absolute path)"
    )
    flags.DEFINE_string(
        "c_compiler",
        "clang",
        "C Compiler"
    )
    flags.DEFINE_string(
        "cxx_compiler",
        "clang++",
        "C++ Compiler"
    )
    flags.DEFINE_string(
        "optimizer",
        "opt",
        "Optimizer"
    )
    flags.DEFINE_string(
        "c_flags",
        "-w -g -ggdb -fno-stack-protector -no-pie",
        "C Flags"
    )
    flags.DEFINE_string(
        "cxx_flags",
        "-w -g -ggdb -fno-stack-protector -no-pie --std=c++11 --std=c++14",
        "C++ Flags"
    )
    flags.DEFINE_string(
        "compiler_flags",
        "-O0",
        "Compiler flags"
    )
    flags.DEFINE_string(
        "dataset_directory",
        None,
        "Dataset directory"
    )
    flags.DEFINE_string(
        "subdir",
        "O0",
        "The directory to store the data (dataset_directory/SUBDIR)."
    )    
    flags.DEFINE_integer(
        "timeout",
        120,
        "Timeout in seconds"
    )
    flags.DEFINE_integer(
        "workers", 
        10, 
        "Number of worker processes."
    )
    flags.DEFINE_list(
        "representation_names",
        ["LLVMHistogram", "X86Histogram", "CFGgrindHistogram"],
        "Representations to extract."
    )
    flags.mark_flag_as_required(
        "dataset_directory"
    )

    app.run(main)
