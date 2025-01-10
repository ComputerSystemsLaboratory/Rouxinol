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
from absl import logging
from random import shuffle
from multiprocessing import Pool, Manager

from rouxinol.dataset import Dataset
from rouxinol.utility import multiple_file_types, create_timestamped_directory

from rouxinol.environment import LLVMEnvironment
from rouxinol.transformer import LLVMHistogramBuilder, LLVMVisitor
from rouxinol.transformer import X86HistogramBuilder, X86AllSectionsVisitor
from rouxinol.transformer import CFGgrindHistogramBuilder, CFGgrindStaticDynamicVisitor
from rouxinol.transformer import Inst2VecBuilder, Inst2VecEmbeddingsVisitor
from rouxinol.transformer import IR2VecBuilder, IR2VecFlowAwareRepresentationVisitor
from rouxinol.transformer import LLVMGraphBuilder, LLVMProGraMLVisitor
from rouxinol.transformer import PerformanceCounterHistogramBuilder, PerformanceCounterVisitor

class OpenJudge(Dataset):
    def __init__(
        self,
    ):
        super().__init__()

        self.download_http_and_extract(
            "http://www.csl.uem.br/repository/code4ml/OpenJudge.tar.xz"
        )

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
   
    def _classes(sample, classes):
        head_tail = os.path.split(sample)
        head_tail = os.path.split(head_tail[0])
        head_tail = os.path.split(head_tail[0])
        problem_name = head_tail[1]

        if not problem_name in classes:
            classes[problem_name] = len(classes)+1

    def _preprocess_sample(
        self,
        args
    ):
        # Arguments
        sample_class, sample, config, data, num_tokens, ir_elapsed, exe_elapsed, repr_elapsed = args
        compiler_dir = config["compiler_args"]["compiler_dir"]
        c_compiler = config["compiler_args"]["c_compiler"]
        cxx_compiler = config["compiler_args"]["cxx_compiler"]
        optimizer = config["compiler_args"]["optimizer"]
        c_flags = config["compiler_args"]["c_flags"]
        cxx_flags = config["compiler_args"]["cxx_flags"]
        compiler_flags = config["compiler_args"]["compiler_flags"]
        data_directory = config["data_directory"]
        representation = config["representation"]
        timeout = config["timeout"]
        label_dir = config["label_dir"]
        force = config["force"]
        cfggrind_static = config["cfggrind_static"]
        events = config["events"]
        do_not_extract_representation = config["do_not_extract_representation"]

        # Problem name
        head_tail = os.path.split(sample)
        head_tail = os.path.split(head_tail[0])
        head_tail = os.path.split(head_tail[0])
        problem_name = head_tail[1]

        # Environment
        env_config = {
            "absolute_path": compiler_dir,
            "compiler": {"c": c_compiler, "cxx": cxx_compiler},
            "optimizer": optimizer
        }
        env = LLVMEnvironment(env_config)

        # Generate IR
        flags = c_flags if sample.endswith(".c") else cxx_flags
        flags += " " + compiler_flags
        ir_filename, output = env.src_to_ir(
                                    sample,
                                    flags,
                                    ir_directory=os.path.join(data_directory, label_dir, problem_name, "ir"),
                                    timeout=timeout
        )
        
        if output["returncode"] != 0:
            return
        
        ir_elapsed.setdefault(sample, output["runtime"]["elapsed_time"])

        # Generate EXEC
        exec_filename, output = env.ir_to_exec(
                                    ir_filename,
                                    exec_directory=os.path.join(data_directory, label_dir, problem_name, "exec"),
                                    timeout=timeout
        )

        if output["returncode"] != 0:
            return

        exe_elapsed.setdefault(sample, output["runtime"]["elapsed_time"])
        
        if do_not_extract_representation:
            return

        # Representation exists?
        if representation == "cfggrindHistogram":
            embeddings_filename1 = os.path.join(data_directory, label_dir, problem_name, f"{representation}.static", f"{os.path.basename(exec_filename)}.yml")
            embeddings_filename2 = os.path.join(data_directory, label_dir, problem_name, f"{representation}.dynamic", f"{os.path.basename(exec_filename)}.yml")
            if not force and os.path.isfile(embeddings_filename1) and os.path.isfile(embeddings_filename2):
                embeddings_filename = embeddings_filename1 if cfggrind_static else embeddings_filename2
                with open(embeddings_filename, "r") as fin:
                    embeddings = yl.load(fin, Loader=yl.FullLoader)
                data.append({"x": embeddings, "y": sample_class})
                return
        elif representation == "inst2vec":
            embeddings_filename = os.path.join(data_directory, label_dir, problem_name, representation, f"{os.path.basename(exec_filename)}.npz")
            if not force and os.path.isfile(embeddings_filename):
                embeddings = np.load(embeddings_filename)
                data.append({"x": embeddings, "y": sample_class})
                return
        else:
            embeddings_filename = os.path.join(data_directory, label_dir, problem_name, representation, f"{os.path.basename(exec_filename)}.yml")
            if representation != "programl" and not force and os.path.isfile(embeddings_filename):
                with open(embeddings_filename, "r") as fin:
                    embeddings = yl.load(fin, Loader=yl.FullLoader)
                data.append({"x": embeddings, "y": sample_class})
                return

        # Generate the representations
        repr_classes = {
            "llvmHistogram": (LLVMHistogramBuilder, LLVMVisitor, ir_filename),
            "x86Histogram": (X86HistogramBuilder, X86AllSectionsVisitor, exec_filename),
            "cfggrindHistogram": (CFGgrindHistogramBuilder, CFGgrindStaticDynamicVisitor, exec_filename),
            "ir2vec": (IR2VecBuilder, IR2VecFlowAwareRepresentationVisitor, ir_filename),
            "inst2vec": (Inst2VecBuilder, Inst2VecEmbeddingsVisitor, ir_filename),
            "programl": (LLVMGraphBuilder, LLVMProGraMLVisitor, ir_filename),
            "performanceCounterHistogram": (PerformanceCounterHistogramBuilder, PerformanceCounterVisitor, exec_filename)
        }

        builder_class, visitor, in_filename = repr_classes[representation]
        builder = builder_class()

        if representation in ["llvmHistogram", "programl"]:
            with open(in_filename, "r") as fin:
                in_filename = fin.read()

        info = builder.string_to_info(
                            in_filename,
                            stdin_filename=os.path.join(self.content_dir, problem_name, "info", "input.txt"),
                            timeout=timeout,
                            events=events
                )
        
        embeddings = builder.info_to_representation(
                                info,
                                visitor=visitor
                    )

        if embeddings is None:
            return

        repr_elapsed.setdefault(f"{sample}###{representation}", builder.get_elapsed_time())

        # Store the representation
        if representation == "cfggrindHistogram":
            os.makedirs(os.path.join(data_directory, label_dir, problem_name, f"{representation}.static"), exist_ok=True)
            os.makedirs(os.path.join(data_directory, label_dir, problem_name, f"{representation}.dynamic"), exist_ok=True)
            static, dynamic = embeddings
            with open(embeddings_filename1, "w") as fout:
                yl.dump(static, fout)
            with open(embeddings_filename2, "w") as fout:
                yl.dump(dynamic, fout)
        elif representation == "inst2vec":
            os.makedirs(os.path.join(data_directory, label_dir, problem_name, representation), exist_ok=True)
            np.savez_compressed(embeddings_filename, embeddings=embeddings)  
        elif representation != "programl":
            os.makedirs(os.path.join(data_directory, label_dir, problem_name, representation), exist_ok=True)
            with open(embeddings_filename, "w") as fout:
                yl.dump(embeddings, fout)

        # Create the dataset
        if representation == "cfggrindHistogram":
            if cfggrind_static:
                data.append({"x": embeddings[0], "y": sample_class})
            else:
                data.append({"x": embeddings[1], "y": sample_class})
        else:
            data.append({"x": embeddings, "y": sample_class})
            if representation == "programl":
                num_tokens.append(builder.num_tokens())

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
        shuffle = kwargs["shuffle"] if "shuffle" in kwargs else False
        languages = kwargs["languages"] if "languages" in kwargs else ["C", "500"]
        num_problems = kwargs["num_problems"] if "num_problems" in kwargs else 2

        data = {}

        problems = gl.glob(f"{self.content_dir}/p*")
        problems.sort()

        if shuffle:
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
     
    def preprocess(
        self,
        *args,
        **kwargs
    ):
        # Args

        if not ("label_dir" in kwargs and
                "samples" in kwargs and 
                "data_directory" in kwargs):
            logging.error("Wrong arguments (preprocess).")
            sys.exit(1)
        
        if "compiler_args" in kwargs:
            if not ("compiler_dir" in kwargs["compiler_args"] and
                    "c_compiler" in kwargs["compiler_args"] and
                    "cxx_compiler" in kwargs["compiler_args"] and
                    "optimizer" in kwargs["compiler_args"] and
                    "c_flags" in kwargs["compiler_args"] and
                    "cxx_flags" in kwargs["compiler_args"] and
                    "compiler_flags" in kwargs["compiler_args"]):
                logging.error("Wrong arguments (compiler args).")
                sys.exit(1)
        else:
            compiler_args = {
                "compiler_dir": "/usr/bin",
                "c_compiler": "clang",
                "cxx_compiler": "clang++",
                "optimizer": "opt",
                "c_flags": "-w -g -ggdb -fno-stack-protector -no-pie",
                "cxx_flags": "-w -g -ggdb -fno-stack-protector -no-pie --std=c++11 --std=c++14",
                "compiler_flags": "-O0",
            }

        workers = kwargs["workers"] if "workers" in kwargs else 1
        compiler_args = kwargs["compiler_args"] if "compiler_args" in kwargs else compiler_args
        timeout = kwargs["timeout"] if "timeout" in kwargs else 120
        representation = kwargs["representation"] if "representation" in kwargs else "llvmHistogram"
        force = kwargs["force"] if "force" in kwargs else False
        cfggrind_static = kwargs["cfggrind_static"] if "cfggrind_static" in kwargs else False
        events = kwargs["events"] if "events" in kwargs else ["cycles", "instructions"]
        do_not_extract_representation = kwargs["do_not_extract_representation"] if "do_not_extract_representation" in kwargs else False

        label_dir = kwargs["label_dir"]
        samples = kwargs["samples"]
        data_directory = kwargs["data_directory"]

        # Configuration parameters
        config = {
            "compiler_args": compiler_args,
            "data_directory": data_directory,
            "timeout": timeout,
            "representation": representation,
            "label_dir": label_dir,
            "force": force,
            "cfggrind_static": cfggrind_static,
            "events": events,
            "do_not_extract_representation": do_not_extract_representation
        }

        # Classes
        classes = {samples_class: i for i, samples_class in enumerate(samples.keys())}

        # Initialize shared vocabularies for node and edge features  
        manager = Manager()
        ir_elapsed = manager.dict()
        exe_elapsed = manager.dict()
        repr_elapsed = manager.dict()
        if representation == "programl":
            data = []
            num_tokens = []
        else:
            data = manager.list()
            num_tokens = manager.list()

        # Process programs in parallel
        task_args = [(classes[samples_class], program_info, config, data, num_tokens, ir_elapsed, exe_elapsed, repr_elapsed) for samples_class, samples_programs in samples.items() for program_info in samples_programs]
        if representation != "programl":            
            with Pool(processes=workers) as pool:
                list(tqdm(pool.imap_unordered(self._preprocess_sample, task_args), total=len(task_args)))
        else:
            for task_arg in tqdm(task_args, total=len(task_args)):
                self._preprocess_sample(task_arg)

        return {
            "samples": list(data),
            "num_types": sum(list(num_tokens)),
            "stats": {"ir": dict(ir_elapsed), "exe": dict(exe_elapsed), "repr": dict(repr_elapsed)}
        }