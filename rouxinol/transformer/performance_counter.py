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


class PerformanceCounterVisitor():
    def __init__(
        self
    ):
        pass


class PerformanceCounterHistogramBuilder(RepresentationBuilder):
    """Invoke Perf to extract histogram.
    """

    def __init__(
        self
    ):
        RepresentationBuilder.__init__(self)
        self.__src_type = "EXEC"
    
    def get_src_type(
        self,
    ):
        return self.__src_type
        
    def _remove_pcnt_running(
        self,
        input_string
    ):
        # Define the pattern to search for  
        pattern1 = '"pcnt-running" : '
        pattern2 = '"metric-value" : '

        # Find the starting index of the pattern  
        start_index = input_string.find(pattern1) 
        end_index = input_string.find(pattern2)

        # If the pattern is found, proceed to remove it  
        if start_index != -1 and end_index != -1:
            input_string = input_string[:start_index] + input_string[end_index:]      
        
        return input_string

    def string_to_info(
        self,
        exec_filename,
        *args,
        **kwargs
    ):
        input_data =  kwargs["input_data"] if "input_data" in kwargs else ""
        stdin_filename = kwargs["stdin_filename"] if "stdin_filename" in kwargs else ""
        timeout = kwargs["timeout"] if "timeout" in kwargs else None
        events = kwargs["events"] if "events" in kwargs else ["cycles", "instructions"]
        rounds = kwargs["rounds"] if "rounds" in kwargs else 1
            
        runtime = {
            'elapsed_time': 0.0,
            'user_time': 0.0,
            'system_time': 0.0,
            'cpu_time': 0.0
        }

        counters = {}

        events_command = ""
        for event in events:
            events_command += f" -e {event} "

        command = f"perf stat -j -o {exec_filename}.perf.json {events_command} -r {rounds} {exec_filename} {input_data}"
        if stdin_filename:
            with open(stdin_filename, 'r') as fin:
                output = run_command_unix(command, stdin=fin, timeout=timeout)
        else:
            output = run_command_unix(command, timeout=timeout)
            
        if output['returncode'] == 0:
            runtime = output['runtime'].copy()

        try:
            with open(f"{exec_filename}.perf.json", 'r') as f:
                lines_string = f.readlines()
            lines = [line.strip() for line in lines_string]  
            
            # Process each line and create dictionary 
            for line in lines:  
                # Parse JSON string
                line = self._remove_pcnt_running(line)
                data = json.loads(line)
                if len(data.keys()) == 2:
                    continue
                if data['counter-value'] == "<not counted>":
                    continue
                # Extract event and counter-value, replace comma with period  
                counters[data['event']] = float(data['counter-value'].replace(',', '.'))
        except Exception as e:
            counters = None
        finally:
            command = f"rm -rf {exec_filename}.perf.json"
            _ = run_command_unix(command)

        self.set_runtime(runtime)

        return counters

    def info_to_representation(
        self,
        info,
        visitor=PerformanceCounterVisitor
    ):
      
        if visitor.__name__ == PerformanceCounterVisitor.__name__:
            return info
        else:
            return None
