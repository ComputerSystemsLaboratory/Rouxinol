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
import math
import joblib
import random

import yaml as yl
import numpy as np
import pandas as pd

from absl import logging

from collections import defaultdict  

from sklearn.preprocessing import StandardScaler, MinMaxScaler, RobustScaler, MaxAbsScaler, Normalizer


def X_y_data_with_dict(
    data,
    transformer="original",
    columns=[]
):
    """
    Transforms the input data into two DataFrames: one for X and one for y.

    Parameters:
        data (list): A list of dictionaries containing 'x' and 'y'.
        transformer (str): Specifies the transformation to apply to 'y' values.
                           Defaults to "original".
        columns (list): An optional list of column names for the X DataFrame.
                        If provided and not empty, these names will be used.
                        Defaults to an empty list, in which case column names
                        are inferred from the data.

    Returns:
        pd.DataFrame: DataFrame representing X.
        pd.DataFrame: DataFrame representing y.
    """
    # Initialize an empty list for X and y
    x_data = []
    y_data = []

    # Iterate through the data to populate x_data and y_data
    for entry in data:
        # 'x' data is directly appended
        x_data.append(entry['x'])
        # 'y' data is transformed and appended
        y_data.append(apply_transformer(entry['y'], transformer))

    # Create DataFrame for X, using provided columns if available,
    # filling missing features with 0. Removed .astype(int) to allow floats.
    if columns: # If the columns list is not empty
        X = pd.DataFrame(x_data, columns=columns).fillna(0)
    else: # If columns list is empty, infer column names
        X = pd.DataFrame(x_data).fillna(0)

    # Dynamically determine column names for y based on the structure of y_data
    y_columns = []
    if y_data: # Ensure y_data is not empty before trying to access its first element
        first_y_entry = y_data[0]
        if isinstance(first_y_entry, (list, tuple, np.ndarray)):
            # If the first y entry is an iterable, assume multiple outputs
            num_outputs = len(first_y_entry)
            y_columns = [f'y_output_{i+1}' for i in range(num_outputs)]
        else:
            # If it's a scalar, assume a single output
            y_columns = ['y']
    else:
        # If y_data is empty, default to a single 'y' column or handle as appropriate for your data
        y_columns = ['y'] # Or raise an error if empty y_data is not expected

    # Create DataFrame for y with dynamically determined columns
    y = pd.DataFrame(y_data, columns=y_columns)

    return X, y


def X_y_data_with_list(
    data,
    transformer="original",
    columns=[]
):
    """
    Transforms the input data into two DataFrames: one for X and one for y.

    Parameters:
        data (list): A list of dictionaries containing 'x' and 'y'.
        transformer (str): Specifies the transformation to apply to 'y' values.
                           Defaults to "original".
        columns (list): An optional list of column names for the X DataFrame.
                        If provided and not empty, these names will be used.
                        Defaults to an empty list, in which case column names
                        are inferred from the data.

    Returns:
        pd.DataFrame: DataFrame representing X.
        pd.DataFrame: DataFrame representing y.
    """
    # Initialize an empty list for X and y
    x_data = []
    y_data = []

    # Iterate through the data to populate x_data and y_data
    for entry in data:
        # 'x' data is directly appended
        x_data.append(entry['x'])
        # 'y' data is transformed and appended
        y_data.append(apply_transformer(entry['y'], transformer))

    # Create DataFrame for X, using provided columns if available,
    # filling missing features with 0. Removed .astype(int) to allow floats.
    if columns: # If the columns list is not empty
        X = pd.DataFrame(x_data, columns=columns).fillna(0)
    else: # If columns list is empty, infer column names
        X = pd.DataFrame(x_data)

    # Dynamically determine column names for y based on the structure of y_data
    y_columns = []
    if y_data: # Ensure y_data is not empty before trying to access its first element
        first_y_entry = y_data[0]
        if isinstance(first_y_entry, (list, tuple, np.ndarray)):
            # If the first y entry is an iterable, assume multiple outputs
            num_outputs = len(first_y_entry)
            y_columns = [f'y_output_{i+1}' for i in range(num_outputs)]
        else:
            # If it's a scalar, assume a single output
            y_columns = ['y']
    else:
        # If y_data is empty, default to a single 'y' column or handle as appropriate for your data
        y_columns = ['y'] # Or raise an error if empty y_data is not expected

    # Create DataFrame for y with dynamically determined columns
    y = pd.DataFrame(y_data, columns=y_columns)

    return X, y
  

