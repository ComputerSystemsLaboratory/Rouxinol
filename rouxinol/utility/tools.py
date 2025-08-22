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
import glob
import time
import shlex
import resource
import subprocess

import numpy as np

import itertools as it

from datetime import datetime   

from sklearn.metrics import (
    accuracy_score,
    precision_score,
    recall_score,
    f1_score,
    confusion_matrix,
    roc_auc_score,
    classification_report,
    r2_score,
    mean_squared_error,
    mean_absolute_error
)

from scipy.stats import shapiro


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


def run_command_unix(command, input_=None, stdin=None, stdout=None, stderr=None, return_output=True, timeout=None, cwd=None):
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
            timeout=timeout,
            cwd=cwd
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

# ---------------------------------------------
# Helper function: Statistics
# --------------------------------------------- 
def regression_metrics(
    y_test, 
    predictions
):  
    """  
    Calculate and return error metrics for model predictions.  

    Parameters:  
        y_test (torch.Tensor or numpy.ndarray): Ground truth labels.  
        predictions (torch.Tensor or numpy.ndarray): Model predictions.  

    Returns:  
        dict: A dictionary containing the following metrics:  
            - RMSE (Root Mean Squared Error)  
            - MAE (Mean Absolute Error)  
            - R² (R-squared Score)  
            - MAPE (Mean Absolute Percentage Error)  
    """  
    # Convert y_test to numpy array if it's a PyTorch tensor  
    if hasattr(y_test, 'numpy'):  # Check if y_test is a PyTorch tensor  
        y_test_np = y_test.numpy()  
    else:  
        y_test_np = y_test  # Assume y_test is already a numpy array  

    # Convert predictions to numpy array if it's a PyTorch tensor  
    if hasattr(predictions, 'numpy'):  # Check if predictions is a PyTorch tensor  
        predictions_np = predictions.numpy()  
    else:  
        predictions_np = predictions  # Assume predictions is already a numpy array  

    # Calculate Root Mean Squared Error (RMSE)  
    # RMSE measures the average magnitude of the errors between predictions and actual values.  
    rmse = np.sqrt(mean_squared_error(y_test_np, predictions_np))  

    # Calculate Mean Absolute Error (MAE)  
    # MAE measures the average absolute difference between predictions and actual values.  
    mae = mean_absolute_error(y_test_np, predictions_np)  

    # Calculate R-squared (R²) Score  
    # R² measures the proportion of variance in the dependent variable that is predictable from the independent variables.  
    r2 = r2_score(y_test_np, predictions_np)  

    # Calculate Mean Absolute Percentage Error (MAPE)  
    # MAPE measures the average percentage difference between predictions and actual values.  
    # Handle division by zero by replacing zeros in y_test_np with a small value (e.g., 1e-10).  
    y_test_np_safe = np.where(y_test_np == 0, 1e-10, y_test_np)  # Avoid division by zero  
    mape = np.mean(np.abs((y_test_np_safe - predictions_np) / y_test_np_safe)) * 100  

    # Cálculo do SMAPE  
    numerator = np.abs(y_test_np - predictions_np)  
    denominator = (np.abs(y_test_np) + np.abs(predictions_np)) / 2  
    smape = 100 * np.mean(numerator / denominator)  

    # Shapiro
    shapiro_value = shapiro(y_test_np - predictions_np)[1]

    # Store metrics in a dictionary for easy access and readability  
    metrics = {  
        "RMSE": float(rmse),  # Root Mean Squared Error  
        "MAE": float(mae),    # Mean Absolute Error  
        "R2": float(r2),      # R-squared Score  
        "MAPE": float(mape),   # Mean Absolute Percentage Error 
        "SMAPE": float(smape), # Symmetric Mean Absolute Percentage Error
        "Shapiro": float(shapiro_value)  # Shapiro-Wilk p-value (Residual Normality p-value)
    }  

    return metrics  


