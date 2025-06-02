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

from absl import logging

from rouxinol.transformer import ClangDriver
from rouxinol.transformer import LLVMCFGVisitor
from rouxinol.transformer import LLVMGraphBuilder
from rouxinol.third_party.compy import common


class LLVMVisitor():
    def __init__(
        self
    ):
        pass


class LLVMHistogramBuilder(common.RepresentationBuilder):
    """Extract histogram.
    """

    def __init__(
        self
    ):
        common.RepresentationBuilder.__init__(self)

        self.clang_driver = ClangDriver(
            ClangDriver.ProgrammingLanguage.LLVM,
            ClangDriver.OptimizationLevel.O0,
            [],
            [],
        )
        self.__src_type = "IR"
    
    def get_src_type(
        self
    ):
        return self.__src_type

    def string_to_info(
        self,
        ir_filename,
        *args,
        **kwargs
    ):
        self.builder = LLVMGraphBuilder(
                        self.clang_driver
                    )

        # Start timing
        runtime = {
            'elapsed_time': 0.0,
            'user_time': 0.0,
            'system_time': 0.0,
            'cpu_time': 0.0
        }

        start_time = time.perf_counter()
        start_usage = resource.getrusage(resource.RUSAGE_CHILDREN)
        
        extractionInfo = self.builder.string_to_info(
                                        ir_filename
                                    )

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

        return extractionInfo
 
    def info_to_representation(
        self,
        extractionInfo,
        visitor=LLVMVisitor
    ):
        # Start timing
        runtime = {
            'elapsed_time': 0.0,
            'user_time': 0.0,
            'system_time': 0.0,
            'cpu_time': 0.0
        }

        start_time = time.perf_counter()
        start_usage = resource.getrusage(resource.RUSAGE_CHILDREN)

        _ = self.builder.info_to_representation(
                        extractionInfo,
                        LLVMCFGVisitor
                    )

        histogram = {inst : count for inst, count in self.builder._tokens.items()}
        
        # End timing
        end_time = time.perf_counter()
        end_usage = resource.getrusage(resource.RUSAGE_CHILDREN)

        # Calculate the time differences
        user_time = end_usage.ru_utime - start_usage.ru_utime
        system_time = end_usage.ru_stime - start_usage.ru_stime
        cpu_time = user_time + system_time            
  
        # Update runtime info
        runtime['elapsed_time'] = end_time - start_time  # Wall-clock time
        runtime['user_time'] = user_time                 # Time in user mode
        runtime['system_time'] = system_time             # Time in system mode
        runtime['cpu_time'] = cpu_time                   # Total CPU time

        self.update_runtime(runtime)

        return histogram