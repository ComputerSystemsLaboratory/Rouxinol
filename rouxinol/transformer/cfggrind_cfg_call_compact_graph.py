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
import glob as gl

from absl import logging

from rouxinol.transformer import Transformer
from rouxinol.transformer import CFGgrindCFGCallCompactVisitor


class CFGgrindCFGCallCompactGraph(Transformer):
    """Extract a code representations.

    - CFGGrind CFG Call Compact Graph

    Rouxinol leverages CFGGrind data to build a CFG graph.
    """

    def __init__(
        self
    ):
        self.visitor = CFGgrindCFGCallCompactVisitor

        super().__init__()

    def from_src(
        self,
        src_filename,
        *args,
        **kwargs
    ):
        """Transform a source code into a CFGgrind histogram.
        :param src_filename: The source file.

        :param flags: The compiler flags.

        :exec_directory: The exec (output) directory.

        :env: The environment.

        :param input_data: The dataset to run the program

        :param function_only: Extract histogram for a specific function

        :param timeout: The timeout in seconds.

        :return: A Networkx graph.
        """

        """Parameters"""
        flags = kwargs["flags"] if "flags" in kwargs else ""
        exec_directory = kwargs["exec_directory"] if "exec_directory" in kwargs else ""
        input_data = kwargs["input_data"] if "input_data" in kwargs else ""
        function_only = kwargs["function_only"] if "function_only" in kwargs else ""
        timeout = kwargs["timeout"] if "timeout" in kwargs else None

        """Compile the program."""
        if not "env" in kwargs:
            logging.error(
                        "Uninstantiated environment."
                    )
            sys.exit(1)

        exec_filename = kwargs["env"].src_to_exec(
                                        src_filename,
                                        flags,
                                        exec_directory=exec_directory,
                                        timeout=timeout
                                    )
        if not exec_filename:
            return (None, None)

        """Extract the graph."""
        graph = self.from_exec(
                        exec_filename,
                        input_data=input_data,
                        function_only=function_only,
                        timeout=timeout
                    )
        return graph

    def from_ir(
        self,
        ir_filename,
        *args,
        **kwargs
    ):
        """Transform a source code into a CFGgrind histogram.
        :param src_filename: The source file.

        :param flags: The compiler flags.

        :exec_directory: The exzec (output) directory.

        :env: The environment.

        :param input_data: The dataset to run the program

        :param function_only: Extract histogram for a specific function

        :param timeout: The timeout in seconds.

        :return: A Networkx graph.
        """

        """Parameters"""
        flags = kwargs["flags"] if "flags" in kwargs else ""
        exec_directory = kwargs["exec_directory"] if "exec_directory" in kwargs else ""
        input_data = kwargs["input_data"] if "input_data" in kwargs else ""
        function_only = kwargs["function_only"] if "function_only" in kwargs else ""
        timeout = kwargs["timeout"] if "timeout" in kwargs else None

        """Compile the program."""
        if not "env" in kwargs:
            logging.error("Uninstantiated environment.")
            sys.exit(1)

        exec_filename = kwargs["env"].ir_to_exec(
                                        ir_filename,
                                        flags,
                                        exec_directory=exec_directory,
                                        timeout=timeout
                                    )
        if not exec_filename:
            return (None, None)

        """Extract histograms."""
        graph = self.from_exec(
                        exec_filename,
                        input_data=input_data,
                        function_only=function_only,
                        timeout=timeout
                    )
        return graph

    def from_exec(
        self,
        exec_filename,
        *args,
        **kwargs
    ):
        """Transform an executable into a CFGgrind histogram.

        :param exc_filename: The executable filename

        :param input_data: The dataset to run the program

        :param function_only: Extract histogram for a specific function

        :param timeout: The timeout in seconds.

        :return: A Networkx graph. 
        """
        """Parameters"""
        input_data = kwargs["input_data"] if "input_data" in kwargs else ""
        function_only = kwargs["function_only"] if "function_only" in kwargs else ""
        timeout = kwargs["timeout"] if "timeout" in kwargs else None

        return self._graph_from_exec(
                    exec_filename,
                    input_data,
                    function_only,
                    timeout,
                    self.visitor
                )

