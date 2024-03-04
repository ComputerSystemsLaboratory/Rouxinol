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
import json
import shutil
import subprocess
import networkx as nx

from absl import logging

from rouxinol.utility import execute_command_line

class CFGgrind():
    """Invoke CFGgrind to extract exectution histograms.

    """

    def __init__(
        self,
        exec_filename,
        input_data,
        function_only,
        timeout
    ):
        self.exec_filename = exec_filename
        self.input_data = input_data
        self.function_only = function_only
        self.timeout = timeout

        """Check."""
        if not os.path.isabs(exec_filename):
            logging.error(f"Use absolute path ({exec_filename}).")
            sys.exit(1)

        """
        _, self.exec_basename = os.path.split(exec_filename)
        self.cfg_dump_dir = os.path.join("/tmp", "cfggrind")
        self.cfg_filename = os.path.join(self.cfg_dump_dir, f"{self.exec_basename}.cfg")
        self.map_filename = os.path.join(self.cfg_dump_dir, f"{self.exec_basename}.map")
        
        os.makedirs(self.cfg_dump_dir, exist_ok=True)
        """
        self.cfg_filename = f"{self.exec_filename}.cfg"
        self.map_filename = f"{self.exec_filename}.map"

    def __del__(
        self
    ):
        """
        if os.path.isdir(self.cfg_dump_dir):
            shutil.rmtree(self.cfg_dump_dir)
        """
        cmdline = f"rm -f {self.cfg_filename} {self.map_filename}"
        _, _ = execute_command_line(
                    cmdline,
                    "",
                    False,
                    True,
                    self.timeout
                )

    def asmmap(
        self
    ):
        """Gemerate the Assembly Map.

        :param exec_filename: The executable filename
	"""
        cmdline = f"cfggrind_asmmap {self.exec_filename} > {self.map_filename}"
        _, _ = execute_command_line(
                    cmdline,
                    "",
                    False,
                    True,
                    self.timeout
                )

    def cfg(
        self
    ):
        """Gemerate the Assembly Map.

        :param exec_filename: The executable filename

        :param input_data: The dataset to run the program
        """
        cmdline = f"valgrind --tool=cfggrind --cfg-outfile={self.cfg_filename} --instrs-map={self.map_filename} {self.exec_filename} {self.input_data}"
        _, _ = execute_command_line(
                    cmdline,
                    "",
                    False,
                    True,
                    self.timeout
                )

    def histogram(
        self
    ):
        """Gemerate the histograms.

        :param exec_filename: The executable filename

        :param function_only: Extract histogram for a specific function

        :return: The static instruction distribution frequency, and also dynamic, from program execution.

            {sub: 2, mov: 3, test 1, xor: 2, pop: 6, call: 10, ..., jne: 2}
        """
        if self.function_only:
            cmdline = f"cfggrind_info -s functions -f \"{self.exec_filename}::{self.function_only}\" -i {self.map_filename} -m json {self.cfg_filename}"
        else:
            cmdline = f"cfggrind_info -s program -i {self.map_filename} -m json {self.cfg_filename}"

        outs, _ = execute_command_line(
                        cmdline,
                        "",
                        False,
                        True,
                        self.timeout
                    )

        try:
            out_json = json.loads(outs)
        except:
            return (None, None)
        static = out_json["static"]["instructions"]["opcodes"]
        dynamic = out_json["dynamic"]["instructions"]["opcodes"]
        del static["unknown"]
        del dynamic["unknown"]
        return (static, dynamic)
