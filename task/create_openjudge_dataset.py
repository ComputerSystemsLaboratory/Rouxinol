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
import shutil
import glob as gl
import yaml as yl
import pandas as pd

from tqdm import tqdm
from absl import app, flags, logging

from multiprocessing import Pool, Manager

from rouxinol.dataset import OpenJudge

FLAGS = flags.FLAGS


def process_program(args):
    """
    Process a single program.

    Args:
        args (tuple): Tuple containing program filename and target directory.
    """
    source, destination = args
    os.system(f"cp -f {source} {destination}")

def create_openjudge(
    content_dir,
    problem_list,
    dataset_directory
):
    for problem in problem_list:
        os.makedirs(os.path.join(dataset_directory, problem, "sample"), exist_ok=True)
        os.makedirs(os.path.join(dataset_directory, problem, "info"), exist_ok=True)
        src = os.path.join(content_dir, problem, "info")
        dst = os.path.join(dataset_directory, problem)
        os.system(f"cp -rf {src} {dst}")

def main(argv):
    del argv

    if FLAGS.dataset == "OpenJudge":
        dataset = OpenJudge()

    if len(FLAGS.languages) != len(FLAGS.num_samples):
        logging.error("Languages != num_samples.")
        sys.exit(1)

    languages = {FLAGS.languages[i]: int(FLAGS.num_samples[i]) for i in range(len(FLAGS.languages))}
    data = dataset.select_problems_and_samples(
                    num_problems=FLAGS.num_problems,
                    languages=languages
                )

    if FLAGS.dataset == "OpenJudge":
        create_openjudge(
            dataset.get_content_dir(),
            list(data.keys()),
            FLAGS.dataset_directory
        )

    task_args = [(program, os.path.join(FLAGS.dataset_directory, problem, "sample")) for problem, program_list in data.items() for program in program_list]

    # Process programs in parallel
    with Pool(processes=FLAGS.workers) as pool:
        list(tqdm(pool.imap_unordered(process_program, task_args), total=len(task_args)))


# Execute
if __name__ == "__main__":
    # app
    flags.DEFINE_enum(
        "dataset",
        "OpenJudge",
        ["OpenJudge"],
        "Dataset name"
    )
    flags.DEFINE_string(
        "dataset_directory",
        None,
        "Dataset directory"
    )
    flags.DEFINE_integer(
        "num_problems",
        100,
        "Number of problems"
    )
    flags.DEFINE_integer(
        "workers", 
        10, 
        "Number of worker processes."
    )
    flags.DEFINE_list(
        "languages",
        ["C"],
        "Programming languages"
    )
    flags.DEFINE_list(
        "num_samples",
        [500],
        "Number of samples per language"
    )
    flags.mark_flag_as_required(
        "dataset_directory"
    )

    app.run(main)
