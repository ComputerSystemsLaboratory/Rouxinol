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
from absl import app, flags, logging  

FLAGS = flags.FLAGS  

flags.DEFINE_string(
	'data_directory', 
	None, 
	'Directory where the YAML files are located',
    short_name='d'
)

flags.DEFINE_string(
	'samples', 
	None, 
	'Samples filename',
    short_name='s'
)

flags.mark_flag_as_required("data_directory")
flags.mark_flag_as_required("samples")


def get_subdirectories(directory, exclude_dir=''):  
	"""  
	Returns a list of subdirectories in the specified directory,  
	excluding the specified directory.  

	Parameters:  
	directory (str): The path to the directory to search.  
	exclude_dir (str): The name of the directory to exclude.  

	Returns:  
	list: A list of subdirectory paths.  
	"""  
	subdirectories = []  
	for entry in os.listdir(directory):  
		full_path = os.path.join(directory, entry)  
		if os.path.isdir(full_path) and entry != exclude_dir:  
			subdirectories.append(full_path)  
	return subdirectories  


def replace_extension(path, typ):  
	"""
	Returns the basename of the given path with its extension replaced by 'll'.  

	Parameters:  
	path (str): The file path.  
	type (str): The file type.

	Returns:  
	str: The basename with the new extension.  
	"""  
	# Get the basename of the path  
	basename = os.path.basename(path)  
	# Split the basename into name and extension  
	name, _ = os.path.splitext(basename)
	# Replace the extension
	if typ == "exec":  
		new_basename = f"{name}"
	elif typ == "ir":  
		new_basename = f"{name}.ll"
	elif "Histogram" in typ:  
		new_basename = f"{name}.yml"

	return new_basename  


def main(argv):  
	del argv  # Unused.  
        
	samples_file = os.path.join(FLAGS.data_directory, "stats", FLAGS.samples)
	with open(samples_file, "r") as file:  
		samples = yaml.safe_load(file)

	result_dict = {}
	for problem, programs in samples.items():
		result_dict[problem] = {}
		directories = get_subdirectories(os.path.join(FLAGS.data_directory, problem))
		for directory in directories:
			dir_ = os.path.basename(directory)
			result_dict[problem][dir_] = {}
			for i, program in enumerate(programs):
				program_name = replace_extension(program, dir_)
				exist = os.path.isfile(os.path.join(FLAGS.data_directory, problem, dir_, program_name))
				result_dict[problem][dir_][program_name] = exist


	result_filename = os.path.join(FLAGS.data_directory, "stats", "verification.yml")
	with open(result_filename, "w") as file:  
		yaml.dump(result_dict, file)


if __name__ == '__main__':  
    app.run(main)





