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

import sys

from absl import logging

from rouxinol.transformer import Transformer
from rouxinol.transformer import LLVMCFGCallVisitor


class CFGCallGraph(Transformer):
    """Extract code representations.

    Rouxinol invokes Compy-learn to extract graphs.

    - CFG Call
    """

    def __init__(
        self
    ):
        self.visitor = LLVMCFGCallVisitor

        super().__init__()

    def from_src(
        self,
        src_filename,
        *args,
        **kwargs
    ):
        """Extact the CFG Call graph.
        :param src_filename: The source file.

        :param flags: The compiler flags.

        :ir_directory: The out directory.

        :env: The environment.

        :return: {"nodes": [type, type, ..., type], "edges": [(src,type,dest), ..., (src,type,dest)]}.
        """

        """Parameters"""
        flags = kwargs["flags"] if "flags" in kwargs else ""
        ir_directory = kwargs["ir_directory"] if "ir_directory" in kwargs else ""

        """Compile the program."""
        if not "env" in kwargs:
            logging.error(
                        "Uninstantiated environment."
                    )
            sys.exit(1)

        ir_filename = kwargs["env"].src_to_ir(
                                        src_filename,
                                        flags,
                                        ir_directory=ir_directory
                                    )

        return self.from_ir(
                        ir_filename
                    )

    def from_ir(
        self,
        ir_filename,
        *args,
        **kwargs
    ):
        """Extact the CFG Call graph.

        :param ir_filename: The LLVM IR file.

        :return: {"nodes": [type, type, ..., type], "edges": [(src,type,dest), ..., (src,type,dest)]}.
        """
        return self._graph_from_ir(
                    ir_filename,
                    self.visitor
                )