def normalize_data_with_dict(
    data, 
    transformer="original"
):
    """  
    Splits the dataset into training and testing sets.  

    Parameters:  
        data (list): The input dataset, each item is a dictionary with 'x' and 'y'.

    Returns:  
        tuple: new data
    """  
    # Normalize the features in data_train and data_test  
    all_features = set()  
    for item in data:  
        all_features.update(item['x'].keys())  

    # Sort the keys to ensure a consistent order
    sorted_keys = sorted(list(all_features))

    # Create a complete feature set with zeros for missing features
    normalized_data = [] 
    for item in data:  
        normalized_x = [item['x'].get(feature, 0) for feature in sorted_keys]  
        normalized_data.append({"x": normalized_x, "y": apply_transformer(item['y'], transformer)})  
    return normalized_data  


# transform_split_data_with_dict
def train_test_data_with_dict(
    data, 
    test_ratio=0.2, 
    transformer="original", 
    shuffle=False, 
    regression=False
):
    """  
    Splits the dataset into training and testing sets.  

    Parameters:  
        data (list): The input dataset, each item is a dictionary with 'x' and 'y'.  
        test_ratio (float): The proportion of the dataset to include in the test split.  
        shuffle (bool): Whether to shuffle the data before splitting.  

    Returns:  
        tuple: (data_train, data_test)  
    """  
    # Prepare lists for training and testing  
    data_train = []  
    data_test = []  

    if not regression:
        # Shuffle the data if required
        if shuffle:  
            random.shuffle(data)  

        # Separate data by the target variable 'y'  
        grouped_data = defaultdict(list)  
        for item in data:  
            grouped_data[item['y']].append(item)  

        # Split the data for each class  
        for y_value, items in grouped_data.items():  
            # Calculate the number of items for train and test  
            n = len(items) 
            n_test = int(n * test_ratio)
            n_train = n - n_test  

            # Split the items into train and test sets  
            data_test.extend(items[:n_test])  
            data_train.extend(items[n_test:n_test + n_train])  
    else:
        n = len(data) 
        n_test = int(n * test_ratio)
        n_train = n - n_test  

        # Split the items into train and test sets  
        data_test.extend(data[:n_test])  
        data_train.extend(data[n_test:n_test + n_train]) 

    # Normalize the features in data_train and data_test  
    all_features = set()  
    for item in data_train + data_test:  
        all_features.update(item['x'].keys())  

    # Sort the keys to ensure a consistent order
    sorted_keys = sorted(list(all_features))

    # Create a complete feature set with zeros for missing features  
    def normalize_data(data_set, transformer):  
        normalized_data = []  
        for item in data_set:  
            normalized_x = [item['x'].get(feature, 0) for feature in sorted_keys] 
            normalized_data.append({"x": normalized_x, "y": apply_transformer(item['y'], transformer)})  
        return normalized_data  

    # Normalize both datasets  
    data_train_normalized = normalize_data(data_train, transformer)  
    data_test_normalized = normalize_data(data_test, transformer)  

    return data_train_normalized, data_test_normalized, sorted_keys  


# transform_train_test_data_with_dict
def train_test_data_with_dict_and_label(
    data, 
    exclude_keys=None, 
    use_only_keys=None, 
    transformer="original"
):
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

    # Use specific features
    if use_only_keys and isinstance(use_only_keys, list):
        all_features = set(use_only_keys)
    else:
        # Normalize the features in data_train and data_test  
        all_features = set()  
        for item in data_train + data_test:  
            all_features.update(item['x'].keys())

        # Remove some keys
        if exclude_keys and isinstance(exclude_keys, list):
            all_features -= set(exclude_keys)

    # Sort the keys to ensure a consistent order
    sorted_keys = sorted(list(all_features))

    # Create a complete feature set with zeros for missing features  
    def normalize_data(data_set, transformer):
        normalized_data = []  
        for item in data_set:  
            normalized_x = [item['x'].get(feature, 0) for feature in sorted_keys]  
            normalized_data.append({"x": normalized_x, "y": apply_transformer(item['y'], transformer)})  
        return normalized_data  

    # Normalize both datasets  
    data_train_normalized = normalize_data(data_train, transformer)  
    data_test_normalized = normalize_data(data_test, transformer)  

    return data_train_normalized, data_test_normalized, sorted_keys  

