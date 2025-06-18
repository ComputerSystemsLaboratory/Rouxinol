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
import random

import yaml as yl
import numpy as np
import pandas as pd

from collections import defaultdict  


def transform_data(
    data, 
    transformer="original"
):  
    """  
    Apply a transformation.  

    Args:  
        data (int): The original values.  
        transform (str): The type of transformation to revert.  
        Options:  
        - "original" (no transformation, return as-is)  
        - "sqrt" (revert square root, squares the values)  
        - "log" (revert log1p, applies expm1 to undo log1p)  

    Returns:  
        data: The new data
    """  
    if transformer == "original":  
        return data  # No transformation applied
    elif transformer == "sqrt":  
        return math.sqrt(data) if data >= 0 else data # Square root by squaring the values  
    elif transformer == "log":  
        return np.expm1(data) if data >= -1 else data  # log1p by applying expm1 (exp(x) - 1)  
    else:  
        logging.error(f"Invalid transformation '{transformer}'. Use 'original', 'sqrt', or 'log'.")  
        exit(1)


# transform_data_with_dict
def X_y_data_with_dict(data, transformer="original"):  
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
        y_data.append(transform_data(entry['y'], transformer))

    # Create DataFrame for X, filling missing features with 0  
    X = pd.DataFrame(x_data).fillna(0).astype(int)  

    # Create DataFrame for y  
    y = pd.DataFrame(y_data, columns=['y'])  

    return X, y  


# transform_data_with_list
def X_y_data_with_list(data, transformer="original"):  
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
        y_data.append(transform_data(entry['y'], transformer))   # Append the y value  

    # Create DataFrame for X directly from x_data  
    X = pd.DataFrame(x_data)  

    # Create DataFrame for y  
    y = pd.DataFrame(y_data, columns=['y'])  

    return X, y
  

def normalize_data_with_dict(data, transformer="original"):
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

    # Create a complete feature set with zeros for missing features
    normalized_data = [] 
    for item in data:  
        normalized_x = [item['x'].get(feature, 0) for feature in all_features]  
        normalized_data.append({"x": normalized_x, "y": transform_data(item['y'], transformer)})  
    return normalized_data  


# transform_split_data_with_dict
def train_test_data_with_dict(data, test_ratio=0.2, transformer="original", shuffle=False, regression=False):
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

    # Create a complete feature set with zeros for missing features  
    def normalize_data(data_set, transformer):  
        normalized_data = []  
        for item in data_set:  
            normalized_x = [item['x'].get(feature, 0) for feature in all_features]  
            normalized_data.append({"x": normalized_x, "y": transform_data(item['y'], transformer)})  
        return normalized_data  

    # Normalize both datasets  
    data_train_normalized = normalize_data(data_train, transformer)  
    data_test_normalized = normalize_data(data_test, transformer)  

    return data_train_normalized, data_test_normalized  


# transform_train_test_data_with_dict
def train_test_data_with_dict_and_label(data, transformer="original"):
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
    def normalize_data(data_set, transformer):
        normalized_data = []  
        for item in data_set:  
            normalized_x = [item['x'].get(feature, 0) for feature in all_features]  
            normalized_data.append({"x": normalized_x, "y": transform_data(item['y'], transformer)})  
        return normalized_data  

    # Normalize both datasets  
    data_train_normalized = normalize_data(data_train, transformer)  
    data_test_normalized = normalize_data(data_test, transformer)  

    return data_train_normalized, data_test_normalized  

# transform_split_data_with_list
def train_test_data_with_list(data, test_ratio=0.2, transformer="original", shuffle=False):
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

    data_train_normalized = [{"x": item["x"], "y": transform_data(item['y'], transformer)} for item in data_train]
    data_test_normalized = [{"x": item["x"], "y": transform_data(item['y'], transformer)} for item in data_test]
    return data_train_normalized, data_test_normalized


# transform_train_test_data_with_list
def train_test_data_with_list_and_label(data, transformer="original"):
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

    data_train_normalized = [{"x": item["x"], "y": transform_data(item['y'], transformer)} for item in data_train]
    data_test_normalized = [{"x": item["x"], "y": transform_data(item['y'], transformer)} for item in data_test]
    return data_train_normalized, data_test_normalized


