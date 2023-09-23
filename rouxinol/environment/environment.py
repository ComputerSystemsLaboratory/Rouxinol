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
import subprocess

from typing import Optional, Dict

from absl import logging


class Environment():
    """Environment.
    """

    def __init__(self, config):
        self.config = config

    @property
    def config(self):
        return self._config

    @config.setter
    def config(self, config: Dict):
        self._config = config

    def _out_filename(self, filename: str, output_directory: str, new_type: str) -> str:
        """Create the out filename."""
        basename = os.path.basename(filename)
        idx = basename.rfind(".")
        basename, file_type = basename[:idx], basename[idx+1:] 
        out_filename = os.path.join(output_directory, f"{basename}{new_type}") if output_directory else filename.replace(f".{file_type}", f"{new_type}")
        file_type = "cxx" if file_type != "c" else "c"
        return basename, file_type, out_filename

    def src_to_ir(self, src_filename: str, flags: str, *args, **kwargs) -> str:
        """Generate an LLVM IR file.

        :param src_filename: The source code filename.

        :param flags: The compiler flags.

        :output_directory: The out directory.

        :return: The ir filename.
        """
        raise NotImplementedError

    def src_to_exec(self, src_filename: str, flags: str, *args, **kwargs) -> str:
        """Generate an executable file.

        :param src_filename: The source code filename.

        :param flags: The compiler flags.

        :output_directory: The out directory.

        :return: The exec filename.
        """
        raise NotImplementedError

    def ir_to_exec(self, ir_filename: str, flags: str, *args, **kwargs) -> str:
        """Generate an executable file.

        :param ir_filename: The IR code filename.

        :param flags: The compiler flags.

        :output_directory: The out directory.

        :return: The ir filename.
        """
        raise NotImplementedError

    def optimize_ir(self, ir_filename: str, flags: str, *args, **kwargs) -> str:
        """Generate an optimized file.

        :param ir_filename: The IR code filename.

        :param flags: The compiler flags.

        :output_directory: The out directory.

        :return: The ir filename.
        """
        raise NotImplementedError

    def validate_output(self, src_filename: str, flags: str, *args, **kwargs) -> bool:
        """Validate the program execution.

        :param src_filename: The source code filename.

        :input_data: The dataset to run the program.

        :output_data: The output of the program.

        :param flags: The compiler flags.

        :return: True if execution OK.
	"""
        raise NotImplementedError

