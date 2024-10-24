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
        self.mode = "sym"


class IR2VecFlowAwareRepresentationVisitor():
    def __init__(
        self
    ):
        self.mode = "fa"

class IR2VecBuilder(common.RepresentationBuilder):
    """Extract IR2Vec.
    """

    def __init__(
        self
    ):
        common.RepresentationBuilder.__init__(self)
        self.ir_filename = None
       
    def string_to_info(
        self,
        ir_filename,
        *args,
        **kwargs
    ):
        self.ir_filename = ir_filename

    def info_to_representation(
        self,
        visitor=IR2VecFlowAwareRepresentationVisitor
    ):
        try:
            # Start timing
            start_time = time.perf_counter()
            start_usage = resource.getrusage(resource.RUSAGE_CHILDREN)
            start = time.time()
            
            # Collect IR2Vec
            obj = i2v.initEmbedding(
                    self.ir_filename,
                    visitor.mode,
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
            elapsed = end_time - start_time
    
            self.update_elapsed(elapsed)

            return ir2vec
        except:
            return None