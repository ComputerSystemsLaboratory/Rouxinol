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
import glob
import yaml
import numpy as np
import matplotlib.pyplot as plt
import matplotlib.colors as mcolors

from absl import app, flags

FLAGS = flags.FLAGS

flags.DEFINE_string(
    'data_directory', 
    default=None, 
    help='Directory containing YAML files.',
    short_name='d'
)

flags.DEFINE_list(
    'counters', 
    default=None, 
    help='List of counters to process (e.g., 0 1 4 8).',
    short_name='c'
)

flags.DEFINE_string(
    'output_directory', 
    default='plots', 
    help='Directory to save plots.',
    short_name='o'
)

flags.DEFINE_string(
    'plot_type', 
    default='pdf', 
    help='Type of plot image (png, jpg, etc.).',
    short_name='p'
)

flags.DEFINE_string(
    'plot_name', 
    default='plot', 
    help='Plot name.',
    short_name='n'
)

flags.DEFINE_string(
    'base_color', 
    default='slategrey', 
    help='Base color for boxplot (hex or color name).',
    short_name='b'
)  # default blue

flags.mark_flag_as_required("data_directory")
flags.mark_flag_as_required("counters")


def main(argv):
    os.makedirs(FLAGS.output_dir, exist_ok=True)

    counters_to_process = list(map(int, FLAGS.counters))
    # match files like matches_*.yml
    yaml_files = glob.glob(os.path.join(FLAGS.data_directory, 'matches_*.yml')) + \
                 glob.glob(os.path.join(FLAGS.data_directory, 'matches_*.yaml'))

    data_for_counters = {counter: [] for counter in counters_to_process}

    # Read YAML files
    for yaml_file in yaml_files:
        with open(yaml_file, 'r') as f:
            yaml_content = yaml.safe_load(f)
        if not yaml_content:
            continue
        for key_str, value_dict in yaml_content.items():
            try:
                key = int(key_str)
            except ValueError:
                continue
            if key in counters_to_process:
                counter_value = value_dict.get('counter')
                if counter_value is not None:
                    data_for_counters[key].append(counter_value)

    # Filter counters with data
    available_counters = [c for c in counters_to_process if len(data_for_counters[c]) > 0]
    if not available_counters:
        print("No data available for any counters. Exiting.")
        return

    # Prepare data
    boxplot_data = [data_for_counters[c] for c in available_counters]
    positions = range(1, len(available_counters) + 1)

    # Base colors with transparency
    fill_color = mcolors.to_rgba(FLAGS.base_color, alpha=0.5)  # inside fill
    line_color = mcolors.to_rgba(FLAGS.base_color, alpha=0.8)  # lines and outlines

    # Plot
    fig, ax = plt.subplots(figsize=(10, 6))
    bplots = ax.boxplot(
        boxplot_data,
        positions=positions,
        patch_artist=True,
        medianprops=dict(color=line_color, linewidth=2),
        showmeans=True,
        meanprops=dict(marker='o', markerfacecolor=line_color, markeredgecolor=line_color, markersize=8),
        showfliers=True
    )

    # Set all boxes facecolor
    for box in bplots['boxes']:
        box.set_facecolor(fill_color)
        box.set_linewidth(1.5)
        box.set_edgecolor(line_color)

    # Set median lines
    for median in bplots['medians']:
        median.set(color=line_color, linewidth=2)

    # Set outliers (fliers)
    for flier in bplots['fliers']:
        flier.set(markeredgecolor=line_color, markerfacecolor=line_color)

    # Set whiskers and caps
    for whisker in bplots['whiskers']:
        whisker.set(color=line_color, linewidth=1.8)
    for cap in bplots['caps']:
        cap.set(color=line_color, linewidth=1.8)

    # Set mean markers
    for mean in bplots['means']:
        mean.set(markerfacecolor=line_color, markeredgecolor=line_color)

    plt.xticks(positions, [str(c) for c in available_counters])
    ax.set_title('')
    ax.set_xlabel('')
    ax.set_ylabel('')
    ax.grid(False)

    plt.tight_layout()

    output_path = os.path.join(FLAGS.output_dir, f'{FLAGS.plot_name}.{FLAGS.plot_type}')
    plt.savefig(output_path)
    print(f"Plot saved to {output_path}")

if __name__ == '__main__':
    app.run(main)
