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
import resource
import subprocess
import itertools as it


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

