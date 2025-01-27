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
import glob
import time
import shlex
import random
import resource
import subprocess

import yaml as yl
import numpy as np
import pandas as pd
import itertools as it

from datetime import datetime  
from collections import defaultdict  


def output_filename(
    filename,
    output_directory,
    new_type
):
    """Create the out filename."""
    basename = os.path.basename(filename)
    idx = basename.rfind(".")
    basename, file_type = basename[:idx], basename[idx+1:]
    out_filename = os.path.join(
                        output_directory,
                        f"{basename}{new_type}"
                    ) if output_directory else filename.replace(f".{file_type}", f"{new_type}")
    file_type = "cxx" if file_type != "c" else "c"
    return basename, file_type, out_filename


def execute_command_line(
    cmdline,
    input_data,
    enable_stdin,
    enable_shell,
    timeout
):
    """Validate the program execution.

    :param cmdline: The command line.

    :param input_data: The dataset to run the program.

    :param use_stdin: If True use stdin.

    :param timeout: The timeout in seconds.

    :return: (stdout, stderr) if True otherwise (False, False).
    """

    """Execute the command."""
    cmdline = cmdline if enable_stdin else f"{cmdline} {input_data}"
    start = time.time()
    proc = subprocess.Popen(
                        cmdline,
                        stdin=subprocess.PIPE,
                        stdout=subprocess.PIPE,
                        stderr=subprocess.PIPE,
                        shell=enable_shell
                    )
    try:
        if enable_stdin:
            outs, errs = proc.communicate(
                                input=input_data,
                                timeout=timeout
                            )
        else:
            outs, errs = proc.communicate(
                                timeout=timeout
                            )
        elapsed = time.time() - start
        return outs, errs, elapsed
    except subprocess.TimeoutExpired:
        proc.kill()
        return None, None, None
    except Exception:
        return None, None, None


def run_command_unix(command, input_=None, stdin=None, stdout=None, stderr=None, return_output=True, timeout=None):
    """
    Executes a system command with runtime statistics, exception handling, and timeout.

    :param command: Command to execute (list or string).
    :param input_: String data to be passed to the command.
    :param stdin: String data to be passed to the command's stdin.  
    :param stdout: Output.  
    :param return_output: Boolean indicating whether to return stdout and stderr.
    :param timeout: Timeout in seconds. If None, no timeout is applied.
    :return: Dictionary with runtime info, outputs (if requested), and return code.
    """
    if isinstance(command, str):
        command = shlex.split(command)

    # Initialize the output dictionary
    output = {
        'stdout': '',
        'stderr': '',
        'returncode': None,
        'runtime': {
            'elapsed_time': None,
            'user_time': None,
            'system_time': None,
            'cpu_time': None
        },
        'error': None
    }

    try:
        # Start timing
        start_time = time.perf_counter()
        start_usage = resource.getrusage(resource.RUSAGE_CHILDREN)

        # Execute the command with timeout
        result = subprocess.run(
            command,
            input=input_,
            stdin=stdin,
            stdout=stdout if return_output else subprocess.DEVNULL,
            stderr=stderr if return_output else subprocess.DEVNULL,
            capture_output=return_output,
            text=True,
            timeout=timeout
        )

        # End timing
        end_time = time.perf_counter()
        end_usage = resource.getrusage(resource.RUSAGE_CHILDREN)

        # Calculate the time differences
        user_time = end_usage.ru_utime - start_usage.ru_utime
        system_time = end_usage.ru_stime - start_usage.ru_stime
        cpu_time = user_time + system_time

        # Update runtime info
        output['runtime']['elapsed_time'] = end_time - start_time  # Wall-clock time
        output['runtime']['user_time'] = user_time                # Time in user mode
        output['runtime']['system_time'] = system_time            # Time in system mode
        output['runtime']['cpu_time'] = cpu_time                  # Total CPU time

        # Update return code and outputs
        output['returncode'] = result.returncode
        if return_output:
            output['stdout'] = result.stdout
            output['stderr'] = result.stderr

    except subprocess.TimeoutExpired as e:
        # Handle the timeout exception
        output['error'] = f'Command timed out after {timeout} seconds'
        output['returncode'] = -1  # Custom return code for timeout
        if return_output:
            # Partial output may be available
            output['stdout'] = e.stdout if e.stdout else ''
            output['stderr'] = e.stderr if e.stderr else ''
    except subprocess.CalledProcessError as e:
        # Handle non-zero exit codes if check=True is used
        output['error'] = f'Command failed with return code {e.returncode}'
        output['returncode'] = e.returncode
        if return_output:
            output['stdout'] = e.stdout if e.stdout else ''
            output['stderr'] = e.stderr if e.stderr else ''
    except Exception as e:
        # Handle other exceptions
        output['error'] = str(e)
        output['returncode'] = -1

    return output