def classification_metrics(
    y_test,
    predictions,
    average='weighted', # 'binary', 'micro', 'macro', 'weighted', None
    zero_division='warn', # 'warn', 0, 1, 'ignore'
    labels=None, # List of labels to include in the report
    pos_label=1 # For binary classification, the label of the positive class
):
    """
    Calculate and return error metrics for classification model predictions.

    Parameters:
        y_test (torch.Tensor or numpy.ndarray): Ground truth labels (true classes).
                                                Should be integer labels (e.g., 0, 1, 2...).
        predictions (torch.Tensor or numpy.ndarray): Model's predicted labels (predicted classes).
                                                     Should be integer labels.
        average (str, optional): This parameter is required for multi-class/multi-label targets.
                                 If None, the scores for each class are returned. Otherwise, this
                                 determines the type of averaging performed on the data.
                                 'binary': Only for binary targets.
                                 'micro': Calculate metrics globally by counting the total true positives,
                                          false negatives, and false positives.
                                 'macro': Calculate metrics for each label, and find their unweighted mean.
                                 'weighted': Calculate metrics for each label, and find their average
                                             weighted by support (the number of true instances for each label).
                                 Defaults to 'weighted'.
        zero_division (str or int, optional): Sets the value to return when there is a zero division.
                                              If set to 'warn', this acts as 0, but warnings are also raised.
                                              Defaults to 'warn'.
        labels (list, optional): The set of labels to include when average is not None.
                                 Defaults to None, which uses all labels in y_test and predictions.
        pos_label (int/str, optional): The label of the positive class in binary classification.
                                       Used for binary precision, recall, f1-score. Defaults to 1.

    Returns:
        dict: A dictionary containing various classification metrics.
    """
    # Convert y_test to numpy array if it's a PyTorch tensor
    if hasattr(y_test, 'numpy'):  # Check if y_test is a PyTorch tensor
        y_test_np = y_test.numpy()
    elif isinstance(y_test, list):
        y_test_np = np.array(y_test)
    else:
        y_test_np = y_test  # Assume y_test is already a numpy array

    # Convert predictions to numpy array if it's a PyTorch tensor
    if hasattr(predictions, 'numpy'):  # Check if predictions is a PyTorch tensor
        predictions_np = predictions.numpy()
    else:
        predictions_np = predictions  # Assume predictions is already a numpy array

    # Ensure integer types for classification labels
    y_test_np = y_test_np.astype(int)
    predictions_np = predictions_np.astype(int)

    metrics = {}

    # 1. Accuracy Score
    # Accuracy is the proportion of correctly classified instances.
    metrics["Accuracy"] = accuracy_score(y_test_np, predictions_np)

    # 2. Precision Score
    # Precision is the ability of the classifier not to label as positive a sample that is negative.
    try:
        metrics["Precision"] = precision_score(y_test_np, predictions_np, average=average, zero_division=zero_division, labels=labels, pos_label=pos_label)
    except ValueError as e:
        # Handle cases where 'pos_label' might be an issue for multi-class with 'binary' average
        if 'pos_label is only controlling the behavior in binary classification' in str(e):
             metrics["Precision"] = precision_score(y_test_np, predictions_np, average='weighted', zero_division=zero_division, labels=labels)
        else:
            raise e


    # 3. Recall Score (Sensitivity)
    # Recall is the ability of the classifier to find all the positive samples.
    try:
        metrics["Recall"] = recall_score(y_test_np, predictions_np, average=average, zero_division=zero_division, labels=labels, pos_label=pos_label)
    except ValueError as e:
        if 'pos_label is only controlling the behavior in binary classification' in str(e):
            metrics["Recall"] = recall_score(y_test_np, predictions_np, average='weighted', zero_division=zero_division, labels=labels)
        else:
            raise e

    # 4. F1-Score
    # F1-Score is the harmonic mean of precision and recall.
    try:
        metrics["F1-Score"] = f1_score(y_test_np, predictions_np, average=average, zero_division=zero_division, labels=labels, pos_label=pos_label)
    except ValueError as e:
        if 'pos_label is only controlling the behavior in binary classification' in str(e):
            metrics["F1-Score"] = f1_score(y_test_np, predictions_np, average='weighted', zero_division=zero_division, labels=labels)
        else:
            raise e

    # 5. Confusion Matrix
    # A table used to describe the performance of a classification model.
    # It requires integer labels.
    metrics["Confusion Matrix"] = confusion_matrix(y_test_np, predictions_np).tolist() # Convert to list for easier serialization/reading

    # 6. Classification Report (provides precision, recall, f1-score, support for each class)
    # This is a comprehensive text report.
    metrics["Classification Report"] = classification_report(y_test_np, predictions_np, labels=labels, zero_division=zero_division)

    # 7. ROC AUC Score (primarily for binary classification, but can be extended)
    # Note: For multi-class AUC, you often need prediction probabilities, not just predicted classes.
    # This function assumes 'predictions' are predicted *labels*.
    # If you have probabilities for multi-class, you'd need to adjust this.
    try:
        # Check if it's binary classification based on unique labels
        unique_labels_y_test = np.unique(y_test_np)
        unique_labels_predictions = np.unique(predictions_np)
        all_unique_labels = np.unique(np.concatenate((unique_labels_y_test, unique_labels_predictions)))

        if len(all_unique_labels) == 2: # Binary classification
            metrics["ROC AUC Score"] = roc_auc_score(y_test_np, predictions_np, average=average, labels=labels)
        elif len(all_unique_labels) > 2 and average in ['macro', 'weighted', 'micro']: # Multi-class, requiring specific averages
             # For multi-class AUC, roc_auc_score expects probabilities or a one-hot encoded format.
             # If `predictions` here are hard labels, direct AUC calculation is limited.
             # If you want proper multi-class AUC, you'd need to pass `predictions_proba` instead of `predictions`.
             # For now, we'll indicate if probabilities are needed.
             metrics["ROC AUC Score"] = "Requires prediction probabilities for multi-class."
             # If you had probabilities (e.g., `predictions_proba` array where rows sum to 1):
             # from sklearn.preprocessing import LabelBinarizer
             # lb = LabelBinarizer()
             # y_test_binarized = lb.fit_transform(y_test_np)
             # metrics["ROC AUC Score"] = roc_auc_score(y_test_binarized, predictions_proba, multi_class='ovr', average=average)
        else:
            metrics["ROC AUC Score"] = None # Not applicable or too complex for hard labels
    except Exception as e:
        metrics["ROC AUC Score"] = f"Error calculating ROC AUC: {e}"


    # Ensure all metrics are floats for consistent output
    for key, value in metrics.items():
        if isinstance(value, np.float32) or isinstance(value, np.float64):
            metrics[key] = float(value)

    return metrics