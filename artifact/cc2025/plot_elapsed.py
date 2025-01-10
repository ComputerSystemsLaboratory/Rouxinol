import os  
import yaml  
import numpy as np  
import matplotlib.pyplot as plt  
from absl import app, flags, logging  

FLAGS = flags.FLAGS  

flags.DEFINE_string('data_directory', None, 'Directory where the YAML files are located')  
flags.DEFINE_list('representations', None, 'List of representations to process')  
flags.DEFINE_list('flags', None, 'List of flags to process')  
flags.DEFINE_string('suffix', None, 'Suffix to be used in the file names')  
flags.DEFINE_string('plot_name', 'stats_plot.pdf', 'Name of the plot file')  


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

def create_stats_dict(data_directory, representations, flags):  
	"""  
	Create a dictionary of statistics for the given representations and flags.  

	Args:  
	    data_directory (str): The directory where the YAML files are located.  
	    representations (list): The list of representations to process.  
	    flags (list): The list of flags to process.  

	Returns:  
	    dict: A dictionary of statistics, where the keys are the representations  
	          and the values are dictionaries with the flags as keys, and the  
	          "ir", "exe", and "rep" values as the corresponding values.  
	"""  
	stats_dict = {}  
	stats_dict["cfggrindHistogram_static"] = {}

	for representation in representations:  
		stats_dict[representation] = {}

		for flag in flags:  
			# Construct the file paths for the current representation and flag  
			ir_file = os.path.join(data_directory, flag, "stats", f"ir_elapsed_{representation}_{FLAGS.suffix}.yml")  
			exe_file = os.path.join(data_directory, flag, "stats", f"exe_elapsed_{representation}_{FLAGS.suffix}.yml")  
			rep_file = os.path.join(data_directory, flag, "stats", f"rep_elapsed_{representation}_{FLAGS.suffix}.yml")  

			# Load the YAML data from the files  
			ir_data = _load_yaml_data(ir_file)  
			exe_data = _load_yaml_data(exe_file)  
			rep_data = _load_yaml_data(rep_file)  

			# Calculate the sums of the values in the YAML data  
			ir_sum = sum(ir_data.values())  
			exe_sum = sum(exe_data.values())  
			rep_sum = sum(rep_data.values())  

			# Store the statistics in the stats_dict  
			stats_dict[representation][flag] = {  
				"ir": ir_sum,  
				"exe": exe_sum,  
				"rep": rep_sum  
			}

			# If the current representation is "cfggrindHistogram", create an additional entry  
			if representation == "cfggrindHistogram":  
				stats_dict["cfggrindHistogram_static"][flag] = {  
					"ir": ir_sum,  
					"exe": exe_sum,  
					"rep": rep_sum  
				}  

		# Set the "ir" and "exe" values for all representations other than "llvmHistogram"  
		# to the corresponding values from the "llvmHistogram" entry  
		for representation, flags in stats_dict.items():
			for flag in flags.keys(): 
				if representation != "llvmHistogram":  
					stats_dict[representation][flag]["ir"] = stats_dict["llvmHistogram"][flag]["ir"]  
					stats_dict[representation][flag]["exe"] = stats_dict["llvmHistogram"][flag]["exe"]  
    
	return stats_dict  

def save_stats_dict(stats_dict, data_directory):  
    """  
    Save the stats_dict to a YAML file named "elapsed.yml" in the data_directory.  
    
    Args:  
        stats_dict (dict): The dictionary of statistics to be saved.  
        data_directory (str): The directory where the YAML file will be saved.  
    """  
    output_file = os.path.join(data_directory, "elapsed.yml")  
    with open(output_file, "w") as file:  
        yaml.dump(stats_dict, file)  
    logging.info(f"Saved stats dictionary to {output_file}")  

def create_bar_plot(stats_dict, representations, flags, data_directory, plot_name):  
	"""  
	Create a bar plot with the statistics from the stats_dict and save it as a PDF file.  

	Args:  
	    stats_dict (dict): The dictionary of statistics.  
	    representations (list): The list of representations.  
	    flags (list): The list of flags.  
	    data_directory (str): The directory to save the plot.  
	    plot_name (str): The name of the plot file.  
	"""  
	# Create a list of labels for each bar (representation + flag)  
	labels = [  
		f"S-LLVM {'all' if flag == 'ollvm' else flag}" if representation == "llvmHistogram" else  
		f"S-x86 {'all' if flag == 'ollvm' else flag}" if representation == "x86Histogram" else  
		f"H-x86 {'all' if flag == 'ollvm' else flag}" if representation == "cfggrindHistogram_static" else  
		f"D-x86 {'all' if flag == 'ollvm' else flag}" for representation in representations for flag in flags  
	]  
    
	# Flatten the data for plotting  
	ir_values = []  
	exe_values = []  
	rep_values = []  
	for representation in representations:  
		for flag in flags:  
			ir_values.append(stats_dict[representation][flag]["ir"])  
			exe_values.append(stats_dict[representation][flag]["exe"])  
			rep_values.append(stats_dict[representation][flag]["rep"])  
    
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
	plot_path = os.path.join(data_directory, "stats", plot_name)  
	plt.savefig(plot_path, format="pdf", bbox_inches="tight")  
	logging.info(f"Saved plot to {plot_path}")  

def main(argv):  
	del argv  # Unused.  
    
    # Check if all required flags are provided  
	if FLAGS.data_directory is None or FLAGS.representations is None or FLAGS.flags is None or FLAGS.suffix is None:  
		logging.error("All required flags must be provided.")  
		return  
    
	output_file = os.path.join(FLAGS.data_directory, "elapsed.yml")
	if os.path.isfile(output_file) :

		with open(output_file, "r") as file:  
			stats_dict = yaml.safe_load(file) 
	else:
		# Create the stats_dict and save it to the YAML file  
		stats_dict = create_stats_dict(FLAGS.data_directory, FLAGS.representations, FLAGS.flags)  
		save_stats_dict(stats_dict, FLAGS.data_directory)  

	# Create the bar plot and save it to the data_directory  
	create_bar_plot(stats_dict, ["llvmHistogram", "x86Histogram", "cfggrindHistogram", "cfggrindHistogram_static"], FLAGS.flags, FLAGS.data_directory, FLAGS.plot_name)  

if __name__ == '__main__':  
    app.run(main)


