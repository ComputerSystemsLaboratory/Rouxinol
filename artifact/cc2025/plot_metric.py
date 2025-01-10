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
import yaml
import numpy as np  
import seaborn as sns 
import matplotlib.pyplot as plt  

from absl import app, flags 

FLAGS = flags.FLAGS  

flags.DEFINE_string('stats_directory', None, 'The directory where the YAML files are located and where the result will be saved.')  
flags.DEFINE_string('metric', None, 'The name of the metric to load from the YAML files (e.g., "acc", "precision", "f1", "recall").')  
flags.DEFINE_list('representations', None, 'A list of representation names.')  
flags.DEFINE_list('train_test', None, 'A list of train/test split names (e.g., ["O0_O0, O0_fla"]).')  
flags.DEFINE_integer('num_files', None, 'The number of files to check for each representation and train/test split.')  
flags.DEFINE_string('prefix', None, 'The prefix for the filename.')  
flags.DEFINE_string('suffix', None, 'The suffix for the filename.')  
flags.DEFINE_string('plot_name', None, 'The name of the PDF file to save the plot.')


def load_and_save_statistics(stats_directory, metric, representations, train_test, num_files, prefix, suffix):  
    """  
    Load specified statistics from YAML files, store the results in a YAML file, and return the statistics dictionary.  

    Parameters:  
    - stats_directory (str): The directory where the YAML files are located and where the result will be saved.  
    - metric (str): The name of the metric to load from the YAML files (e.g., "acc", "precision", "f1", "recall").  
    - representations (list of str): A list of representation names.  
    - train_test (list of str): A list of train/test split names (e.g., ["O0_O0, O0_fla"]).   
    - num_files (int): The number of files to check for each representation and train/test split.  
    - prefix (str): The prefix for the filename.  
    - suffix (str): The suffix for the filename.  

    Returns:  
    - dict: A dictionary where the outer keys are representations, the inner keys are train/test splits, and the values are lists of the specified statistics.  
    """  
    # Initialize an empty dictionary to store statistics for each representation and train/test split  
    statistics = {}  
    
    # Iterate over each representation in the provided list  
    for representation in representations:  
        # Initialize an empty dictionary to hold statistics for the current representation  
        statistics[representation] = {}  
        
        # Iterate over the train/test splits  
        for split in train_test:  
            # Initialize an empty list to hold statistics for the current representation and split  
            statistics[representation][split] = []  
            
            # Iterate over the range of file indices from 0 to num_files - 1  
            for index in range(num_files):  
                # Construct the filename using the specified pattern and directory  
                filename = os.path.join(stats_directory, f"{prefix}_{representation}_{split}_{suffix}_{index}.yml")  
                try:  
                    # Open the YAML file for reading  
                    with open(filename, 'r') as file:  
                        # Load the content of the YAML file  
                        data = yaml.safe_load(file)  
                        # Retrieve the specified statistic value from the loaded data  
                        stat_value = data.get(metric, None)  
                        # Append the statistic value to the list for the current representation and split  
                        if stat_value is not None:  
                            statistics[representation][split].append(stat_value)  
                except FileNotFoundError:  
                    # Handle the case where the file does not exist  
                    print(f"File {filename} not found.")  
                except Exception as e:  
                    # Handle any other exceptions that may occur  
                    print(f"An error occurred while reading {filename}: {e}")  
    
    # Save the statistics dictionary to a YAML file  
    result_filename = os.path.join(stats_directory, f"statistic_{metric}.yml")  
    with open(result_filename, 'w') as file:  
        yaml.dump(statistics, file)  
    
    # Return the statistics dictionary  
    return statistics


def plot_statistics(statistics, metric, stats_directory, train_test, plot_name):  
    """  
    Create a violin plot for the provided statistics and train/test splits, and save the plot to a PDF file.  

    Parameters:  
    - statistics (dict): A dictionary where the outer keys are representations, the inner keys are train/test splits, and the values are lists of the specified statistics.  
    - stats_directory (str): The directory where the YAML files are located and where the result will be saved. 
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
        f"H-x86 {'all' if split.endswith('ollvm') else split.split('_')[1]}" if representation == "cfggrindHistogram_static" else  
        f"D-x86 {'all' if split.endswith('ollvm') else split.split('_')[1]}" if representation == "cfggrindHistogram" else  
        f"IR2Vec {'all' if split.endswith('ollvm') else split.split('_')[1]}" if representation == "ir2vec" else  
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
    plot_path = os.path.join(stats_directory, f"{plot_name}.pdf")  
    plt.savefig(plot_path, format="pdf", bbox_inches='tight')  


def main(argv):  
    del argv  # Unused.  

    # Load and save the statistics  
    statistics = load_and_save_statistics(  
        FLAGS.stats_directory,  
        FLAGS.metric,  
        FLAGS.representations,  
        FLAGS.train_test,  
        FLAGS.num_files,  
        FLAGS.prefix,  
        FLAGS.suffix  
    )  

    # Create the plot  
    plot_statistics(  
        statistics,
        FLAGS.metric, 
        FLAGS.stats_directory,
        FLAGS.train_test,  
        FLAGS.plot_name  
    )  

if __name__ == '__main__':  
    app.run(main)
