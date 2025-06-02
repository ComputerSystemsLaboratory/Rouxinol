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
limitations under the License.
"""

import os
import time
import resource
import ir2vec as i2v

from rouxinol.third_party.compy import common


class IR2VecSymbolicRepresentationVisitor():
    def __init__(
        self
    ):
        pass


class IR2VecFlowAwareRepresentationVisitor():
    def __init__(
        self
    ):
       pass

class IR2VecBuilder(common.RepresentationBuilder):
    """Extract IR2Vec.
    """

    def __init__(
        self
    ):
        common.RepresentationBuilder.__init__(self)
        self.__src_type = "IR"
    
    def get_src_type(
        self
    ):
        return self.__src_type

    def string_to_info(
        self,
        src,
        *args,
        **kwargs
    ):
        return src 

    def info_to_representation(
        self,
        info,
        visitor=IR2VecFlowAwareRepresentationVisitor
    ):
        try:
            # Start timing
            runtime = {
                'elapsed_time': 0.0,
                'user_time': 0.0,
                'system_time': 0.0,
                'cpu_time': 0.0
            }

            # Start timing
            start_time = time.perf_counter()
            start_usage = resource.getrusage(resource.RUSAGE_CHILDREN)
            start = time.time()
            
            # Collect IR2Vec
            obj = i2v.initEmbedding(
                    info,
                    "fa" if visitor.__name__ == IR2VecFlowAwareRepresentationVisitor.__name__ else "sym",
                    "p"
                )
            ir2vec = i2v.getProgramVector(obj)

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

            return ir2vec
        except:
            return None