def none_output():
    output = {
        'stdout': '',
        'stderr': '',
        'returncode': 0,
        'runtime': {
            'elapsed_time': 0.0,
            'user_time': 0.0,
            'system_time': 0.0,
            'cpu_time': 0.0
        },
        'error': None
    }
    return output


def multiple_file_types(
    dir_path,
    *patterns
):
    """Read the filenames.

    :param dir_path: The directory.

    :param patterns: A list of file extensions.

    :return: A list of files with specific extensions (patterns).
    """
    files = it.chain.from_iterable(glob.iglob(os.path.join(dir_path, pattern)) for pattern in patterns)
    _, filenames = it.tee(files)
    return list(filenames)


def create_timestamped_directory(directory_path):  
    # Get the current date and time  
    current_time = datetime.now()  
    # Format the timestamp  
    timestamp = current_time.strftime("%d.%m.%Y_%H.%M.%S")  
    # Create the full path for the new directory  
    new_directory_path = os.path.join(directory_path, timestamp)  
    # Create the new directory  
    os.makedirs(new_directory_path, exist_ok=True)  
    return new_directory_path  


def get_next_filename(base_filename, extension):  
    """  
    Given a base filename, returns the next available filename with an index.  
    If no such file exists, it starts with base_filename0.  

    Parameters:  
        base_filename (str): The base name of the file (without index).  
        extension (str): The extension of the file. 
    Returns:  
        str: The next available filename with an index.  
    """  
    index = 0  
    while True:  
        # Construct the filename with the current index  
        candidate = f"{base_filename}_{index}.{extension}"
        # Check if the file exists  
        if not os.path.exists(candidate):  
            return candidate  
        # Increment the index and try again  
        index += 1


def create_string(a, b):  
    """  
    Given two lists a and b, returns a string formatted as "x.y_x.y_x.y",  
    where x and y are corresponding elements from a and b, converted to strings.  

    Parameters:  
        a (list): A list of integers.  
        b (list): A list of integers.  

    Returns:  
        str: A formatted string based on the elements of a and b.  
    """  
    # Create a list to hold the formatted pairs  
    formatted_pairs = []  
    
    # Iterate over the elements of both lists  
    for x, y in zip(a, b):  
        # Convert x and y to strings and format them as "x.y"
        formatted_pairs.append(f"{str(x)}_{str(y)}")  
    
    # Join the formatted pairs with an underscore  
    c = "_".join(formatted_pairs)  
    
    return c  


def transform_data_with_dict(data):  
    """  
    Transforms the input data into two DataFrames: one for X and one for y.  

    Parameters:  
        data (list): A list of dictionaries containing 'x' and 'y'.  

    Returns:  
        pd.DataFrame: DataFrame representing X.  
        pd.DataFrame: DataFrame representing y.  
    """  
    # Initialize an empty list for X and y  
    x_data = []  
    y_data = []  

    # Iterate through the data to populate x_data and y_data  
    for entry in data:  
        x_data.append(entry['x'])  
        y_data.append(entry['y'])  

    # Create DataFrame for X, filling missing features with 0  
    X = pd.DataFrame(x_data).fillna(0).astype(int)  

    # Create DataFrame for y  
    y = pd.DataFrame(y_data, columns=['y'])  

    return X, y  


def transform_data_with_list(data):  
    """  
    Transforms the input data into two DataFrames: one for X and one for y,  
    where each 'x' item is a list.  

    Parameters:  
        data (list): A list of dictionaries containing 'x' (as lists) and 'y'.  

    Returns:  
        pd.DataFrame: DataFrame representing X.  
        pd.DataFrame: DataFrame representing y.  
    """  
    # Initialize an empty list for X and y  
    x_data = []  
    y_data = []  

    # Iterate through the data to populate x_data and y_data  
    for entry in data:  
        x_data.append(entry['x'])  # Append the list directly  
        y_data.append(entry['y'])   # Append the y value  

    # Create DataFrame for X directly from x_data  
    X = pd.DataFrame(x_data)  

    # Create DataFrame for y  
    y = pd.DataFrame(y_data, columns=['y'])  

    return X, y
  

