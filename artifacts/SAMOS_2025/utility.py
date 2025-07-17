"""
SAMOS 2025 Artifact
Copyright (C) 2025 Anderson Faustino da Silva

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
import re
import sys

import yaml as yl

from absl import logging

from rouxinol.utility import multiple_file_types

from rouxinol.utility import update_histogram_from_keys

# ---------------------------------------------
# Helper function: Log file to data
# ---------------------------------------------
def parse_log_file(
    filename, 
    baseline=0.0
):  
    """  
    Parses a log file and extracts information into a dictionary.  
    
    Args:  
        filename (str): Path to the file with the specific pattern.  
        baseline (float): A baseline value for calculating the speedup.  

    Returns:  
        dict: A dictionary with extracted keys ('tasklets', 'dpus', 'pass', 'param', 'time', 'speedup'),  
              or None if the file has an error (e.g., total_time <= 0).  
    """  
    # (1) Parse the filename  
    filename_pattern = r"cos_(\d+)_tasklets_(\d+)_dpus_(\d+)_param_(\d+)\.log"  
    match = re.search(filename_pattern, filename)  
    if not match:  
        logging.warning(f"Filename (filename) does not match the required pattern.")  
        return None

    # Extract values from the filename
    cos = int(match.group(1))     
    tasklets = int(match.group(2))  
    dpus = int(match.group(3))   
    param = int(match.group(4))  
    
    # Initialize the dictionary with extracted values  
    result = {  
        "tasklets": tasklets,  
        "dpus": dpus,  
        "cos": cos,  
        "param": param,  
        "runtime": 0.0,  # Placeholder for DPU Kernel Time  
        "speedup": None  # Placeholder for speedup  
    }  

    # (2) Process the file to extract DPU Kernel Time  
    reduction_time = 0.0  
    scan_time = 0.0  
    add_time = 0.0  
    step_times = []  
    total_time = 0.0  

    with open(filename, 'r') as file:  
        lines = file.readlines()  

        # Scan all lines to search for patterns  
        for line in lines:  
            # Pattern 1: Reduction Time and Scan Time  
            match_reduction = re.search(r"DPU Kernel Reduction Time:\s*([\d.]+)\s*ms", line)  
            if match_reduction:  
                reduction_time += float(match_reduction.group(1))  
            
            match_scan = re.search(r"DPU Kernel Scan Time:\s*([\d.]+)\s*ms", line)  
            if match_scan:  
                scan_time += float(match_scan.group(1))  
            
            # Pattern 2: Scan Time and Add Time  
            match_add = re.search(r"DPU Kernel Add Time:\s*([\d.]+)\s*ms", line)  
            if match_add:  
                add_time += float(match_add.group(1))  
            
            # Pattern 3: Single Kernel Time (directly on a line)  
            match_kernel = re.search(r"DPU Kernel Time:\s*([\d.]+)\s*ms", line)  
            if match_kernel:  
                total_time += float(match_kernel.group(1))  
            
            # Pattern 4: Step-wise Kernel Times  
            step_kernel = re.search(r"Step \w+ DPU Kernel Time:\s*([\d.]+)\s*ms", line)  
            if step_kernel:  
                step_times.append(float(step_kernel.group(1)))  

    # Calculate the total kernel time from the matched components  
    # Sum the Reduction + Scan time (if found)  
    total_time += reduction_time + scan_time  
    # Add the Add time (if found)  
    total_time += add_time  
    # Add the Step-wise times (if found)  
    total_time += sum(step_times)  

    # If total_time <= 0, file has an error; return None  
    if total_time <= 0:
        return None  

    # Update the "time" key in the result dictionary  
    result["runtime"] = total_time  

    # Calculate speedup (baseline / time)  
    result["speedup"] = baseline / total_time  if baseline > 0.0 else total_time

    return result if result["runtime"] > 0.0 else None

# -------------------------------------------------
# Create the dataset
# -------------------------------------------------
def load_offline_embedding(
    data_directory,
    instructions_filename, 
    benchmarks, 
    baseline, 
    target
):
    data = []
    for benchmark in benchmarks:
        bench_directory = os.path.join(data_directory, benchmark)
        baseline_filename = os.path.join(data_directory, benchmark, "runtime", baseline)

        if not os.path.isdir(bench_directory):
            logging.error(f"Benchmark directory does not exist ({bench_directory}).")
            sys.exit(1)

        if not os.path.isfile(baseline_filename):
            logging.error(f"Baseline file does not exist ({baseline_filename}).")
            sys.exit(1)

        runtime_files = multiple_file_types(os.path.join(bench_directory, "runtime"), "*.log")

        baseline_log = parse_log_file(baseline_filename)

        for runtime_file in runtime_files:
            runtime_log = parse_log_file(runtime_file, baseline_log["runtime"])

            if not runtime_log:
                continue

            x86Histogram_file = runtime_file.replace("runtime", "x86Histogram").replace(".log", ".yml")

            if not os.path.isfile(x86Histogram_file):
                continue

            with open(x86Histogram_file) as fin:
                histogram = yl.safe_load(fin)

            if not histogram:
                continue

            histogram = update_histogram_from_keys(histogram, instructions_filename)
            histogram["tasklets"] = runtime_log["tasklets"]
            histogram["dpus"] = runtime_log["dpus"]  
            histogram["cos"] = runtime_log["cos"]
            histogram["param"] = runtime_log["param"]

            if target == "runtime":
                y = runtime_log["runtime"]
            elif target == "speedup":
                y = runtime_log["speedup"]
            else:
                y = (runtime_log["runtime"], runtime_log["speedup"])

            data.append({
                "x": histogram,
                "y": y,
                "info": {"benchmark": benchmark}}
            )

    return data
