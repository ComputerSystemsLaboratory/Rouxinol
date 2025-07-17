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

import os

from absl import logging


class Environment(object):
    """Environment.
    """

    def __init__(
        self,
        config
    ):
        self.config = config

    @property
    def config(
        self
    ):
        return self._config

    @config.setter
    def config(
        self, 
        config
    ):
        self._config = config

    def src_to_ir(
        self,
        src_filename,
        flags,
        *args,
        **kwargs
    ):
        """Generate an LLVM IR file.

        :param src_filename: The source code filename.

        :param flags: The compiler flags.

        :ir_directory: The ir (output) directory.

        :return: The ir filename.
        """
        raise NotImplementedError

    def src_to_exec(
        self,
        src_filename,
        flags,
        *args,
        **kwargs
    ):
        """Generate an executable file.

        :param src_filename: The source code filename.

        :param flags: The compiler flags.

        :exec_directory: The exec (output) directory.

        :return: The exec filename.
        """
        raise NotImplementedError

    def ir_to_exec(
        self,
        ir_filename,
        flags,
        *args,
        **kwargs
    ):
        """Generate an executable file.

        :param ir_filename: The IR code filename.

        :param flags: The compiler flags.

        :exec_directory: The exec (output) directory.

        :return: The ir filename.
        """
        raise NotImplementedError

    def optimize_ir(
        self,
        ir_filename,
        flags,
        *args,
        **kwargs
    ):
        """Generate an optimized file.

        :param ir_filename: The IR code filename.

        :param flags: The compiler flags.

        :ir_directory: The ir (output) directory.

        :return: The ir filename.
        """
        raise NotImplementedError

    def validate_output(
        self,
        src_filename,
        flags,
        *args,
        **kwargs
    ):
        """Validate the program execution.

        :param src_filename: The source code filename.

        :input_data: The dataset to run the program.

        :output_data: The output of the program.

        :param flags: The compiler flags.

        :return: True if execution OK.
	"""
        raise NotImplementedError

