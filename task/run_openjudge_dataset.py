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
import glob as gl
import yaml as yl
import pandas as pd

from tqdm import tqdm
from absl import app, flags, logging

from multiprocessing import Pool, Manager

from rouxinol.environment import HostEnvironment

FLAGS = flags.FLAGS

def run_program(args):
    exec_filename, config, outputs = args
    
    # Environment
    env = HostEnvironment()

    # Problem name
    with open(config["stdin"], 'r') as fin:
        output = env.run(
                    exec_filename,
                    stdin=fin,
                    times=config["times"],
                    timeout=config["timeout"],
                    return_output=True
        )
        outputs.setdefault(exec_filename, output)


def main(argv):
    """Source -> LLVM."""
    del argv

    problems = gl.glob(f"{FLAGS.dataset_directory}/p*")
    program_list = {}
    for problem in problems:
        program_list[problem] = [os.path.join(FLAGS.dataset_directory, problem, FLAGS.subdir, "exec", exec_) for exec_ in os.listdir(os.path.join(FLAGS.dataset_directory, problem, FLAGS.subdir, "exec"))]

    # Process programs in parallel
    manager = Manager()
    outputs = manager.dict()

    task_args = [(program_info, {"stdin":os.path.join(problem, "info", "input.txt"), "times": FLAGS.times, "timeout": FLAGS.timeout}, outputs) for problem, programs in program_list.items() for program_info in programs]
    with Pool(processes=FLAGS.workers) as pool:
        list(tqdm(pool.imap_unordered(run_program, task_args), total=len(task_args)))

    os.makedirs(os.path.join(FLAGS.dataset_directory, "stats"), exist_ok=True)
    with open(os.path.join(FLAGS.dataset_directory, "stats", f"runtime_{FLAGS.subdir}.yml"), "w") as fout:
        yl.dump(dict(outputs), fout)


# Execute
if __name__ == "__main__":
    # app
    flags.DEFINE_string(
        "dataset_directory",
        None,
        "Dataset directory"
    )
    flags.DEFINE_string(
        "subdir",
        None,
        "The directory where to read from (dataset_directory/SUBDIR)."
    )    
    flags.DEFINE_integer(
        "timeout",
        20,
        "Timeout in seconds"
    )
    flags.DEFINE_integer(
        "times",
        1,
        "Times to run the program"
    )
    flags.DEFINE_integer(
        "workers", 
        10, 
        "Number of worker processes."
    )
    flags.mark_flag_as_required(
        "dataset_directory"
    )
    flags.mark_flag_as_required(
        "subdir"
    )

    app.run(main)
