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
import sys
import linecache
import subprocess

from absl import logging

from multiprocessing import Pool, Manager

from rouxinol.utility import output_filename, run_command_unix
from rouxinol.environment import Environment


class HostEnvironment(Environment):
    """Host environment.
    """

    def __init__(
        self
    ):
        super().__init__(None)

    def run(
        self,
        exec_filename,
        *args,
        **kwargs
    ):
        """Run the program N times and collect the runtime.

        :param exec_filename: The exec filename.

        :param timeout: The timeout in seconds.

        :return: The runtime.
        """

        # Parameters
        times = kwargs["times"] if "times" in kwargs else 1
        workload = kwargs["workload"] if "workload" in kwargs else ""

        input_ = kwargs["input_"] if "input_" in kwargs else None
        stdin = kwargs["stdin"] if "stdin" in kwargs else None
        stdout = kwargs["stdout"] if "stdout" in kwargs else None
        timeout = kwargs["timeout"] if "timeout" in kwargs else None
        return_output = kwargs["return_output"] if "return_output" in kwargs else False
   
        # Run in parallel
        outputs = {}
        command = f"{exec_filename} {workload}"
        for i in range(times):
            output = run_command_unix(
                    command,
                    input_=input_,
                    stdin=stdin,
                    stdout=stdout,
                    return_output=return_output,
                    timeout=timeout
            )
            outputs[i] = output

        return outputs
        
    def run_parallel(
        self,
        exec_filename,
        *args,
        **kwargs
    ):
        """Run the program N times and collect the runtime.

        :param exec_filename: The exec filename.

        :param timeout: The timeout in seconds.

        :return: The runtime.
        """

        # Run the program
        def run_program(args):
            index, config, outputs = args
            command = config["command"]
            input_ = config["input_"]
            stdin = config["stdin"]
            stdout = config["stdout"]
            timeout = config["timeout"]
            return_output = config["return_output"]

            output = run_command_unix(
                    command,
                    input_=input_,
                    stdin=stdin,
                    stdout=stdout,
                    return_output=return_output,
                    timeout=timeout
            )
            
            outputs.setdefault(index, output)

        # Parameters
        times = kwargs["times"] if "times" in kwargs else 1
        workers = kwargs["workers"] if "workers" in kwargs else 1
        workload = kwargs["workload"] if "workload" in kwargs else ""

        input_ = kwargs["input_"] if "input_" in kwargs else None
        stdin = kwargs["stdin"] if "stdin" in kwargs else None
        stdout = kwargs["stdout"] if "stdout" in kwargs else None
        timeout = kwargs["timeout"] if "timeout" in kwargs else None
        return_output = kwargs["return_output"] if "return_output" in kwargs else False
   
        # Run in parallel
        command = f"{exec_filename} {workload}"
        config = {
            "command": command,
            "input_": input_,
            "stdin": stdin,
            "stdout": stdout,
            "timeout": timeout,
            "return_output": return_output
        }

        manager = Manager()
        outputs = manager.dict()

        task_args = [(index, config, outputs) for index in range(times)]
        with Pool(processes=workers) as pool:
            list(pool.imap_unordered(run_program, task_args), total=len(task_args))

        return dict(outputs)
        
