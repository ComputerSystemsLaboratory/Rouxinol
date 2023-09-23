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

import json
import subprocess

from absl import logging
from typing import Optional

class CFGgrind():
    """Invoke CFGgrind to extract exectution histograms.

    """

    def __init__(self):
        pass

    def asmmap(self, exec_filename: str) -> None:
        """Gemerate the Assembly Map.

        :param exec_filename: The executable filename
	"""
        cmdline = f"cfggrind_asmmap {exec_filename} > {exec_filename}.map"
        subprocess.run(
            cmdline,
            shell=True,
            check=True,
            capture_output=False
        )

    def cfg(self, exec_filename: str, input_data: str) -> None:
        """Gemerate the Assembly Map.

        :param exec_filename: The executable filename

        :param input_data: The dataset to run the program
        """
        cmdline = f"valgrind --tool=cfggrind --cfg-outfile={exec_filename}.cfg --instrs-map={exec_filename}.map --cfg-dump=main {exec_filename} {input_data}"
        subprocess.run(
            cmdline,
            shell=True,
            check=True,
            capture_output=False
        )

    def histogram(self, exec_filename: str, function_only: Optional[str] = "") -> None :
        """Gemerate the histograms.

        :param exec_filename: The executable filename

        :param function_only: Extract histogram for a specific function

        :return: The static instruction distribution frequency, and also dynamic, from program execution.

            {sub: 2, mov: 3, test 1, xor: 2, pop: 6, call: 10, ..., jne: 2}
        """
        if function_only:
            cmdline = f"cfggrind_info -s functions -f \"{exec_filename}::{function_only}\" -i {exec_filename}.map -m json {exec_filename}.cfg"
        else:
            cmdline = f"cfggrind_info -s program -i {exec_filename}.map -m json {exec_filename}.cfg"

        out_raw = subprocess.run(
            cmdline,
            shell=True,
            check=True,
            capture_output=True
        )

        out_json = json.loads(out_raw.stdout)
        static = out_json["static"]["instructions"]["opcodes"]
        dynamic = out_json["dynamic"]["instructions"]["opcodes"]
        del static["unknown"]
        del dynamic["unknown"]
        return (static, dynamic)