# transform_split_data_with_list
def train_test_data_with_list(
    data, 
    test_ratio=0.2, 
    transformer="original", 
    shuffle=False, 
    regression=False
):
    """  
    Splits the data into training and testing sets while maintaining an equal distribution of the target variable y.  
    
    Parameters:  
        data (list): A list of dictionaries containing 'x' (features) and 'y' (target).  
        test_ratio (float): The proportion of the dataset to include in the test split.  
        shuffle (bool): Whether to shuffle the dataset before splitting.  

    Returns:  
        tuple: Two lists, data_train and data_test.  
    """  
    
    # Prepare the training and testing sets  
    data_train = []  
    data_test = []  
    
    if not regression:    
        # Shuffle the data if required  
        if shuffle:  
            random.shuffle(data)  

        # Separate the data by the target variable y  
        data_by_y = defaultdict(list)  
        for entry in data:  
            data_by_y[entry['y']].append(entry)  

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
    else:
        n = len(data)  
        n_test = int(n * test_ratio)  
        n_train = n - n_test  

        # Split into train and test  
        train_entries = data[:n_train]  
        test_entries = data[n_train:]  

        data_train.extend(train_entries)  
        data_test.extend(test_entries)  

    data_train_normalized = [{"x": item["x"], "y": apply_transformer(item['y'], transformer)} for item in data_train]
    data_test_normalized = [{"x": item["x"], "y": apply_transformer(item['y'], transformer)} for item in data_test]

    return data_train_normalized, data_test_normalized


# transform_train_test_data_with_list
def train_test_data_with_list_and_label(
    data, 
    transformer="original"
):
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

    data_train_normalized = [{"x": item["x"], "y": apply_transformer(item['y'], transformer)} for item in data_train]
    data_test_normalized = [{"x": item["x"], "y": apply_transformer(item['y'], transformer)} for item in data_test]
    return data_train_normalized, data_test_normalized


def split_data(
    data, 
    test_ratio=0.2, 
    transformer="original", 
    shuffle=True
):  
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

    data_train_normalized = [{"x": item["x"], "y": apply_transformer(item['y'], transformer)} for item in data_train_formatted]
    data_test_normalized = [{"x": item["x"], "y": apply_transformer(item['y'], transformer)} for item in data_test_formatted]
    return data_train_normalized, data_test_normalized


def split_train_test_data(
    data, 
    transformer="original"
):  
    """  
    Splits the dataset into training and testing sets.  

    Parameters:  
        data (list): The input dataset, each item is a dictionary with 'x' and 'y'. 

    Returns:  
        tuple: (data_train, data_test)  
    """  
    # Format the output to have "x" as an object and "y" as the label  
    data_train = [{"x": item['x'], "y": apply_transformer(item['y'], transformer)} for item in data if item["info"] == "train"]  
    data_test = [{"x": item['x'], "y": apply_transformer(item['y'], transformer)} for item in data if item["info"] == "test"]  

    return data_train, data_test


def split_dataset(
    data_filename, 
    num_problems, 
    num_samples, 
    test_ratio=0.2, 
    shuffle=False
):  
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


def transform_2d_to_1d_embeddings(
    data, 
    strategy="padding", 
    pad_value=0, 
    max_rows=None, 
    transformer="original"
):
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
                    constant_values=pad_value
                )
            else:
                # If the matrix already has max_rows or more, leave it as is
                padded = emb

            # Flatten the padded matrix into a 1D vector
            transformed = padded.flatten()

            # Build the new dictionary with the same structure
            new_data.append({
                'x': transformed,
                'y': apply_transformer(item['y'], transformer),
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
                'y': apply_transformer(item['y'], transformer),
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
                'y': apply_transformer(item['y'], transformer),
                'info': item.get('info', '')
            })

    else:
        raise ValueError("Strategy must be 'padding', 'truncation' or 'features'.")

    return new_data


