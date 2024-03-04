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
import ir2vec as i2v

from absl import logging

from rouxinol.environment import Environment
from rouxinol.transformer import Transformer


class IR2Vec(Transformer):
    """Extract code representations.

    Rouxinol invokes IR2Vec to extract the representation.

    - IR2Vec
    """

    def __init__(
        self
    ):
        super().__init__()

    def from_src(
        self,
        src_filename,
        *args,
        **kwargs
    ):
        """Extact the IR2Vec representation.

        :param src_filename: The source file.

        :param flags: The compiler flags.

        :ir_directory: The out directory.

        :env: The environment.

        :mode: The representation type.

        :return: [2.34, ...].
        """

        """Parameters"""
        flags = kwargs["flags"] if "flags" in kwargs else ""
        ir_directory = kwargs["ir_directory"] if "ir_directory" in kwargs else ""
        mode = kwargs["mode"] if "mode" in kwargs else "fa"

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
                        ir_filename,
                        mode=mode
                    )

    def from_ir(
        self,
        ir_filename,
        *args,
        **kwargs
    ):
        """Extact the IR2Vec representation.

        :param ir_filename: The LLVM IR file.

        :mode: The representation type.

        :return: [2.34, ...]
        """
        mode = kwargs["mode"] if "mode" in kwargs else "fa"

        try:
            obj = i2v.initEmbedding(
                    ir_filename,
                    mode,
                    "p"
                )
        
            return i2v.getProgramVector(obj)
        except:
            return None

