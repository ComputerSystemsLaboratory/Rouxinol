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

# Thaís Damásio, Michael Canesche, Vinícius Pacheco, Marcus
# Botacin, Anderson Faustino da Silva, and Fernando M. Quintão
# Pereira. 2023. A Game-Based Framework to Compare Program
# Classifiers and Evaders. In Proceedings of the 21st ACM/IEEE
# International Symposium on Code Generation and Optimization
# (CGO 2023). Association for Computing Machinery, New York, NY,
# USA, 108–121. https://doi.org/10.1145/3579990.3580012

#
# Generate LLVM code
#

import os
import sys

from absl import app, flags, logging

from dataclasses import dataclass

from multiprocessing import Process

from rouxinol.code4ml import OpenJudge
from rouxinol.environment import LLVMEnvironment


@dataclass
class PreProcessFlags(object):
    compiler_dir: str
    c_compiler: str
    cxx_compiler: str
    optimizer: str
    c_flags: str
    cxx_flags: str
    compiler_flags: list
    ir_dir_suffix: list
    ir_directory: str
    num_problems: int
    languages: list
    num_samples: list
    timeout: int

    @property
    def compilation_plan(
        self
    ):
        compilation_plan = {
            i: {
                "environment": "LLVM",
                "env_config":
                        {
                            "absolute_path": self.compiler_dir,
                            "compiler": {"c": self.c_compiler, "cxx": self.cxx_compiler},
                            "optimizer": self.optimizer
                        },
                "c_flags": self.c_flags,
                "c++_flags": self.cxx_flags,
                "compiler_flags": self.compiler_flags[i],
                "ir_directory": os.path.join(self.ir_directory, self.ir_dir_suffix[i]),
                "timeout": self.timeout
            } for i in range(len(self.compiler_flags))}
        return compilation_plan


class PreProcess(object):
    def __init__(
        self,
        compiler_dir="/usr/bin",
        c_compiler="clang",
        cxx_compiler="clang++",
        optimizer="opt",
        c_flags="-w",
        cxx_flags="-w --std=c++11 --std=c++14",
        compiler_flags=[
            "-O0",
            "-O1",
            "-O2",
            "-O3",
            "-mllvm -fla",
            "-mllvm -bcf",
            "-mllvm -sub",
            "-mllvm -fla -mllvm -bcf -mllvm -sub",
            "-mllvm -fla -mllvm -bcf -mllvm -sub -O3"
        ],
        ir_dir_suffix=[
            "O0",
            "O1",
            "O2",
            "O3",
            "FLA",
            "BCF",
            "SUB",
            "OLLVM",
            "OLLVM.O3"
        ],
        ir_directory="ir_directory",
        num_problems=100,
        languages=["C"],
        num_samples=[500],
        timeout=20,
    ):
    
        self.flags = PreProcessFlags(
                    compiler_dir,
                    c_compiler,
                    cxx_compiler,
                    optimizer,
                    c_flags,
                    cxx_flags,
                    compiler_flags,
                    ir_dir_suffix,
                    ir_directory,
                    num_problems,
                    languages,
                    num_samples,
                    timeout
        )

    def _src_to_ir(
            self,
            compilation_plan,
            code4ml
        ):

        ### Environment
        env_config = compilation_plan["env_config"]
        if compilation_plan["environment"] == "LLVM":
            env = LLVMEnvironment(env_config)
        else:
            logging.error("Environemnt error.")
            sys.exit(1)

        ### Generate IR from source
        for problem, samples in code4ml.items():
            problem_name = os.path.basename(problem)
            for sample in samples:
                flags = compilation_plan["c_flags"] if sample.endswith(".c") else compilation_plan["cxx_flags"]
                flags += " " + compilation_plan["compiler_flags"]
                env.src_to_ir(
                    sample,
                    flags,
                    ir_directory=os.path.join(compilation_plan["ir_directory"], problem_name),
                    timeout=compilation_plan["timeout"]
                )

    def run(
        self
    ):
        ## CODE4ML
        code4ml = OpenJudge()
        data = code4ml.preprocess(
                    num_problems=self.flags.num_problems,
                    languages={language: int(self.flags.num_samples[i]) for i, language in enumerate(self.flags.languages)}
                )

        if not data:
            logging.error("There is not enough data.")
            sys.exit(1)

        ### Generate IR
        process = {}
        for i, plan in self.flags.compilation_plan.items():
            process[i] = Process(target=self._src_to_ir, args=(plan, data,))
            process[i].start()

        for i, p in process.items():
            p.join()


def main(argv):
    """Source -> LLVM."""
    del argv

    FLAGS = flags.FLAGS

    preprocess = PreProcess(
        compiler_dir=FLAGS.compiler_dir,
        c_compiler=FLAGS.c_compiler,
        cxx_compiler=FLAGS.cxx_compiler,
        optimizer=FLAGS.optimizer,
        c_flags=FLAGS.c_flags,
        cxx_flags=FLAGS.cxx_flags,
        compiler_flags=FLAGS.compiler_flags,
        ir_dir_suffix=FLAGS.ir_dir_suffix,
        ir_directory=FLAGS.ir_directory,
        num_problems=int(FLAGS.num_problems),
        languages=FLAGS.languages,
        num_samples=FLAGS.num_samples,
        timeout=int(FLAGS.timeout)
    )

    preprocess.run()


# Execute
if __name__ == "__main__":
    # app
    flags.DEFINE_string(
        "compiler_dir",
        "/usr/bin",
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
        "-w",
        "C Flags"
    )
    flags.DEFINE_string(
        "cxx_flags",
        "-w --std=c++11 --std=c++14",
        "C++ Flags"
    )
    flags.DEFINE_list(
        "compiler_flags",
        [
            "-O0",
            "-O1",
            "-O2",
            "-O3",
            "-mllvm -fla",
            "-mllvm -bcf",
            "-mllvm -sub",
            "-mllvm -fla -mllvm -bcf -mllvm -sub",
            "-mllvm -fla -mllvm -bcf -mllvm -sub -O3"
        ],
        "Compiler flags"
    )
    flags.DEFINE_list(
        "ir_dir_suffix",
        [
            "O0",
            "O1",
            "O2",
            "O3",
            "FLA",
            "BCF",
            "SUB",
            "OLLVM",
            "OLLVM.O3"
        ],
        "Compiler flags"
    )
    flags.DEFINE_string(
        "ir_directory",
        None,
        "IR directory"
    )
    flags.DEFINE_integer(
        "num_problems",
        100,
        "Number of problems"
    )
    flags.DEFINE_list(
        "languages",
        ["C"],
        "The samples' language"
    )
    flags.DEFINE_list(
        "num_samples",
        [500],
        "Number of samples per language"
    )
    flags.DEFINE_integer(
        "timeout",
        20,
        "Timeout in seconds"
    )
    flags.mark_flag_as_required(
        "ir_directory"
    )

    app.run(main)
