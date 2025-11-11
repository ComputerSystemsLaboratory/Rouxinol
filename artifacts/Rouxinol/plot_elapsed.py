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
import numpy as np  
import matplotlib.pyplot as plt  

from absl import app, flags, logging  

FLAGS = flags.FLAGS  

flags.DEFINE_string(
	'output_directory', 
	default=None, 
	help='Directory where the YAML files are located',
    short_name='o'
)  

flags.DEFINE_string(
	'suffix', 
	default=None, 
	help='Suffix to be used in the file names',
    short_name='s'
)  

flags.DEFINE_string(
	'plot_name', 
	default='elapsed', 
	help='Name of the plot file',
    short_name='p'
) 

flags.DEFINE_list(
	'flags', 
	default=None, 
	help='List of flags to process',
    short_name='f'
) 

flags.DEFINE_list(
	'representations', 
	default=None, 
	help='A list of representation to process',
    short_name='r'
)   

flags.mark_flag_as_required("output_directory")
flags.mark_flag_as_required("suffix")
flags.mark_flag_as_required("flags")
flags.mark_flag_as_required("representations")


def _load_yaml_data(file_path):  
    """  
    Load YAML data from the specified file path.  
    If the file doesn't exist, return an empty dictionary.  
    """  
    if os.path.exists(file_path):  
        with open(file_path, "r") as file:  
            return yaml.safe_load(file)  
    else:  
        return {}  

def create_statistics_dict(output_directory, representations, flags, suffix=None):  
	"""  
	Create a dictionary of statistics for the given representations and flags.  

	Args:  
	    output_directory (str): The directory where the YAML files are located.  
	    representations (list): The list of representations to process.  
	    flags (list): The list of flags to process.  

	Returns:  
	    dict: A dictionary of statistics, where the keys are the representations  
	          and the values are dictionaries with the flags as keys, and the  
	          "ir", "exe", and "rep" values as the corresponding values.  
	"""  
	statistics_dict = {} 
	
	for representation in representations:  
		statistics_dict[representation] = {}

		file_suffix = f"{representation}{suffix}" if suffix else f"{representation}"

		for flag in flags:  
			# Construct the file paths for the current representation and flag  
			ir_file = os.path.join(output_directory, flag, "statistics", f"elapsed_i_{file_suffix}.yml")  
			exe_file = os.path.join(output_directory, flag, "statistics", f"elapsed_e_{file_suffix}.yml")  
			rep_file = os.path.join(output_directory, flag, "statistics", f"elapsed_r_{file_suffix}.yml")  

			# Load the YAML data from the files  
			ir_data = _load_yaml_data(ir_file)  
			exe_data = _load_yaml_data(exe_file)  
			rep_data = _load_yaml_data(rep_file)  

			# Calculate the sums of the values in the YAML data
			ir_sum = sum([time for problem, programs in ir_data.items() for name, time in programs.items()])  
			exe_sum = sum([time for problem, programs in exe_data.items() for name, time in programs.items()])  
			rep_sum = sum([time for problem, programs in rep_data.items() for name, time in programs.items()]) 

			# Store the statistics in the statistics_dict  
			statistics_dict[representation][flag] = {  
				"ir": ir_sum,  
				"exe": exe_sum,  
				"rep": rep_sum  
			}
   
	return statistics_dict  

def save_statistics_dict(statistics_dict, output_directory):  
    """  
    Save the statistics_dict to a YAML file named "elapsed.yml" in the output_directory.  
    
    Args:  
        statistics_dict (dict): The dictionary of statistics to be saved.  
        output_directory (str): The directory where the YAML file will be saved.  
    """  
    output_file = os.path.join(output_directory, "statistics", "elapsed.yml")  
    with open(output_file, "w") as file:  
        yaml.dump(statistics_dict, file)  
    logging.info(f"Saved statistics dictionary to {output_file}")  

