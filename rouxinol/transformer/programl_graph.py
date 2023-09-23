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
from compy.representations.extractors.extractors import Visitor

from rouxinol.environment.environment import Environment
from rouxinol.transformer.transformer import Transformer

class ProGraMLGraph(Transformer):
    """Extract code representations.

    Rouxinol invokes Compy-learn to extract graphs.

    - CFG
    """

    def __init__(self):
        self.visitor = R.LLVMProGraMLVisitor

        super().__init__()

    def from_src(self, src_filename: str, *args, **kwargs) -> Dict:
        """Extact the ProGraML graph.
        :param src_filename: The source file.

        :param flags: The compiler flags.

        :output_directory: The out directory.

        :env: The environment.

        :return: {"nodes": [type, type, ..., type], "edges": [(src,type,dest), ..., (src,type,dest)]}.
        """

        """Parameters"""
        flags = kwargs["flags"] if "flags" in kwargs else ""
        output_directory = kwargs["output_directory"] if "output_directory" in kwargs else ""

        """Compile the program."""
        if not "env" in kwargs:
            logging.error("Uninstantiated environment.")
            sys.exit(1)

        ir_filename = kwargs["env"].src_to_ir(src_filename, flags, output_directory)

        return self.from_ir(ir_filename)

    def from_ir(self, ir_filename: str, *args, **kwargs) -> Dict:
        """Extact the ProGraML graph.

        :param ir_filename: The LLVM IR file.

        :return: {"nodes": [type, type, ..., type], "edges": [(src,type,dest), ..., (src,type,dest)]}.
        """
        return self._graph_from_ir(
                    ir_filename,
                    self.visitor
                )

