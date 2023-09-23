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

from typing import Dict, Tuple, Optional, Type

from absl import logging

from compy import representations as R

from rouxinol.environment.environment import Environment
from rouxinol.transformer.transformer import Transformer

class LLVMHistogram(Transformer):
    """Extract code representations.

    - LLVM histogram

    """

    def __init__(self):
        super().__init__()

    def from_src(self, src_filename: str, *args, **kwargs) -> Dict:
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

        ir_filename = kwargs["env"].src_to_ir(src_filename, flags, ir_directory)

        return self.from_ir(ir_filename)

    def from_ir(self, ir_filename: str, *args, **kwargs) -> Dict:
        """Extact the LLVM histogram.

        :param ir_filename: The LLVM IR file.

        :return: The instruction distribution frequency.

            {add: 2, alloca: 3, and: 1, bitcast: 2, br: 6, call: 10, ..., store: 2}

        :note: Rouxinol invokes Compy-learn to extract the LLVM histogram.

        """

        """Instantiate the builder."""
        builder = R.LLVMGraphBuilder(self.clang_driver)

        """Extract the histogram."""
        try:
            with open(ir_filename, "rb") as fin:
                source = fin.read()
            extractionInfo = builder.string_to_info(source)
            _ = builder.info_to_representation(extractionInfo, R.LLVMCFGVisitor)
            histogram = { inst : count for inst, count in builder._tokens.items()}
            return histogram
        except Exception:
            logging.error(f"Transform IR -> Histogram ({ir_filename}).")
            return {}

