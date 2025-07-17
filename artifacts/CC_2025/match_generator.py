"""
CC 2025 Artifact
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
import yaml
import time
import random
import numpy as np

from absl import app, flags

from scipy.spatial.distance import cosine

FLAGS = flags.FLAGS


flags.DEFINE_string(
    'data_dir', 
    default=None, 
    help='Data directory',
    short_name='d'
)

flags.DEFINE_string(
    'output_directory', 
    default='./output', 
    help='Output directory',
    short_name='o'
)

flags.DEFINE_enum(
    'representation', 
    default='x86Histogram', 
    enum_values=[
        'cfggrindDynamicHistogram',
        'cfggrindHybridHistogram',
        'llvmHistogram',
        'performanceCounterHistogram',
        'x86Histogram',
        'ir2vec'
    ], 
    help='Representation to match',
    short_name='r'
)

flags.DEFINE_enum(
    'metric', 
    default='euclidean', 
    enum_values=[
        'euclidean',
        'manhattan',
        'cosine'
    ], 
    help='Distance',
    short_name='m'
)

flags.DEFINE_integer(
    'rounds', 
    default=32, 
    help='Number of rounds to perform',
    short_name='R'
)

flags.DEFINE_integer(
    'hops', 
    default=32, 
    help='Maximum number of hops to match',
    short_name='h'
)

flags.mark_flag_as_required("data_dir")


def load_yaml(filepath):
    with open(filepath, 'r') as f:
        data = yaml.safe_load(f)
    return data


def get_problems(data_dir):
    # Get all subdirectories at level 3, excluding 'stats'
    return [
        name
        for name in os.listdir(data_dir)
        if os.path.isdir(os.path.join(data_dir, name)) and name not in ['stats', 'statistics']
    ]


def gather_files_from_dir(dir_path):
    # Find all YAML files in a directory
    return [
        os.path.join(dir_path, filename)
        for filename in os.listdir(dir_path)
        if filename.endswith('.yml') or filename.endswith('.yaml')
    ]


def get_two_non_empty_yaml_files(file_list):
    first_non_empty = None
    second_non_empty = None
    count = 0

    for file_path in file_list:
        try:
            with open(file_path, 'r') as file:
                content = yaml.safe_load(file)
                if content:
                    if count == 0:
                        first_non_empty = file_path
                    elif count == 1:
                        second_non_empty = file_path
                        break  # Found two files, exit early
                    count += 1
        except Exception:
            continue

    return first_non_empty, second_non_empty


def select_files(data_dir, representation):
    set1 = {}
    set2 = {}

    problems = get_problems(data_dir)

    for problem in problems:
        samples = gather_files_from_dir(os.path.join(data_dir, problem, representation))
        random.shuffle(samples)

        first_non_empty, second_non_empty = get_two_non_empty_yaml_files(samples)
        filename = os.path.basename(first_non_empty)      # Extract filename with extension
        name_without_ext, _ = os.path.splitext(filename)  # Remove extension
        set1[problem] = name_without_ext
        
        filename = os.path.basename(second_non_empty)      # Extract filename with extension
        name_without_ext, _ = os.path.splitext(filename)  # Remove extension
        set2[problem] = name_without_ext

    return set1, set2


def compute_distance(emb1, emb2, metric, representation):
    if emb1 is None or emb2 is None:
        return None

    if representation != "ir2vec":
        # Get the union of keys from both dictionaries
        all_keys = set(emb1.keys()).union(set(emb2.keys()))
        
        # Create ordered lists of values based on the union of keys
        vector1 = [emb1.get(key, 0) for key in sorted(all_keys)]
        vector2 = [emb2.get(key, 0) for key in sorted(all_keys)]

        vector1 = np.array(vector1)
        vector2 = np.array(vector2)
    else:
        vector1 = np.array(emb1)
        vector2 = np.array(emb2)

    if metric == "euclidean":
        return float(np.linalg.norm(vector1 - vector2))
    elif metric == "manhattan":
        return float(np.sum(np.abs(vector1 - vector2)))
    elif metric == "cosine":
        epsilon = 1e-10
        vector1_norm = vector1 / (np.linalg.norm(vector1) + epsilon)
        vector2_norm = vector2 / (np.linalg.norm(vector2) + epsilon)
        return float(cosine(vector1, vector2))
    else:
        raise ValueError("Unknown metric")


def distance(set1, set2, data_dir, metric, representation, hops):
    results = {}
    matches = {}

    for hop in range(0, hops - 1):    
        matches[hop] = {'pairs': [], 'counter': 0}

    for problem1, sample1 in set1.items():
        results[problem1] = {}
        data = []
        histogram1 = load_yaml(os.path.join(data_dir, problem1, representation, f"{sample1}.yml"))
        for problem2, sample2 in set2.items():
            histogram2 = load_yaml(os.path.join(data_dir, problem2, representation, f"{sample2}.yml"))
            distance = compute_distance(histogram1, histogram2, metric, representation)

            results[problem1][problem2] = distance
            data.append((distance, problem1, problem2))

        data.sort()
        for hop in range(0, hops - 1):
            if data[0][1] == data[hop][2]:
                matches[hop]['pairs'].append([data[0][1], data[hop][2]])
                matches[hop]['counter'] += 1

    return results, matches


def main(argv):

    os.makedirs(FLAGS.output_dir, exist_ok=True)
    for r in range(FLAGS.rounds):
        set1, set2 = select_files(FLAGS.data_dir, FLAGS.representation)
        results, matches = distance(set1, set2, FLAGS.data_dir, FLAGS.metric, FLAGS.representation, FLAGS.hops)

        with open(os.path.join(FLAGS.output_dir, f"results_{r}.yml"), "w") as fout:
            yaml.dump(results, fout)
        
        with open(os.path.join(FLAGS.output_dir, f"matches_{r}.yml"), "w") as fout:
            yaml.dump(matches, fout)



if __name__ == '__main__':
    app.run(main)