def transform_1d_to_1d_embeddings(
    data, 
    strategy="padding", 
    pad_value=0, 
    max_length=None, 
    transformer="original"
):  
    """  
    Transforms 1D embedding vectors into uniform-sized 1D vectors based on the chosen strategy.  
    Returns a new list of dictionaries, preserving the original data layout, but  
    updates 'x' with the transformed embeddings.  

    Parameters  
    ----------  
    data : list of dict  
        Each element is a dictionary with keys:  
            {  
                'x': <1D NumPy array (embeddings)>,  
                'y': <label>,  
                'info': <optional string>  
            }  
        Example:  
            data = [  
                {'x': np.array([1, 2, 3]), 'y': 0, 'info': 'sample1'},  
                {'x': np.array([4, 5, 6, 7, 8]), 'y': 1, 'info': 'sample2'}  
            ]  

    strategy : str, optional (default="padding")  
        The strategy used to transform each 1D embedding vector into a uniform-sized 1D vector:  
            - "padding":  
                Pads a smaller vector with zeros until it reaches 'max_length'.  
                If 'max_length' is not provided, it automatically uses the largest length among all samples.  
            - "truncation":  
                Truncates a larger vector to 'max_length'.  
                If 'max_length' is not provided, it automatically uses the smallest length among all samples.  

    max_length : int, optional  
        Specifies the maximum length for "padding" or "truncation" strategies.  
        - For "padding":  
            If None, uses the largest length among all samples.  
        - For "truncation":  
            If None, uses the smallest length among all samples.  

    Returns  
    -------  
    new_data : list of dict  
        A new list of dictionaries with the same keys as the input list. Each dictionary has:  
            {  
                'x': <1D NumPy array with transformed data>,  
                'y': <label>,  
                'info': <string or optional info>  
            }  
    """  
    # Determine the lengths of each 1D vector in data  
    lengths = [item['x'].shape[0] for item in data]  

    # Prepare the new data structure  
    new_data = []  

    # Strategy 1: Padding  
    if strategy == "padding":  
        # If max_length is not provided, use the largest length found  
        if max_length is None:  
            max_length = max(lengths)  

        for item in data:  
            emb = item['x']  
            length_to_add = max_length - emb.shape[0]  

            # Pad with zeros if the vector is shorter than max_length  
            if length_to_add > 0:  
                padded = np.pad(  
                    emb,  
                    pad_width=(0, length_to_add),  
                    mode='constant',  
                    constant_values=pad_value 
                )  
            else:  
                # If the vector is already max_length or longer, leave it as is  
                padded = emb  

            # Build the new dictionary with the same structure  
            new_data.append({  
                'x': padded,  
                'y': apply_transformer(item['y'], transformer),  
                'info': item.get('info', '')  
            })  

    # Strategy 2: Truncation  
    elif strategy == "truncation":  
        # If max_length is not provided, use the smallest length found  
        if max_length is None:  
            max_length = min(lengths)  

        for item in data:  
            emb = item['x']  
            # Truncate to the first 'max_length' elements  
            truncated = emb[:max_length]  

            # Build the new dictionary with the same structure  
            new_data.append({  
                'x': truncated,  
                'y': apply_transformer(item['y'], transformer),  
                'info': item.get('info', '')  
            })  

    else:  
        raise ValueError("Strategy must be 'padding' or 'truncation'.")  

    return new_data

