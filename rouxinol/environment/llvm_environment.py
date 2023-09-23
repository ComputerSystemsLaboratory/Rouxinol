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
import linecache
import subprocess

from typing import Optional, Dict

from absl import logging

from rouxinol.environment.environment import Environment

class LLVMEnvironment(Environment):
    """LLVM environment.
    """

    def __init__(self, config: Optional[Dict]=None):
        if not config:
            config = {
                "absolute_path": "/usr/bin",
                "compiler": {"c": "clang", "cxx": "clang++"},
                "optimizer": "opt"
            }
        super().__init__(config)

    def src_to_ir(self, src_filename: str, flags: str, *args, **kwargs) -> str:
        """Generate an LLVM IR file.

        :param src_filename: The source code filename.

        :param flags: The compiler flags.

        :ir_directory: The out directory.

        :return: The ir filename.
        """

        """Parameters"""
        ir_directory = kwargs["ir_directory"] if "ir_directory" in kwargs else ""

        """The out filename."""
        _, file_type, out_filename = self._out_filename(src_filename, ir_directory, ".ll")

        """The compiler."""
        compiler = os.path.join(self.config["absolute_path"], self.config["compiler"][file_type])
        # -Xclang -disable-O0-optnone 
        cmdline = f"{compiler} -S -c {flags} -emit-llvm {src_filename} -o {out_filename}"

        """Compile to IR."""
        try:
            subprocess.run(
                cmdline,
                shell=True,
                check=True,
                capture_output=False
            )
            return out_filename
        except subprocess.CalledProcessError:
            logging.error(f"Source -> IR ({src_filename}).")
            return ""

    def src_to_exec(self, src_filename: str, flags: str, *args, **kargs) -> str:
        """Generate an executable file.

        :param src_filename: The source code filename.

        :param flags: The compiler flags.

        :output_directory: The out directory.

        :return: The exec filename.
        """

        """Parameters"""
        output_directory = kwargs["output_directory"] if "output_directory" in kwargs else ""

        """The out filename."""
        _, file_type, out_filename = self._out_filename(src_filename, output_directory, "")

        """The compiler."""
        compiler = os.path.join(self.config["absolute_path"], self.config["compiler"][file_type])
        cmdline = f"{compiler} {flags} {src_filename} -o {out_filename}"

        """Compile to exe."""
        try:
            subprocess.run(
                cmdline,
                shell=True,
                check=True,
                capture_output=False
            )
            return out_filename
        except subprocess.CalledProcessError:
            logging.error(f"Source -> Exec ({src_filename}).")
            return ""

    def ir_to_exec(self, ir_filename: str, flags: str, *args, **kwargs) -> str:
        """Generate an executable file.

        :param ir_filename: The IR code filename.

        :param flags: The compiler flags.

        :output_directory: The out directory.

        :return: The ir filename.
        """

        """Parameters"""
        ir_directory = kwargs["ir_directory"] if "ir_directory" in kwargs else ""

        """The out filename."""
        _, file_type, out_filename = self._out_filename(ir_filename, ir_directory, "")

        """The compiler."""
        src_filename = linecache.getline(ir_filename, 2).replace("\n", "").replace('"', '')
        idx = src_filename.rfind(".")
        src_type = src_filename[idx+1:] if src_filename[idx+1:] == "c" else "cxx"

        compiler = os.path.join(self.config["absolute_path"], self.config["compiler"][src_type])
        cmdline = f"{compiler} {flags} {ir_filename} -o {out_filename}"

        """Compile to exe."""
        try:
            subprocess.run(
                cmdline,
                shell=True,
                check=True,
                capture_output=False
            )
            return out_filename
        except subprocess.CalledProcessError:
            logging.error(f"IR -> Exec ({ir_filename}).")
            return ""

    def optimize_ir(self, ir_filename: str, flags: str, *args, **kwargs) -> str:
        """Generate an optimized file.

        :param ir_filename: The IR code filename.

        :param flags: The compiler flags.

        :output_directory: The out directory.

        :return: The ir filename.
        """

        """Parameters"""
        ir_directory = kwargs["ir_directory"] if "ir_directory" in kwargs else ""

        """The out filename."""
        _, file_type, out_filename = self._out_filename(ir_filename, ir_directory, ".ll")

        """The optimizer."""
        optimizer = os.path.join(self.config["absolute_path"], self.config["optimizer"])
        cmdline = f"{optimizer} {flags} {ir_filename} -o {out_filename}"

        """Optimize."""
        try:
            subprocess.run(
                cmdline,
                shell=True,
                check=True,
                capture_output=False
            )
            return out_filename
        except subprocess.CalledProcessError:
            logging.error(f"IR -> IR ({ir_filename}).")
            return ""

    def validate_output(self, src_filename: str, flags: str, *args, **kwargs) -> bool:
        """Validate the program execution.

        :param src_filename: The source code filename.

        :input_data: The dataset to run the program.

        :output_data: The output of the program.

        :param flags: The compiler flags.

        :return: True if execution OK.
        """

        """Parameters"""
        input_data = kwargs["input_data"] if "input_data" in kwargs else ""
        output_data = kwargs["output_data"] if "output_data" in kwargs else ""

        """Compile the program."""
        exec_filename = self.source_to_exec(src_filename, flags, "/tmp")

        """Execute the program."""
        cmdline = f"{exec_filename} {input_data}"
        try:
            out_raw = subprocess.run(
                cmdline,
                shell=True,
                check=True,
                capture_output=True
            )
        except subprocess.CalledProcessError:
            logging.error(f"Validate output ({src_filename})")
            return False

        return out_raw.stdout.decode() == output_data

