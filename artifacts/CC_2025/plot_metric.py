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
import glob
import numpy as np  
import seaborn as sns 
import matplotlib.pyplot as plt  

from absl import app, flags, logging  

FLAGS = flags.FLAGS  

flags.DEFINE_string(
    'statistics_directory', 
    default=None, 
    help='The directory where the YAML files are located and where the result will be saved.',
    short_name='d'
)  

flags.DEFINE_string(
    'metric', 
    default='acc', 
    help='The name of the metric to load from the YAML files (e.g., "acc", "precision", "f1", "recall").',
    short_name='m'
)  

flags.DEFINE_list(
    'representations', 
    default=None, 
    help='A list of representation names.',
    short_name='r'
)  

flags.DEFINE_list(
    'train_test',
    default=None, 
    help='A list of train/test split names (e.g., ["O0_O0, O0_fla"]).',
    short_name='t'
)  

flags.DEFINE_integer(
    'num_files', 
    default=None, 
    help='The number of files to check for each representation and train/test split.',
    short_name='f'
)  

flags.DEFINE_string(
    'prefix', 
    default='stats', 
    help='The prefix for the filename.',
    short_name='p'
)  

flags.DEFINE_string(
    'suffix', 
    default=None, 
    help='The suffix for the filename.',
    short_name='s'
)  

flags.DEFINE_string(
    'plot_name', 
    default=None, 
    help='The name of the PDF file to save the plot.',
    short_name='n'
)

flags.mark_flag_as_required("statistics_directory")
flags.mark_flag_as_required("plot_name")
flags.mark_flag_as_required("representations")
flags.mark_flag_as_required("train_test")



def load_and_save_statistics(  
    statistics_directory,  
    metric,  
    representations,  
    train_test,  
    prefix,  
    suffix=None,  
    num_files=None
):  
    """  
    Load specified statistics from YAML files, store the results in a YAML file,  
    and return the statistics dictionary.  

    Parameters:  
    - statistics_directory (str): The directory where the YAML files are located and  
      where the result will be saved.  
    - metric (str): The name of the metric to load from the YAML files  
      (e.g., "acc", "precision", "f1", "recall").  
    - representations (list of str): A list of representation names.  
    - train_test (list of str): A list of train/test split names  
      (e.g., ["O0_O0", "O0_fla"]).  
    - num_files (int or None): If None, load *all* matching files (default).  
      Otherwise, load only a specified number of files per representation/split.  
    - prefix (str): The prefix for the filename.  
    - suffix (str): The suffix for the filename.  

    Returns:  
    - dict: A dictionary where the outer keys are representations,  
      the inner keys are train/test splits, and the values are lists  
      of the specified statistics.  
    """  

    statistics = {}  

    for representation in representations:  
        statistics[representation] = {}  

        for split in train_test:  
            statistics[representation][split] = []  

            # 1) If num_files is None, load all matching YAML files using a wildcard  
            if num_files is None:  
                if suffix:  
                    pattern = os.path.join(  
                        statistics_directory,  
                        f"{prefix}_{representation}_{split}_{suffix}_*.yml"  
                    )  
                else:  
                    pattern = os.path.join(  
                        statistics_directory,  
                        f"{prefix}_{representation}_{split}_*.yml"  
                    )  

                matching_files = glob.glob(pattern)  

                for filename in matching_files:  
                    try:  
                        with open(filename, 'r') as file:  
                            data = yaml.safe_load(file)  
                            stat_value = data.get(metric, None)  
                            if stat_value is not None:  
                                statistics[representation][split].append(stat_value)  
                    except FileNotFoundError:  
                        print(f"File {filename} not found.")  
                    except Exception as e:  
                        print(f"An error occurred while reading {filename}: {e}")  

            # 2) If num_files is an integer, load exactly those files (original behavior)  
            else:  
                for index in range(num_files):  
                    if suffix:  
                        filename = os.path.join(  
                            statistics_directory,  
                            f"{prefix}_{representation}_{split}_{suffix}_{index}.yml"  
                        )  
                    else:  
                        filename = os.path.join(  
                            statistics_directory,  
                            f"{prefix}_{representation}_{split}_{index}.yml"  
                        )  
                    try:  
                        with open(filename, 'r') as file:  
                            data = yaml.safe_load(file)  
                            stat_value = data.get(metric, None)  
                            if stat_value is not None:  
                                statistics[representation][split].append(stat_value)  
                    except FileNotFoundError:  
                        print(f"File {filename} not found.")  
                    except Exception as e:  
                        print(f"An error occurred while reading {filename}: {e}")  

    # Save the statistics dictionary to a YAML file  
    result_filename = os.path.join(statistics_directory, f"statistic_{metric}.yml")  
    with open(result_filename, 'w') as file:  
        yaml.dump(statistics, file)  

    return statistics