def transform_split_data_with_dict(data, test_ratio=0.2, shuffle=False):
    """  
    Splits the dataset into training and testing sets.  

    Parameters:  
        data (list): The input dataset, each item is a dictionary with 'x' and 'y'.  
        test_ratio (float): The proportion of the dataset to include in the test split.  
        shuffle (bool): Whether to shuffle the data before splitting.  

    Returns:  
        tuple: (data_train, data_test)  
    """  
    # Shuffle the data if required  
    if shuffle:  
        random.shuffle(data)  

    # Separate data by the target variable 'y'  
    grouped_data = defaultdict(list)  
    for item in data:  
        grouped_data[item['y']].append(item)  

    # Prepare lists for training and testing  
    data_train = []  
    data_test = []  

    # Split the data for each class  
    for y_value, items in grouped_data.items():  
        # Calculate the number of items for train and test  
        n = len(items)  
        n_test = int(n * test_ratio)  
        n_train = n - n_test  

        # Split the items into train and test sets  
        data_test.extend(items[:n_test])  
        data_train.extend(items[n_test:n_test + n_train])  

    # Normalize the features in data_train and data_test  
    all_features = set()  
    for item in data_train + data_test:  
        all_features.update(item['x'].keys())  

    # Create a complete feature set with zeros for missing features  
    def normalize_data(data_set):  
        normalized_data = []  
        for item in data_set:  
            normalized_x = [item['x'].get(feature, 0) for feature in all_features]  
            normalized_data.append({"x": normalized_x, "y": item['y']})  
        return normalized_data  

    # Normalize both datasets  
    data_train_normalized = normalize_data(data_train)  
    data_test_normalized = normalize_data(data_test)  

    return data_train_normalized, data_test_normalized  


def transform_train_test_data_with_dict(data):
    """  
    Splits the dataset into training and testing sets.  

    Parameters:  
        data (list): The input dataset, each item is a dictionary with 'x' and 'y'.

    Returns:  
        tuple: (data_train, data_test)  
    """
    # Split the data for each class  
    data_train = [item for item in data if item["info"] == "train"]  
    data_test = [item for item in data if item["info"] == "test"]

    # Normalize the features in data_train and data_test  
    all_features = set()  
    for item in data_train + data_test:  
        all_features.update(item['x'].keys())

    # Create a complete feature set with zeros for missing features  
    def normalize_data(data_set):
        normalized_data = []  
        for item in data_set:  
            normalized_x = [item['x'].get(feature, 0) for feature in all_features]  
            normalized_data.append({"x": normalized_x, "y": item['y']})  
        return normalized_data  

    # Normalize both datasets  
    data_train_normalized = normalize_data(data_train)  
    data_test_normalized = normalize_data(data_test)  

    return data_train_normalized, data_test_normalized  


def transform_split_data_with_list(data, test_ratio=0.2, shuffle=False):
    """  
    Splits the data into training and testing sets while maintaining an equal distribution of the target variable y.  
    
    Parameters:  
        data (list): A list of dictionaries containing 'x' (features) and 'y' (target).  
        test_ratio (float): The proportion of the dataset to include in the test split.  
        shuffle (bool): Whether to shuffle the dataset before splitting.  

    Returns:  
        tuple: Two lists, data_train and data_test.  
    """  
    # Shuffle the data if required  
    if shuffle:  
        random.shuffle(data)  

    # Separate the data by the target variable y  
    data_by_y = defaultdict(list)  
    for entry in data:  
        data_by_y[entry['y']].append(entry)  

    # Prepare the training and testing sets  
    data_train = []  
    data_test = []  
    
    # Split each group of y  
    for y_value, entries in data_by_y.items():  
        n = len(entries)  
        n_test = int(n * test_ratio)  
        n_train = n - n_test  

        # Split into train and test  
        train_entries = entries[:n_train]  
        test_entries = entries[n_train:]  

        data_train.extend(train_entries)  
        data_test.extend(test_entries)  

    return data_train, data_test  


def transform_train_test_data_with_list(data):
    """  
    Splits the data into training and testing sets while maintaining an equal distribution of the target variable y.  
    
    Parameters:  
        data (list): A list of dictionaries containing 'x' (features) and 'y' (target).

    Returns:  
        tuple: Two lists, data_train and data_test.  
    """  
    # Prepare the training and testing sets  
    data_train = []  
    data_test = []  

    data_train = [item for item in data if item["info"] == "train"]  
    data_test = [item for item in data if item["info"] == "test"]

    return data_train, data_test  