def create_bar_plot(statistics_dict, representations, flags, output_directory, plot_name):  
	"""  
	Create a bar plot with the statistics from the statistics_dict and save it as a PDF file.  

	Args:  
	    statistics_dict (dict): The dictionary of statistics.  
	    representations (list): The list of representations.  
	    flags (list): The list of flags.  
	    output_directory (str): The directory to save the plot.  
	    plot_name (str): The name of the plot file.  
	"""  
	# Create a list of labels for each bar (representation + flag)  
	labels = [  
		f"S-LLVM {'all' if flag == 'ollvm' else flag}" if representation == "llvmHistogram" else  
		f"S-x86 {'all' if flag == 'ollvm' else flag}" if representation == "x86Histogram" else  
		f"H-x86 {'all' if flag == 'ollvm' else flag}" if representation == "cfggrindHybridHistogram" else  
		f"D-x86 {'all' if flag == 'ollvm' else flag}" if representation == "cfggrindDynamicHistogram" else
		f"IR2Vec {'all' if flag == 'ollvm' else flag}" if representation == "ir2vec" else
		f"ProGraML {'all' if flag == 'ollvm' else flag}" if representation == "programl" else
		f"Inst2vec.P {'all' if flag == 'ollvm' else flag}" if representation == "inst2vecPreprocessed" else
		f"Inst2vec.E {'all' if flag == 'ollvm' else flag}" if representation == "inst2vecEmbeddings" else
		f"PCounter {'all' if flag == 'ollvm' else flag}" for representation in representations for flag in flags  
	]

	# Flatten the data for plotting  
	ir_values = []  
	exe_values = []  
	rep_values = []  
	for representation in representations:  
		for flag in flags:  
			ir_values.append(statistics_dict[representation][flag]["ir"])  
			exe_values.append(statistics_dict[representation][flag]["exe"])  
			rep_values.append(statistics_dict[representation][flag]["rep"])  
    
	# Create the x positions for the bars  
	x = np.arange(len(labels))  
	bar_width = 0.8  # Width of each bar  

	# Create the plot  
	fig, ax = plt.subplots(figsize=(12, 6))  

	# Plot the stacked bars
	colors = ['#1f77b4', '#4a90e2', '#add8e6']  # Dark blue, medium blue, light blue  
	ax.bar(x, ir_values, width=bar_width, label="Emit LLVM", color=colors[0])
	ax.bar(x, exe_values, width=bar_width, bottom=ir_values, label="Emit executable", color=colors[1])
	ax.bar(x, rep_values, width=bar_width, bottom=np.array(ir_values) + np.array(exe_values), label="Build histogram", color=colors[2])

	# Add labels and formatting  
	ax.set_xticks(x)  
	ax.set_xticklabels(labels, rotation=90)  
	ax.legend()  
	ax.set_ylabel("Elapsed time (sec)")  
	#ax.set_title("Statistics by Representation and Flag")  

	# Set y-axis to logarithmic scale  
	ax.set_yscale('log')

	# Save the plot  
	plot_path = os.path.join(output_directory, "statistics", f"{plot_name}.pdf")  
	plt.savefig(plot_path, format="pdf", bbox_inches="tight")  
	logging.info(f"Saved plot to {plot_path}")  

def main(argv):  
	del argv  # Unused.  
    
	output_file = os.path.join(FLAGS.output_directory, "statistics", "elapsed.yml")
	if os.path.isfile(output_file):
		with open(output_file, "r") as file:  
			statistics_dict = yaml.safe_load(file) 
	else:
		# Create the statistics_dict and save it to the YAML file  
		statistics_dict = create_statistics_dict(FLAGS.output_directory, FLAGS.representations, FLAGS.flags, FLAGS.suffix)  
		save_statistics_dict(statistics_dict, FLAGS.output_directory)  

	# Create the bar plot and save it to the output_directory
	create_bar_plot(statistics_dict, FLAGS.representations, FLAGS.flags, FLAGS.output_directory, FLAGS.plot_name)  

if __name__ == '__main__':  
    app.run(main)


