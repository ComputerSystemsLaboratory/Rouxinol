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
import glob as gl
import yaml as yl
import numpy as np

from tqdm import tqdm
from random import shuffle

from rouxinol.dataset import Dataset
from rouxinol.utility import multiple_file_types

from rouxinol.environment import LLVMEnvironment


class BenchTest(Dataset):
    def __init__(
        self,
    ):
        super().__init__()

        self.download_http_and_extract(
            "http://www.csl.uem.br/repository/code4ml/BenchTest.tar.xz"
        )

    def preprocess(
        self,
        compiler_config,
        *args,
        **kwargs
    ):
        # kwargs
        force = kwargs["force"] if "force" in kwargs else None
        timeout = kwargs["timeout"] if "timeout" in kwargs else None
        output_directory = kwargs["output_directory"] if "output_directory" in kwargs else ""

        # Environment
        env_config = {
            "absolute_path": compiler_config["compiler_dir"],
            "compiler": {"c": compiler_config["c_compiler"], "cxx": compiler_config["cxx_compiler"]},
            "optimizer": compiler_config["optimizer"]
        }
        env = LLVMEnvironment(env_config)

        # Samples
        samples = {}
        samples["CSES"] = multiple_file_types(os.path.join(self.get_content_dir(), "CSES"), "*.cpp")
        samples["OpenJudge"] = multiple_file_types(os.path.join(self.get_content_dir(), "OpenJudge"), "*.cpp")
        samples["code4ml"] = multiple_file_types(os.path.join(self.get_content_dir(), "code4ml"), "*.c")
        
        # Stats
        elapsed_generate_ir = {}
        elapsed_generate_exec = {}

        #for samples_class, samples_programs in samples.items():
        for idx, (problem, solutions) in tqdm(enumerate(samples.items()), desc=f"Processing problems"):
            elapsed_generate_ir[problem] = {}
            elapsed_generate_exec[problem] = {}

            for solution in tqdm(solutions, desc=f"Processing solutions for {problem}", leave=False): 

                data_directory, basename = os.path.split(solution)
                basename = os.path.splitext(basename)[0]

                # Generate IR
                flags = compiler_config["c_flags"] if solution.endswith(".c") else compiler_config["cxx_flags"]
                ir_filename, output = env.src_to_ir(
                                            solution,
                                            flags,
                                            ir_directory=os.path.join(output_directory, problem, "ir") if output_directory else "",
                                            force=force
                )
                
                if output["returncode"] != 0:
                    continue

                elapsed_generate_ir[problem][basename] = output["runtime"]

                # Generate EXEC
                exec_filename, output = env.ir_to_exec(
                                            ir_filename,
                                            exec_directory=os.path.join(output_directory, problem, "exec") if output_directory else "",
                                            force=force
                )

                if output["returncode"] != 0:
                    continue

                elapsed_generate_exec[problem][basename] = output["runtime"]

        return samples, elapsed_generate_ir, elapsed_generate_exec