def split_data(data, test_ratio=0.2, shuffle=True):  
    """  
    Splits the dataset into training and testing sets.  

    Parameters:  
        data (list): The input dataset, each item is a dictionary with 'x' and 'y'.  
        test_ratio (float): The proportion of the dataset to include in the test split.  
        shuffle (bool): Whether to shuffle the data before splitting.  

    Returns:  
        tuple: (data_train, data_test)  
    """  
    # Shuffle the data if required  
    if shuffle:  
        random.shuffle(data)  

    # Separate data by the target variable 'y'  
    grouped_data = defaultdict(list)  
    for item in data:  
        grouped_data[item['y']].append(item)  

    # Prepare lists for training and testing  
    data_train = []  
    data_test = []  

    # Split the data for each class  
    for y_value, items in grouped_data.items():  
        # Calculate the number of items for train and test  
        n = len(items)  
        n_test = int(n * test_ratio)  
        n_train = n - n_test  

        # Split the items into train and test sets  
        data_test.extend(items[:n_test])  
        data_train.extend(items[n_test:n_test + n_train])  

    # Format the output to have "x" as an object and "y" as the label  
    data_train_formatted = [{"x": item['x'], "y": item['y']} for item in data_train]  
    data_test_formatted = [{"x": item['x'], "y": item['y']} for item in data_test]  

    return data_train_formatted, data_test_formatted  


def split_train_test_data(data):  
    """  
    Splits the dataset into training and testing sets.  

    Parameters:  
        data (list): The input dataset, each item is a dictionary with 'x' and 'y'. 

    Returns:  
        tuple: (data_train, data_test)  
    """  
    # Format the output to have "x" as an object and "y" as the label  
    data_train = [{"x": item['x'], "y": item['y']} for item in data if item["info"] == "train"]  
    data_test = [{"x": item['x'], "y": item['y']} for item in data if item["info"] == "test"]  

    return data_train, data_test


def split_dataset(data_filename, num_problems, num_samples, test_ratio=0.2, shuffle=False):  
    """  
    Splits data from a YAML file into training and testing sets.  

    Args:  
        data_filename (str): The path to the YAML file containing the data.  
        num_problems (int): The number of keys (problems) to consider during the split.  
        num_samples (int): The number of values (samples) to consider for each key.  
        test_ratio (float): The proportion of samples to include in the test set (between 0 and 1).  
        shuffle (bool): Whether to shuffle the keys and values before selection.  

    Returns:  
        dict: A dictionary containing 'train' and 'test' sets, each with problems as keys and lists of filenames as values.  
    """  
    # Load data from YAML file  
    with open(data_filename, 'r') as file:  
        data = yl.safe_load(file)  

    # Shuffle the keys (problems) if required  
    problems = list(data.keys())
    problems.sort()  
    if shuffle:  
        random.shuffle(problems)  

    # Select the specified number of problems  
    selected_problems = problems[:num_problems]  
    selected_data = {}  

    # Collect samples from the selected problems  
    for problem in selected_problems:  
        # Shuffle the samples for the current problem if required  
        samples = data[problem]  
        if shuffle:  
            random.shuffle(samples)  
        selected_data[problem] = samples[:num_samples]  

    # Create the output dictionaries  
    train_dict = {}  
    test_dict = {}  

    # Helper function to extract filename without extension  
    def extract_filename(path):  
        return os.path.splitext(os.path.basename(path))[0]  

    # Split samples for each problem into train and test sets  
    for problem, samples in selected_data.items():  
        # Calculate the number of test samples for this problem  
        num_test_samples = int(len(samples) * test_ratio)  
        num_train_samples = len(samples) - num_test_samples  

        # Ensure we do not exceed the number of available samples  
        if num_train_samples < 0:  
            num_train_samples = 0  
        if num_test_samples < 0:  
            num_test_samples = 0  

        # Shuffle samples for splitting  
        if shuffle:  
            random.shuffle(samples)  

        # Assign samples to train and test sets  
        train_samples = samples[:num_train_samples]  
        test_samples = samples[num_train_samples:num_train_samples + num_test_samples]  

        # Populate train and test dictionaries  
        train_dict[problem] = [extract_filename(sample) for sample in train_samples]  
        test_dict[problem] = [extract_filename(sample) for sample in test_samples]  

    return {'train': train_dict, 'test': test_dict}  