def split_data(data, test_ratio=0.2, transformer="original", shuffle=True):  
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

    data_train_normalized = [{"x": item["x"], "y": transform_data(item['y'], transformer)} for item in data_train_formatted]
    data_test_normalized = [{"x": item["x"], "y": transform_data(item['y'], transformer)} for item in data_test_formatted]
    return data_train_normalized, data_test_normalized


def split_train_test_data(data, transformer="original"):  
    """  
    Splits the dataset into training and testing sets.  

    Parameters:  
        data (list): The input dataset, each item is a dictionary with 'x' and 'y'. 

    Returns:  
        tuple: (data_train, data_test)  
    """  
    # Format the output to have "x" as an object and "y" as the label  
    data_train = [{"x": item['x'], "y": transform_data(item['y'], transformer)} for item in data if item["info"] == "train"]  
    data_test = [{"x": item['x'], "y": transform_data(item['y'], transformer)} for item in data if item["info"] == "test"]  

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


def transform_2d_to_1d_embeddings(data, strategy="padding", pad_value=0, max_rows=None, transformer="original"):
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
                'y': transform_data(item['y'], transformer),
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
                'y': transform_data(item['y'], transformer),
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
                'y': transform_data(item['y'], transformer),
                'info': item.get('info', '')
            })

    else:
        raise ValueError("Strategy must be 'padding', 'truncation' or 'features'.")

    return new_data


def transform_1d_to_1d_embeddings(data, strategy="padding", pad_value=0, max_length=None, transformer="original"):  
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
                'y': transform_data(item['y'], transformer),  
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
                'y': transform_data(item['y'], transformer),  
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
    transformer="original"
):  
    """  
    Apply a transformation.  

    Args:  
        data (dataFrame): The dataFrame with original values.  
        transform (str): The type of transformation to revert.  
        Options:  
        - "original" (no transformation, return as-is)  
        - "sqrt" (revert square root, squares the values)  
        - "log" (revert log1p, applies expm1 to undo log1p)  

    Returns:  
        dataFrame: A copy of the dataFrame with new data
    """  
    # Create a copy of the original data to ensure it is not modified  
    data_copy = data.copy()  

    # Revert transformations based on the type  
    if transformer == "original":  
        return data_copy  # No transformation applied
    elif transformer == "sqrt":  
        return data_copy.apply(lambda col: col.apply(lambda x: math.sqrt(x) if x >= 0 else x)) # Square root by squaring the values  
    elif transformer == "log":  
        return data_copy.apply(lambda col: col.apply(lambda x: np.expm1(x) if x >= -1 else x))  # log1p by applying expm1 (exp(x) - 1)  
    else:  
        logging.error(f"Invalid transformer '{transformer}'. Use 'original', 'sqrt', or 'log'.")  
        exit(1)

# ---------------------------------------------
# Helper function: Revert transformation
# --------------------------------------------- 
def revert_transformer(
    data, 
    transformer="original"
):  
    """  
    Revert a transformation applied to a NumPy array (sqrt or log).  

    Args:  
        data (np.ndarray): The NumPy array with transformed values.  
        transform (str): The type of transformation to revert.  
        Options:  
        - "original" (no transformation, return as-is)  
        - "sqrt" (revert square root, squares the values)  
        - "log" (revert log1p, applies expm1 to undo log1p)  

    Returns:  
        np.ndarray: A copy of the array with the transformation reverted.  
    """  
    # Create a copy of the original array to ensure it is not modified  
    data_copy = np.copy(data)  

    # Revert transformations based on the type  
    if transformer == "original":  
        return data_copy  # No transformation applied, return as-is  
    elif transformer == "sqrt":  
        return np.square(data_copy)  # Revert square root by squaring the values  
    elif transformer == "log":  
        return np.expm1(data_copy)  # Revert log1p by applying expm1 (exp(x) - 1)  
    else:  
        logging.error(f"Invalid transformer '{transformer}'. Use 'original', 'sqrt', or 'log'.")  
        exit(1)
        