def plot_statistics(statistics, metric, statistics_directory, train_test, plot_name):  
    """  
    Create a violin plot for the provided statistics and train/test splits, and save the plot to a PDF file.  

    Parameters:  
    - statistics (dict): A dictionary where the outer keys are representations, the inner keys are train/test splits, and the values are lists of the specified statistics.  
    - statistics_directory (str): The directory where the YAML files are located and where the result will be saved. 
    - train_test (list of str): A list of train/test split names (e.g., ["train", "test"]).  
    - plot_name (str): The name of the PDF file to save the plot.  
    """  
    # Set up the figure and axis  
    fig, ax = plt.subplots(figsize=(12, 6))  

    # Define a color palette for the different train/test splits  
    colors = sns.color_palette("hls", len(train_test))  

    # Iterate over the representations  
    for i, representation in enumerate(statistics):  
        # Iterate over the train/test splits  
        for j, split in enumerate(train_test):  
            # Collect the statistics for the current representation and split  
            split_stats = statistics[representation][split]  

            # Create the violin plot for the current representation and split 
            parts = ax.violinplot(split_stats, positions=[i * len(train_test) + j], widths=0.8, showmedians=True, showextrema=False)  
            
            # Set the color of the violin plot  
            for pc in parts['bodies']:  
                pc.set_facecolor(colors[j])  
                pc.set_edgecolor('black')  
            parts['cmedians'].set_color('black')  

    # Set the x-axis ticks and labels
    ax.set_xticks(np.arange(0, len(statistics) * len(train_test)))  
    ax.set_xticklabels([  
        f"S-LLVM {'all' if split.endswith('ollvm') else split.split('_')[1]}" if representation == "llvmHistogram" else  
        f"S-x86 {'all' if split.endswith('ollvm') else split.split('_')[1]}" if representation == "x86Histogram" else  
        f"H-x86 {'all' if split.endswith('ollvm') else split.split('_')[1]}" if representation == "cfggrindHybridHistogram" else  
        f"D-x86 {'all' if split.endswith('ollvm') else split.split('_')[1]}" if representation == "cfggrindDynamicHistogram" else  
        f"PCounter {'all' if split.endswith('ollvm') else split.split('_')[1]}" if representation == "performanceCounterHistogram" else
        f"IR2Vec {'all' if split.endswith('ollvm') else split.split('_')[1]}" if representation == "ir2vec" else  
        f"Inst2Vec.P {'all' if split.endswith('ollvm') else split.split('_')[1]}" if representation == "inst2vecPreprocessed" else  
        f"Inst2Vec.E {'all' if split.endswith('ollvm') else split.split('_')[1]}" if representation == "inst2vecEmbeddings" else  
        f"ProGraML {'all' if split.endswith('ollvm') else split.split('_')[1]}" for representation in statistics for split in train_test  
    ], rotation=90) 

    # Set the y-axis title
    metric_name = {
            "acc": "Accuracy",
            "f1": "F1 score",
            "precision": "Precision",
            "recall": "Recall"
    } 
    ax.set_ylabel(metric_name[metric])

    # Save the plot to a PDF file  
    plot_path = os.path.join(statistics_directory, f"{plot_name}.pdf")  
    plt.savefig(plot_path, format="pdf", bbox_inches='tight')  
    logging.info(f"Saved plot to {plot_path}") 


def main(argv):  
    del argv  # Unused.  

    # Load and save the statistics  
    statistics = load_and_save_statistics(  
        FLAGS.statistics_directory,  
        FLAGS.metric,  
        FLAGS.representations,  
        FLAGS.train_test,  
        FLAGS.prefix,  
        FLAGS.suffix,
        FLAGS.num_files
    )  

    # Create the plot  
    plot_statistics(  
        statistics,
        FLAGS.metric, 
        FLAGS.statistics_directory,
        FLAGS.train_test,  
        FLAGS.plot_name  
    )  

if __name__ == '__main__':  
    app.run(main)
