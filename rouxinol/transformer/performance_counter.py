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

    def _parse_performance_counters(
        self, 
        data_string
    ):
        # Set of valid performance counters
        valid_counters = {
            "branch-instructions",
            "branch-load-misses",
            "branch-loads",
            "branch-misses",
            "cache-misses",
            "cache-references",
            "cycles",
            "dTLB-load-misses",
            "dTLB-loads",
            "dTLB-store-misses",
            "dTLB-stores",
            "faults",
            "instructions",
            "iTLB-load-misses",
            "iTLB-loads",
            "L1-dcache-load-misses",
            "L1-dcache-loads",
            "L1-dcache-stores",
            "L1-icache-load-misses",
            "L1-dcache-prefetches",
            "L1-icache-loads",
            "stalled-cycles-backend",
            "stalled-cycles-frontend",
            "LLC-load-misses",
            "LLC-loads",
            "LLC-store-misses",
            "LLC-stores"            
        }

        performance_counters = {}

        for line in data_string:
            if (
                line.strip()
                and not line.startswith("#")
                and not line.startswith(" Performance counter stats")
            ):
                parts = line.split()
                if len(parts) >= 2:
                    value_str = parts[0].strip()
                    if value_str != "<not counted>":
                        # Try to parse value
                        try:
                            numeric_value = float(value_str.replace(".", "").replace(",", "."))
                        except ValueError:
                            continue

                        # Re-join the rest as counter name (strip trailing and # comments)
                        rest = " ".join(parts[1:])
                        rest = rest.split("#")[0].strip()

                        # Remove percent info in parentheses from the end
                        rest = re.sub(r"\s*\([0-9,\.% ]+\)$", "", rest)

                        # Only keep if matches a valid counter
                        # Match only the exact counter name (strip extra tokens)
                        for key in valid_counters:
                            # Must match at start, and be followed by end or space
                            if rest.startswith(key) and (len(rest) == len(key) or rest[len(key)] == " "):
                                performance_counters[key] = numeric_value
                                break

        return performance_counters

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

        command = f"perf stat -o {exec_filename}.perf.json {events_command} -r {rounds} {exec_filename} {input_data}"
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
            counters = self._parse_performance_counters(lines_string)
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