# ---------------------------------------------
# Helper function: Apply transformation
# --------------------------------------------- 
def apply_transformer(
    data,
    transformer: str = "original"
):
    """
    Apply a transformation that supports both positive and negative values,
    keeping it invertible.

    Args:
        data: A numeric value, list of numerics, numpy array, pandas DataFrame, or tuple of numerics.
        transformer (str): Transformation type:
            - "original": no change
            - "sqrt_sign": signed square root (sqrt of absolute value, preserving sign)
            - "log_sign": signed logarithmic-like transform (sign * log1p of abs)

    Returns:
        Transformed data, same type as input.
    """
    # Determine the original type of the input data to ensure consistent return type
    original_type = None
    if isinstance(data, (list, np.ndarray)):
        data_to_process = np.array(data)
        original_type = 'list_or_array'
    elif isinstance(data, pd.DataFrame):
        data_to_process = data.to_numpy() # Convert DataFrame to NumPy array for processing
        original_type = 'dataframe'
    elif isinstance(data, tuple):
        data_to_process = np.array(data)
        original_type = 'tuple'
    elif isinstance(data, (int, float)):
        data_to_process = data # Scalar value
        original_type = 'scalar'
    else:
        raise TypeError(f"Unsupported data type: {type(data)}. Expected numeric, list, numpy array, pandas DataFrame, or tuple.")

    # Define the transformation functions
    def _sqrt_sign_transform(x):
        """Applies signed square root to a single value."""
        return np.sign(x) * np.sqrt(np.abs(x))

    def _log_sign_transform(x):
        """Applies signed log1p to a single value."""
        return np.sign(x) * np.log1p(np.abs(x))

    # Apply transformations based on the transformer type
    if transformer == "original":
        transformed_data = data_to_process
    elif transformer == "sqrt":
        # Apply the signed square root transform. For arrays/DataFrames, numpy handles element-wise.
        transformed_data = _sqrt_sign_transform(data_to_process)
    elif transformer == "log":
        # Apply the signed log1p transform. For arrays/DataFrames, numpy handles element-wise.
        transformed_data = _log_sign_transform(data_to_process)
    else:
        raise ValueError(f"Invalid transformer '{transformer}'. Use 'original', 'sqrt_sign', or 'log_sign'.")

    # Convert back to original data format
    if original_type == 'list_or_array':
        return transformed_data.tolist()
    elif original_type == 'dataframe':
        # If original was DataFrame, convert back to DataFrame with original columns/index
        return pd.DataFrame(transformed_data, index=data.index, columns=data.columns)
    elif original_type == 'tuple':
        return tuple(transformed_data)
    else: # 'scalar'
        return transformed_data


def revert_transformer(
    transformed_data,
    transformer: str = "original"
):
    """
    Revert the transformation applied by apply_transformer.

    Args:
        transformed_data: Transformed data, same type as output of apply_transformer.
        transformer (str): The type of transformation applied previously.

    Returns:
        Original data (approximate), same type as input.
    """
    # Determine the original type of the input data to ensure consistent return type
    original_type = None
    if isinstance(transformed_data, (list, np.ndarray)):
        data_to_process = np.array(transformed_data)
        original_type = 'list_or_array'
    elif isinstance(transformed_data, pd.DataFrame):
        data_to_process = transformed_data.to_numpy() # Convert DataFrame to NumPy array for processing
        original_type = 'dataframe'
    elif isinstance(transformed_data, tuple):
        data_to_process = np.array(transformed_data)
        original_type = 'tuple'
    elif isinstance(transformed_data, (int, float)):
        data_to_process = transformed_data # Scalar value
        original_type = 'scalar'
    else:
        raise TypeError(f"Unsupported transformed_data type: {type(transformed_data)}. Expected numeric, list, numpy array, pandas DataFrame, or tuple.")

    # Define the inverse transformation functions
    def _inv_sqrt_sign_transform(x):
        """Applies inverse signed square root to a single value."""
        return np.sign(x) * (np.abs(x) ** 2)

    def _inv_log_sign_transform(x):
        """Applies inverse signed log1p to a single value."""
        return np.sign(x) * np.expm1(np.abs(x))

    # Apply inverse transformations based on the transformer type
    if transformer == "original":
        reverted_data = data_to_process
    elif transformer == "sqrt":
        reverted_data = _inv_sqrt_sign_transform(data_to_process)
    elif transformer == "log":
        reverted_data = _inv_log_sign_transform(data_to_process)
    else:
        raise ValueError(f"Invalid transformer '{transformer}'. Use 'original', 'sqrt_sign', or 'log_sign'.")

    # Convert back to original data format
    if original_type == 'list_or_array':
        return reverted_data.tolist()
    elif original_type == 'dataframe':
        # If original was DataFrame, convert back to DataFrame with original columns/index
        return pd.DataFrame(reverted_data, index=transformed_data.index, columns=transformed_data.columns)
    elif original_type == 'tuple':
        return tuple(reverted_data)
    else: # 'scalar'
        return reverted_data


