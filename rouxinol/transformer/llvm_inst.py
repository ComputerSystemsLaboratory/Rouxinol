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
import json
import shutil
import subprocess
import networkx as nx

from absl import logging

from rouxinol.transformer import ClangDriver
from rouxinol.transformer import LLVMCFGVisitor
from rouxinol.transformer import LLVMGraphBuilder
from rouxinol.third_party.compy_learn import common


class LLVMInstBuilder(common.RepresentationBuilder):
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

    def string_to_info(
        self,
        ir_filename
    ):
        self.builder = LLVMGraphBuilder(
                        self.clang_driver
                    )

        extractionInfo = self.builder.string_to_info(
                                        ir_filename
                                    )
        return extractionInfo
 
    def info_to_representation(
        self,
        extractionInfo,
        visitor=LLVMCFGVisitor
    ):

        _ = self.builder.info_to_representation(
                        extractionInfo,
                        visitor
                    )

        self.histogram = {inst : count for inst, count in self.builder._tokens.items()}

        for op, val in self.histogram.items():
            if op not in self._tokens:
                self._tokens[op] = 0
            self._tokens[op] = val

        return self.histogram
