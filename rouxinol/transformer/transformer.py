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

from absl import logging

from typing import Dict, Tuple, Optional, Type, Type

from rouxinol.environment.environment import Environment

from compy import representations as R
from compy.representations.extractors import ClangDriver
from compy.representations.extractors.extractors import Visitor

class Transformer():
    """Transform upper class.

    """

    def __init__(self):
        """Initialize the clang_driver."""
        self.clang_driver = ClangDriver(
            ClangDriver.LLVM,
            ClangDriver.OptimizationLevel.O0,
            [],
            [],
        )

    def _graph_from_ir(self, ir_filename: str, visitor: Type[Visitor]) -> Dict:
        """Extact a graph.

        :param ir_filename: The LLVM IR file.

        :param: The type of the graph.

        :return: {"nodes": [type, type, ..., type], "edges": [(src,type,dest), ..., (src,type,dest)]}.
        """

        """Instantiate the builder."""
        builder = R.LLVMGraphBuilder(self.clang_driver)

        """Extract the graph."""
        try:
            with open(ir_filename, "rb") as fin:
                source = fin.read()
            extractionInfo = builder.string_to_info(source)
            rep = builder.info_to_representation(extractionInfo, visitor)
            graph = {"nodes": rep.get_node_list(), "edges": rep.get_edge_list()}
            return graph
        except Exception:
            logging.error(f"Transform IR -> CFG ({ir_filename}).")
            return {}

    def from_src(self, src_filename: str, *args, **kwargs) -> Dict:
        """Transform a source code into a histogram.
        :param src_filename: The source file.

        :param flags: The compiler flags.

        :output_directory: The out directory.

        :env: The environment.

        :return: A representation.
        """
        raise NotImplementedError


    def from_ir(self, ir_filename: str, *args, **kwargs) -> Dict:
        """Extact the LLVM histogram.

        :param ir_filename: The LLVM IR file.

        :return: A representation.
        """
        raise NotImplementedError

    def from_exec(self, exec_filename: str, *args, **kwargs) -> Tuple[Dict, Dict]:
        """Extact the CFGGrind histograms.

        :param exc_filename: The executable filename

        :param input_data: The dataset to run the program

        :param function_only: Extract histogram for a specific function

        :return: A representation.
        """
        raise NotImplementedError

