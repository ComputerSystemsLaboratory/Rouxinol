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

import sys

from absl import logging

from rouxinol.transformer import Transformer
from rouxinol.transformer import LLVMCFGVisitor


class LLVMInstCount(Transformer):
    """Extract code representations.

    - LLVM instructions count

    """

    def __init__(
        self
    ):
        self.visitor = LLVMCFGVisitor

        super().__init__()

    def from_src(
        self,
        src_filename,
        *args,
        **kwargs
    ):
        """Transform a source code into a histogram.
        :param src_filename: The source file.

        :param flags: The compiler flags.

        :ir_directory: The out directory.

        :env: The environment.

        :return: A representation.
        """

        """Parameters"""
        flags = kwargs["flags"] if "flags" in kwargs else ""
        ir_directory = kwargs["ir_directory"] if "ir_directory" in kwargs else ""
        """Compile the program."""
        if not "env" in kwargs:
            logging.error("Uninstantiated environment.")
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
        """Extact the LLVM histogram.

        :param ir_filename: The LLVM IR file.

        :return: The instruction distribution frequency.

            {add: 2, alloca: 3, and: 1, bitcast: 2, br: 6, call: 10, ..., store: 2}

        :note: Rouxinol invokes Compy-learn to extract the LLVM histogram.

        """
        return self._inst_from_ir(
                    ir_filename,
                    self.visitor
                )
