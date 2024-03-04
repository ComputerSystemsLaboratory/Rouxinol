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
import sys

from absl import logging as logging

from rouxinol.transformer import ClangDriver
from rouxinol.transformer import ASTGraphBuilder
from rouxinol.transformer import LLVMGraphBuilder
from rouxinol.transformer import LLVMInstBuilder
from rouxinol.transformer import CFGgrindGraphBuilder
from rouxinol.transformer import CFGgrindInstBuilder

class Transformer(object):
    """Transform upper class.
    """

    def __init__(
        self,
        opt_level="O0"
    ):

        optimization_level = {
            "O0": ClangDriver.OptimizationLevel.O0,
            "O1": ClangDriver.OptimizationLevel.O1,
            "O2": ClangDriver.OptimizationLevel.O2,
            "O3": ClangDriver.OptimizationLevel.O3,
            "Os": ClangDriver.OptimizationLevel.Os,
            "Oz": ClangDriver.OptimizationLevel.Oz
        }

        self.clang_c_driver = ClangDriver(
            ClangDriver.ProgrammingLanguage.C,
            optimization_level[opt_level],
            [],
            [],
        )

        self.clang_cxx_driver = ClangDriver(
            ClangDriver.ProgrammingLanguage.CPlusPlus,
            optimization_level[opt_level],
            [],
            [],
        )

        self.clang_llvm_driver = ClangDriver(
            ClangDriver.ProgrammingLanguage.LLVM,
            optimization_level[opt_level],
            [],
            [],
        )

        self.ast_graph_builder_c = ASTGraphBuilder(
                                        self.clang_c_driver
                                    )

        self.ast_graph_builder_cxx = ASTGraphBuilder(
                                        self.clang_cxx_driver
                                    )

        self.llvm_graph_builder = LLVMGraphBuilder(
                                        self.clang_llvm_driver
                                    )

        self.cfggrind_graph_builder = CFGgrindGraphBuilder()

        self.cfggrind_inst_builder = CFGgrindInstBuilder()

        self.llvm_inst_builder = LLVMInstBuilder()


    def _graph_from_src(
        self,
        src_filename,
        visitor
    ):
        """Extact a graph.

        :param src_filename: The sourcefile.

        :param visitor: The type of the graph.

        :return: Networkx graph.
        """

        """Check."""
        if not os.path.isabs(src_filename):
            logging.error(f"Use absolute path ({src_filename}).")
            sys.exit(1)

        """Find the correct builder."""
        basename = os.path.basename(
                                src_filename
                            )

        if basename.endswith(".c"):
            builder = self.ast_graph_builder_c
        elif basename.endswith(".cpp"):
            builder = self.ast_graph_builder_cxx
        else:
            logging.error(
                    "Builder error!!!"
                )
            sys.exit(1)

        """Extract the graph."""
        try:
            with open(src_filename, "rb") as fin:
                source = fin.read()
            extractionInfo = builder.string_to_info(
                                        source
                                    )
            graph = builder.info_to_representation(
                                    extractionInfo,
                                    visitor
                            )
            return graph
        except Exception:
            logging.error(
                    f"Transform SRC -> AST Graph ({src_filename})."
                )
            return None

    def _graph_from_ir(
        self,
        ir_filename,
        visitor
    ):
        """Extact a graph.

        :param ir_filename: The LLVM IR file.

        :param visitor: The type of the graph.

        :return: Networkx graph.
        """

        """Check."""
        if not os.path.isabs(ir_filename):
            logging.error(f"Use absolute path ({ir_filename}).")
            sys.exit(1)

        """The builder."""
        builder = self.llvm_graph_builder

        """Extract the graph."""
        try:
            with open(ir_filename, "rb") as fin:
                source = fin.read()
            extractionInfo = builder.string_to_info(
                                        source
                                    )
            graph = builder.info_to_representation(
                                extractionInfo,
                                visitor
                            )
            return graph
        except Exception:
            logging.error(
                    f"Transform IR -> LLVM Graph ({ir_filename})."
                )
            return None

    def _graph_from_exec(
        self,
        exec_filename,
        input_data,
        function_only,
        timeout,
        visitor
    ):
        """Extact a graph.

        :param exec_filename: The exec file.

        :param input_data: The input.

        ;param function_only: Extract data for a specific function.

        :param timeout: The timeout.

        :param visitor: The type of the graph.

        :return: Networkx graph.
        """

        """Check."""
        if not os.path.isabs(exec_filename):
            logging.error(f"Use absolute path ({exec_filename}).")
            sys.exit(1)

        """The builder."""
        builder = self.cfggrind_graph_builder

        """Extract the graph."""
        try:
            builder.string_to_info(
                        exec_filename,
                        input_data,
                        function_only,
                        timeout
                    )
            graph = builder.info_to_representation(
                                visitor
                            )
            return graph
        except Exception:
            logging.error(
                    f"Transform EXEC -> CFGgrind Graph ({exec_filename})."
                )
            return None

    def _inst_from_ir(
        self,
        ir_filename,
        visitor
    ):
        """Extact a histogram.

        :param ir_filename: The LLVM IR file.

        :param visitor: The type of the histogram.

        :return: Dictionary.
        """

        """Check."""
        if not os.path.isabs(ir_filename):
            logging.error(f"Use absolute path ({ir_filename}).")
            sys.exit(1)

        """The builder."""
        builder = self.llvm_inst_builder

        """Extract the histogram."""
        try:
            with open(ir_filename, "rb") as fin:
                source = fin.read()
            extractionInfo = builder.string_to_info(
                                        source
                                    )
            histogram = builder.info_to_representation(
                                extractionInfo,
                                visitor
                            )
            return histogram
        except Exception:
            logging.error(
                    f"Transform IR -> LLVM inst count ({ir_filename})."
                )
            return None

    def _inst_from_exec(
        self,
        exec_filename,
        input_data,
        function_only,
        timeout,
        visitor
    ):
        """Extact a histogram.

        :param exec_filename: The exec file.

        :param input_data: The input.

        ;param function_only: Extract data for a specific function.

        :param timeout: The timeout.

        :param visitor: The type of the histogram.

        :return: Dictionary
        """

        """Check."""
        if not os.path.isabs(exec_filename):
            logging.error(f"Use absolute path ({exec_filename}).")
            sys.exit(1)

        """The builder."""
        builder = self.cfggrind_inst_builder

        """Extract the histogram."""
        try:
            builder.string_to_info(
                        exec_filename,
                        input_data,
                        function_only,
                        timeout
                    )
            histogram = builder.info_to_representation(
                                visitor
                            )
            return histogram
        except Exception:
            logging.error(
                    f"Transform EXEC -> CFGgrind inst count ({exec_filename})."
                )
            return None

    def from_src(
        self,
        src_filename,
        *args,
        **kwargs
    ):
        """Transform a source code into a histogram.
        :param src_filename: The source file.

        :param flags: The compiler flags.

        :output_directory: The out directory.

        :env: The environment.

        :return: A representation.
        """
        raise NotImplementedError

    def from_ir(
        self,
        ir_filename,
        *args,
        **kwargs
    ):
        """Extact the LLVM histogram.

        :param ir_filename: The LLVM IR file.

        :return: A representation.
        """
        raise NotImplementedError

    def from_exec(
        self,
        exec_filename,
        *args,
        **kwargs
    ):
        """Extact the CFGGrind histograms.

        :param exc_filename: The executable filename

        :param input_data: The dataset to run the program

        :param function_only: Extract histogram for a specific function

        :return: A representation.
        """
        raise NotImplementedError

