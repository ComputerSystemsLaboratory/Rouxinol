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


class OpenJudge(Dataset):
    def __init__(
        self,
    ):
        super().__init__()

        self.download_http_and_extract(
            "http://www.csl.uem.br/repository/code4ml/OpenJudge.tar.xz"
        )

    def select_problems_and_samples(
        self,
        *args,
        **kwargs
    ):
        """Select the problems and their samples.

        :param num_problems: The number of problems.

        :param languages: The languages and their number of samples. A dictionary {"C": 500, ...}.

        :return: The problems and the samples.
        """
        problems_shuffle = kwargs["shuffle"] if "shuffle" in kwargs else False
        languages = kwargs["languages"] if "languages" in kwargs else ["C", "500"]
        num_problems = kwargs["num_problems"] if "num_problems" in kwargs else 2

        data = {}

        problems = gl.glob(f"{self.content_dir}/p*")
        problems.sort()

        if problems_shuffle:
            shuffle(problems)

        problem_names = [os.path.basename(problem) for problem in problems]
        for problem in problem_names:
            samples = self._verify_problem(
                                problem,
                                languages
                            )
            if samples:
                data[problem] = samples

            if len(data) == num_problems:
                break

        return data

    def _verify_problem(
        self,
        problem,
        languages
    ):
        """Verify whether a problem has the number of samples.

        :param problem: The number of the problem.

        :param languages: The languages and their number of samples. A dictionay {"C": 500, ...}.

        :return: The samples.
        """
        languages_dict = {
            "C": "*.c",
            "C++": "*.cpp"
        }
        samples_dir = os.path.join(self.content_dir, problem)
        data = {language: multiple_file_types(os.path.join(samples_dir, "sample"), languages_dict[language]) for language in languages}
        validate = [1 for language, samples in data.items() if len(samples) >= languages[language]]

        if sum(validate) == len(languages.keys()):
            languages_samples = []
            for language, samples in data.items():
                samples.sort()
                languages_samples.extend(samples[:languages[language]])
            return languages_samples
        else:
            return None


    def preprocess(
        self,
        **kwargs
    ):
        # kwargs
        samples = kwargs["samples"]
        builder = kwargs["builder"]
        visitor = kwargs["visitor"]
        compiler_config = kwargs["compiler_config"]

        force = kwargs["force"] if "force" in kwargs else True
        timeout = kwargs["timeout"] if "timeout" in kwargs else None
        output_directory = kwargs["output_directory"] if "output_directory" in kwargs else ""
        events = kwargs["events"] if "events" in kwargs else ["cycles", "instructions"]

        # Environment
        env_config = {
            "absolute_path": compiler_config["compiler_dir"],
            "compiler": {"c": compiler_config["c_compiler"], "cxx": compiler_config["cxx_compiler"]},
            "optimizer": compiler_config["optimizer"]
        }
        env = LLVMEnvironment(env_config)

        # Representations
        data = []

        # Stats
        elapsed_generate_ir = {}
        elapsed_generate_exec = {}
        elapsed_generate_representation = {}

        #for samples_class, samples_programs in samples.items():
        for idx, (problem, solutions) in tqdm(enumerate(samples.items()), desc=f"Processing problems"):
            elapsed_generate_ir[problem] = {}
            elapsed_generate_exec[problem] = {}
            elapsed_generate_representation[problem] = {}

            for solution in tqdm(solutions, desc=f"Processing solutions for {problem}", leave=False): 

                data_directory, basename = os.path.split(solution)
                basename = os.path.splitext(basename)[0]

                src_type = builder.get_src_type()

                if src_type != "SRC":
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

                    elapsed_generate_ir[problem][basename] = output["runtime"]["elapsed_time"]

                    # Generate EXEC
                    exec_filename, output = env.ir_to_exec(
                                                ir_filename,
                                                exec_directory=os.path.join(output_directory, problem, "exec") if output_directory else "",
                                                force=force
                    )

                    if output["returncode"] != 0:
                        continue

                    elapsed_generate_exec[problem][basename] = output["runtime"]["elapsed_time"]

                src_types = {
                    "SRC" : solution,
                    "IR": ir_filename,
                    "EXEC": exec_filename
                }
                in_filename = src_types[src_type]

                info = builder.string_to_info(
                                    in_filename,
                                    stdin_filename=os.path.join(self.content_dir, problem, "info", "input.txt"),
                                    timeout=timeout,
                                    events=events
                        )
                
                embeddings = builder.info_to_representation(
                                        info,
                                        visitor=visitor
                            )

                if embeddings is None:
                    continue

                elapsed_generate_representation[problem][basename] = builder.get_elapsed_time()

                data.append({
                    "x": embeddings, 
                    "y": idx, 
                    "info": {"problem": problem, "basename": basename}}
                )

        return data, elapsed_generate_ir, elapsed_generate_exec, elapsed_generate_representation