# ---------------------------------------------
# Apply a scaler on X
# --------------------------------------------- 
def scale_datasets(
    *datasets,
    scaler_type="StandardScaler",
    scaler_filename=None   
):
    """
    Applies a specified scaler to the 'x' key within a variable number of datasets.
    Other keys in the dictionaries remain unchanged.

    Args:
        scaler_type (str): The type of scaler to use if no valid scaler_filename is provided
                           or if loading fails. Supported types:
                           'StandardScaler', 'MinMaxScaler', 'RobustScaler',
                           'MaxAbsScaler', 'Normalizer'.
        *datasets (list[dict]): A variable number of datasets. Each dataset is a list
                                of dictionaries, where each dictionary has a key 'x'
                                whose value is a list of numeric items (e.g., {x: [1, 2, 3], y: 'a'}).
        scaler_filename (Optional[str]): Path to a file containing a pre-fitted scaler.
                                         If provided and valid, this scaler will be used.
                                         Otherwise, a new scaler will be initialized and fitted.

    Returns:
        tuple[list[list[dict]], object]: A tuple containing:
            - A list of the new, scaled datasets.
            - The fitted (or loaded) scaler object.

    Raises:
        ValueError: If an unsupported scaler_type is provided when a new scaler needs to be created.
    """
    if not datasets:
        logging.warning("No datasets provided for scaling.")
        return [], None

    scaler = None
    # Attempt to load scaler from file if scaler_filename is provided
    if scaler_filename:
        if os.path.exists(scaler_filename):
            try:
                scaler = joblib.load(scaler_filename)
                #logging.info(f"Scaler loaded successfully from '{scaler_filename}'.")
            except Exception as e:
                logging.error(f"Failed to load scaler from '{scaler_filename}': {e}. Proceeding with new scaler initialization.")
                scaler = None # Reset scaler to None to trigger new initialization
        else:
            logging.warning(f"Scaler file '{scaler_filename}' not found. Proceeding with new scaler initialization.")

    # If scaler was not loaded successfully, initialize a new one
    if scaler is None:
        if scaler_type == 'StandardScaler':
            scaler = StandardScaler()
        elif scaler_type == 'MinMaxScaler':
            scaler = MinMaxScaler()
        elif scaler_type == 'RobustScaler':
            scaler = RobustScaler()
        elif scaler_type == 'MaxAbsScaler':
            scaler = MaxAbsScaler()
        elif scaler_type == 'Normalizer':
            scaler = Normalizer()
        else:
            logging.error(f"Unsupported scaler_type: {scaler_type}. "
                             "Choose from 'StandardScaler', 'MinMaxScaler', 'RobustScaler', 'MaxAbsScaler', 'Normalizer'.")
            sys.exit(1)
        #logging.info(f"New scaler '{scaler_type}' initialized.")

    # Collect all 'x' values from all datasets for fitting (only if a new scaler needs fitting)
    # Normalizer does not need fitting on the entire dataset in the same way as other scalers.
    # If a scaler was loaded, we assume it's already fitted.
    if scaler_type != 'Normalizer' and (scaler_filename is None or not os.path.exists(str(scaler_filename))):
        all_x_data = []
        for dataset in datasets:
            for item in dataset:
                if 'x' in item and isinstance(item['x'], (list, np.ndarray)):
                    all_x_data.append(item['x'])
                else:
                    logging.warning(f"Skipping item due to missing or invalid 'x' key: {item}")

        if not all_x_data:
            logging.warning("No valid 'x' data found across all datasets for scaling. Returning original datasets.")
            return datasets, scaler

        try:
            X_fit = np.array(all_x_data)
        except ValueError as e:
            logging.error(f"Error converting 'x' data to numpy array. Ensure all 'x' lists have consistent dimensions: {e}. Returning original datasets.")
            return datasets, scaler

        # Fit the scaler
        scaler.fit(X_fit)
        #logging.info(f"Scaler '{scaler_type}' fitted successfully on collected data.")
    #elif scaler_type == 'Normalizer':
    #    logging.info(f"Normalizer does not require explicit fitting on the entire dataset.")
    #else:
    #    logging.info("Using loaded scaler; no fitting required.")


    # Transform 'x' values for each dataset and reconstruct new datasets
    scaled_datasets = []
    for dataset_idx, dataset in enumerate(datasets):
        current_scaled_dataset = []
        for item_idx, item in enumerate(dataset):
            new_item = item.copy() # Create a shallow copy to modify 'x'
            if 'x' in new_item and isinstance(new_item['x'], (list, np.ndarray)):
                # Transform the 'x' data for the current item
                x_to_transform = np.array(new_item['x']).reshape(1, -1)
                scaled_x = scaler.transform(x_to_transform)
                new_item['x'] = scaled_x[0].tolist() # Convert back to list
            current_scaled_dataset.append(new_item)
        scaled_datasets.append(current_scaled_dataset)
        #logging.info(f"Dataset {dataset_idx + 1} scaled successfully with '{scaler_type}' (or loaded scaler).")

    return scaled_datasets, scaler


