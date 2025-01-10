"""
Copyright 2023 Anderson Faustino da Silva.

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.f
"""

import os
import csv
import time
import resource
import tarfile
import urllib.request
import numpy as np
import pickle as pk

from absl import logging

from appdirs import user_data_dir

from rouxinol.third_party.ncc import llvm_ir_to_trainable

from rouxinol.third_party.compy import common


class Inst2VecPreprocessedVisitor():
    def __init__(
        self
    ):
        pass


class Inst2VecEmbeddingsVisitor():
    def __init__(
        self
    ):
        pass

class Inst2VecBuilder(common.RepresentationBuilder):
    """Extract code representations.

    - Inst2Vec
    """
    def __init__(
        self
    ):
        common.RepresentationBuilder.__init__(self)

    def string_to_info(
        self,
        src,
        *args,
        **kwargs
    ):
        """Extact the IR2Vec representation.

        :param ir_filename: The LLVM IR file.

        :mode: The representation type.

        :return: [2.34, ...]
        """

        try:
            # Start timing
            runtime = {
                'elapsed_time': 0.0,
                'user_time': 0.0,
                'system_time': 0.0,
                'cpu_time': 0.0
            }

            start_time = time.perf_counter()
            start_usage = resource.getrusage(resource.RUSAGE_CHILDREN)
            
            inst2vec_dir = kwargs["inst2vec_dir"] if "inst2vec_dir" in kwargs else os.path.join("/tmp", "inst2vec")

            _, filename = os.path.split(src)

            _ = llvm_ir_to_trainable(
                        src,
                        inst2vec_dir,
                        self.vocabulary_dir
                    )
            
            csv_filename = os.path.join(inst2vec_dir, filename.replace(".ll", ".csv"))

            # End timing
            end_time = time.perf_counter()
            end_usage = resource.getrusage(resource.RUSAGE_CHILDREN)

            # Calculate the time differences
            user_time = end_usage.ru_utime - start_usage.ru_utime
            system_time = end_usage.ru_stime - start_usage.ru_stime
            cpu_time = user_time + system_time            
            
            # Update runtime info
            runtime['elapsed_time'] = end_time - start_time  # Wall-clock time
            runtime['user_time'] = user_time                # Time in user mode
            runtime['system_time'] = system_time            # Time in system mode
            runtime['cpu_time'] = cpu_time                  # Total CPU time

            self.update_runtime(runtime)
            return csv_filename
        except:
            return None

    def info_to_representation(
        self,
        info,
        visitor=Inst2VecEmbeddingsVisitor
    ):
        try:
            if not info:
                return None
    
            # Start timing
            runtime = {
                'elapsed_time': 0.0,
                'user_time': 0.0,
                'system_time': 0.0,
                'cpu_time': 0.0
            }

            start_time = time.perf_counter()
            start_usage = resource.getrusage(resource.RUSAGE_CHILDREN)

            with open(info, "r") as f:
                reader = csv.reader(f)
                emb = [int(row[0]) for row in reader]
        
            if visitor.__name__ == Inst2VecEmbeddingsVisitor.__name__:
                with open(os.path.join(self.vocabulary_dir, "emb.p"), "rb") as f:
                    embeddings = pk.load(f)
                emb = [embeddings[idx].tolist() for idx in emb]

            os.remove(info)

            embeddings = np.array(emb)
            
            # End timing
            end_time = time.perf_counter()
            end_usage = resource.getrusage(resource.RUSAGE_CHILDREN)

            # Calculate the time differences
            user_time = end_usage.ru_utime - start_usage.ru_utime
            system_time = end_usage.ru_stime - start_usage.ru_stime
            cpu_time = user_time + system_time            
            
            # Update runtime info
            runtime['elapsed_time'] = end_time - start_time  # Wall-clock time
            runtime['user_time'] = user_time                # Time in user mode
            runtime['system_time'] = system_time            # Time in system mode
            runtime['cpu_time'] = cpu_time                  # Total CPU time

            self.update_runtime(runtime)

            return embeddings
        except:
            return None