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
import time
import shutil
import subprocess
import networkx as nx

from absl import logging

from rouxinol.utility import run_command_unix
from rouxinol.transformer import RepresentationBuilder

class CFGgrind():
    """Invoke CFGgrind to extract exectution histograms.

    """
    def __init__(
        self,
        exec_filename,
        input_data="",
        stdin_filename=None,
        function_only=False,
        timeout=None
    ):
        self.exec_filename = exec_filename
        self.input_data = input_data
        self.stdin_filename = stdin_filename
        self.function_only = function_only
        self.timeout = timeout
        self.runtime = {
            'elapsed_time': 0.0,
            'user_time': 0.0,
            'system_time': 0.0,
            'cpu_time': 0.0
        }

        self.cfg_filename = f"{self.exec_filename}.cfg"
        self.map_filename = f"{self.exec_filename}.map"

        """Check."""
        if not os.path.isabs(exec_filename):
            logging.error(f"Use absolute path ({exec_filename}).")
            sys.exit(1)

    def __del__(
        self
    ):
        command = f"rm -f {self.cfg_filename} {self.map_filename}"
        _ = run_command_unix(command, timeout=self.timeout)

    def asmmap(
        self
    ):
        """Gemerate the Assembly Map.

        :param exec_filename: The executable filename
	    """
        command = f"cfggrind_asmmap {self.exec_filename}"
        teste = f"cfggrind_asmmap {self.exec_filename} > {self.map_filename}"
        start = time.time()
        # TODO: run_command_unix?????
        os.system(teste)
        elapsed=time.time()-start
        self.runtime["elapsed_time"] += elapsed
        #with open(self.map_filename, 'w') as map_filename:
        #    output = run_command_unix(command, stdout=map_filename, timeout=self.timeout)
        #if output['returncode'] == 0:
        #    self.runtime = {key: self.runtime[key] + output['runtime'][key] for key in self.runtime}

    def cfg(
        self
    ):
        """Gemerate the Assembly Map.

        :param exec_filename: The executable filename

        :param input_data: The dataset to run the program
        """
        command = f"valgrind --tool=cfggrind --cfg-outfile={self.cfg_filename} --instrs-map={self.map_filename} {self.exec_filename} {self.input_data}"
     
        if self.stdin_filename:
            with open(self.stdin_filename, 'r') as fin:
                output = run_command_unix(command, stdin=fin, timeout=self.timeout)
        else:
            output = run_command_unix(command, timeout=self.timeout)
            
        if output['returncode'] == 0:
            self.runtime = {key: self.runtime[key] + output['runtime'][key] for key in self.runtime}

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
            command = f"cfggrind_info -s functions -f \"{self.exec_filename}::{self.function_only}\" -i {self.map_filename} -m json {self.cfg_filename}"
        else:
            command = f"cfggrind_info -s program -i {self.map_filename} -m json {self.cfg_filename}"

        output = run_command_unix(command, timeout=self.timeout)
        if output['returncode'] == 0:
            self.runtime = {key: self.runtime[key] + output['runtime'][key] for key in self.runtime}

        try:
            out_json = json.loads(output['stdout'])
        except:
            return None, None

        static = out_json["static"]["instructions"]["opcodes"]
        dynamic = out_json["dynamic"]["instructions"]["opcodes"]
        del static["unknown"]
        del dynamic["unknown"]

        return static, dynamic

    def get_runtime(
        self
    ):
        return self.runtime


class CFGgrindDynamicVisitor():
    def __init__(
        self
    ):
        pass


class CFGgrindHybridVisitor():
    def __init__(
        self
    ):
        pass

class CFGgrindVisitor():
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
        self.__src_type = "EXEC"
    
    def get_src_type(
        self
    ):
        return self.__src_type

    def string_to_info(
        self,
        src,
        *args,
        **kwargs
    ):
        input_data =  kwargs["input_data"] if "input_data" in kwargs else ""
        stdin_filename = kwargs["stdin_filename"] if "stdin_filename" in kwargs else ""
        function_only = kwargs["function_only"] if "function_only" in kwargs else False
        timeout = kwargs["timeout"] if "timeout" in kwargs else None

        cfggrind = CFGgrind(
                        exec_filename=src,
                        input_data=input_data,
                        stdin_filename=stdin_filename,
                        function_only=function_only,
                        timeout=timeout
                    )
        cfggrind.asmmap()
        cfggrind.cfg()
        hybrid, dynamic = cfggrind.histogram()
        self.set_runtime(cfggrind.get_runtime())

        return (hybrid, dynamic)

    def info_to_representation(
        self,
        info,
        visitor=CFGgrindVisitor
    ):
        if not info:
            return None

        if visitor.__name__ == CFGgrindHybridVisitor.__name__:
            return info[0]
        elif visitor.__name__ == CFGgrindDynamicVisitor.__name__:
            return info[1]
        elif visitor.__name__ == CFGgrindVisitor.__name__:
            return (info[0], info[1])