def transform_2d_to_1d_embeddings(data, strategy="padding", max_rows=None):
    """
    Transforms 2D embedding matrices into 1D vectors based on the chosen strategy.
    Returns a new list of dictionaries, preserving the original data layout, but
    updates 'x' with the transformed embeddings.

    Parameters
    ----------
    data : list of dict
        Each element is a dictionary with keys:
            {
                'x': <2D NumPy array (embeddings)>,
                'y': <label>,
                'info': <optional string>
            }
        Example:
            data = [
                {'x': np.array([[1,2],[3,4]]), 'y': 0, 'info': 'sample1'},
                {'x': np.array([[5,6],[7,8],[9,10]]), 'y': 1, 'info': 'sample2'}
            ]

    strategy : str, optional (default="padding")
        The strategy used to transform each 2D embedding matrix into a 1D vector:
            - "padding":
                Pads a smaller matrix with zeros until it reaches 'max_rows' in the first dimension.
                If 'max_rows' is not provided, it automatically uses the largest number of rows among all samples.
            - "truncation":
                Truncates a larger matrix to 'max_rows' rows. 
                If 'max_rows' is not provided, it automatically uses the smallest number of rows among all samples.
            - "features":
                Extracts per-column statistical features (mean, std, min, max, median).
                In this mode, 'max_rows' is ignored.

    max_rows : int, optional
        Specifies the maximum number of rows for "padding" or "truncation" strategies.
        - For "padding":
            If None, uses the largest row count among all samples.
        - For "truncation":
            If None, uses the smallest row count among all samples.

    Returns
    -------
    new_data : list of dict
        A new list of dictionaries with the same keys as the input list. Each dictionary has:
            {
                'x': <1D NumPy array with transformed data>,
                'y': <label>,
                'info': <string or optional info>
            }

    Notes
    -----
    - If your embeddings have a relevant structure (e.g., temporal or spatial), consider specialized models
      such as recurrent or convolutional neural networks, or extract more sophisticated features.
    - The "features" strategy is a simple approach that computes five statistics for each column 
      and concatenates them into a single 1D array.
    """
    # Determine the row count (number of rows) for each embedding in data
    row_counts = [item['x'].shape[0] for item in data]

    # Prepare the new data structure
    new_data = []

    # Strategy 1: Padding
    if strategy == "padding":
        # If max_rows is not provided, use the largest number of rows found
        if max_rows is None:
            max_rows = max(row_counts)

        # Retrieve the number of columns from the first sample 
        # (assuming all share the same number of columns)
        num_cols = data[0]['x'].shape[1]

        for item in data:
            emb = item['x']
            rows_to_add = max_rows - emb.shape[0]

            # Pad with zeros if the embedding has fewer rows than max_rows
            if rows_to_add > 0:
                padded = np.pad(
                    emb, 
                    pad_width=((0, rows_to_add), (0, 0)), 
                    mode='constant', 
                    constant_values=0
                )
            else:
                # If the matrix already has max_rows or more, leave it as is
                padded = emb

            # Flatten the padded matrix into a 1D vector
            transformed = padded.flatten()

            # Build the new dictionary with the same structure
            new_data.append({
                'x': transformed,
                'y': item['y'],
                'info': item.get('info', '')
            })

    # Strategy 2: Truncation
    elif strategy == "truncation":
        # If max_rows is not provided, use the smallest number of rows found
        if max_rows is None:
            max_rows = min(row_counts)

        for item in data:
            emb = item['x']
            # Truncate to the first 'max_rows' rows
            truncated = emb[:max_rows, :]

            # Flatten the truncated matrix into a 1D vector
            transformed = truncated.flatten()

            new_data.append({
                'x': transformed,
                'y': item['y'],
                'info': item.get('info', '')
            })

    # Strategy 3: Feature Extraction
    elif strategy == "features":
        for item in data:
            emb = item['x']
            features = []
            
            # For each column, compute mean, std, min, max, median
            for col_idx in range(emb.shape[1]):
                col_data = emb[:, col_idx]
                col_mean = np.mean(col_data)
                col_std = np.std(col_data)
                col_min = np.min(col_data)
                col_max = np.max(col_data)
                col_median = np.median(col_data)
                
                # Add the five statistics for this column
                features.extend([col_mean, col_std, col_min, col_max, col_median])
            
            # Convert the list of features into a 1D NumPy array
            transformed = np.array(features)

            new_data.append({
                'x': transformed,
                'y': item['y'],
                'info': item.get('info', '')
            })

    else:
        raise ValueError("Strategy must be 'padding', 'truncation' or 'features'.")

    return new_data

