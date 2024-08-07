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
import json
import shutil
import subprocess
import networkx as nx

from absl import logging

from rouxinol.utility import execute_command_line
from rouxinol.transformer import RepresentationBuilder

class CFGgrind():
    """Invoke CFGgrind to extract exectution histograms.

    """

    def __init__(
        self,
        exec_filename,
        input_data,
        stdin,
        function_only,
        timeout
    ):
        self.exec_filename = exec_filename
        self.input_data = input_data
        self.stdin = stdin
        self.function_only = function_only
        self.timeout = timeout
        self.elapsed = 0.0

        self.cfg_filename = f"{self.exec_filename}.cfg"
        self.map_filename = f"{self.exec_filename}.map"

        """Check."""
        if not os.path.isabs(exec_filename):
            logging.error(f"Use absolute path ({exec_filename}).")
            sys.exit(1)

    def __del__(
        self
    ):
        cmdline = f"rm -f {self.cfg_filename} {self.map_filename}"
        _, _, _ = execute_command_line(
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
        _, _, elapsed = execute_command_line(
                            cmdline,
                            "",
                            False,
                            True,
                            self.timeout
        )
        self.elapsed += elapsed

    def cfg(
        self
    ):
        """Gemerate the Assembly Map.

        :param exec_filename: The executable filename

        :param input_data: The dataset to run the program
        """
        if not self.stdin:
            cmdline = f"valgrind --tool=cfggrind --cfg-outfile={self.cfg_filename} --instrs-map={self.map_filename} {self.exec_filename} {self.input_data}"
        else:
            cmdline = f"valgrind --tool=cfggrind --cfg-outfile={self.cfg_filename} --instrs-map={self.map_filename} {self.exec_filename} < {self.input_data}"

        _, _, elapsed = execute_command_line(
                            cmdline,
                            "",
                            False,
                            True,
                            self.timeout
        )
        self.elapsed += elapsed

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

        outs, _, elapsed = execute_command_line(
                                cmdline,
                                "",
                                False,
                                True,
                                self.timeout
        )
        self.elapsed += elapsed

        try:
            out_json = json.loads(outs)
        except:
            return None, None
        static = out_json["static"]["instructions"]["opcodes"]
        dynamic = out_json["dynamic"]["instructions"]["opcodes"]
        del static["unknown"]
        del dynamic["unknown"]
        return static, dynamic

    def get_elapsed(
        self
    ):
        return self.elapsed


class CFGgrindStaticHistogramVisitor():
    def __init__(
        self
    ):
        pass


class CFGgrindDynamicHistogramVisitor():
    def __init__(
        self
    ):
        pass


class CFGgrindHistogramBuilder(RepresentationBuilder):
    """Invoke CFGgrind to extract histograms.
    """

    def __init__(
        self
    ):
        RepresentationBuilder.__init__(self)

    def string_to_info(
        self,
        exec_filename,
        input_data,
        stdin=False,
        function_only=False,
        timeout=60
    ):
        cfggrind = CFGgrind(
                        exec_filename,
                        input_data,
                        stdin,
                        function_only,
                        timeout
                    )
        cfggrind.asmmap()
        cfggrind.cfg()
        self.static, self.dynamic = cfggrind.histogram()
        self.update_elapsed(cfggrind.get_elapsed())

    def info_to_representation(
        self,
        visitor=CFGgrindStaticHistogramVisitor
    ):
        vis = visitor()

        if not (self.static and self.dynamic):
            return None

        if isinstance(vis, CFGgrindStaticHistogramVisitor):
            data = self.static
        elif isinstance(vis, CFGgrindDynamicHistogramVisitor):
            data = self.dynamic

        for op, val in data.items():
            if op not in self._tokens:
                self._tokens[op] = 0
            self._tokens[op] = val

        return data