# -------------------------------------------------
# Upadate the historam
# -------------------------------------------------
def update_histogram_from_keys(
    histogram, 
    keys_filename
):
    """
    Creates a new histogram by incorporating keys from a YAML instructions file.

    For each key found in the YAML instructions file:
    - If the key already exists in the input 'histogram', its original value is retained.
    - If the key does not exist in the input 'histogram', it is added with a value of 0.

    Args:
        histogram (dict): The original histogram (dictionary of key-value pairs).
        keys_filename (str): The path to a YAML file containing a list of keys.

    Returns:
        dict: A new histogram with all keys from the instructions file,
              and values updated based on the input histogram.
    """
    new_histogram = {}
    try:
        with open(keys_filename, 'r') as f:
            # Load the YAML content. Expecting a list of strings (keys).
            keys_from_file = yl.safe_load(f)

        if not isinstance(keys_from_file, list):
            logging.error(f"YAML file '{keys_filename}' does not contain a list.")
            return {}

        for key in keys_from_file:
            if isinstance(key, str): # Ensure the loaded item is a string
                # If the key exists in the original histogram, use its value
                # Otherwise, set the value to 0
                new_histogram[key] = histogram.get(key, 0)
            else:
                logging.warning(f"Non-string key '{key}' found in YAML file. Skipping.")

    except FileNotFoundError:
        logging.error(f"The file '{keys_filename}' was not found.")
        return {}
    except yl.YAMLError as e:
        logging.error(f"Could not parse YAML file '{keys_filename}': {e}")
        return {}
    except Exception as e:
        logging.error(f"An unexpected error occurred: {e}")
        return {}

    return new_histogram


# -------------------------------------------------
# x86 Histogram dictionary to vector
# -------------------------------------------------
def histogram2vector(data_list):
    """
    Processes a list of dictionaries to transform the 'x' dictionary into a vector.

    Args:
        data_list (list): A list of dictionaries, where each dictionary
                          has 'x' (a dictionary), 'y', and 'info'.

    Returns:
        list: A new list where each 'x' is a vector (list of values) with
              a consistent order of keys, and missing keys filled with 0.
    """
    if not data_list:
        return []

    # 1. Collect all unique keys from all 'x' dictionaries
    all_keys = set()
    for item in data_list:
        if 'x' in item and isinstance(item['x'], dict):
            all_keys.update(item['x'].keys())

    # Sort the keys to ensure a consistent order
    sorted_keys = sorted(list(all_keys))

    # 2. Process each item in the data_list
    processed_list = []
    for item in data_list:
        new_x_vector = []
        if 'x' in item and isinstance(item['x'], dict):
            for key in sorted_keys:
                new_x_vector.append(item['x'].get(key, 0)) # Get value or 0 if key is missing
        else:
            # If 'x' is missing or not a dict, create a vector of zeros
            new_x_vector = [0] * len(sorted_keys)

        # Create a new dictionary with the transformed 'x'
        new_item = {
            'x': new_x_vector,
            'y': item.get('y'),  # Use .get() in case 'y' or 'info' might be missing
            'info': item.get('info')
        }
        processed_list.append(new_item)

    return processed_list
