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
import linecache
import subprocess

from absl import logging

from rouxinol.utility import output_filename, execute_command_line
from rouxinol.environment.environment import Environment


class LLVMEnvironment(Environment):
    """LLVM environment.
    """

    def __init__(
        self,
        config: None
    ):
        if not config:
            config = {
                "absolute_path": "/usr/bin",
                "compiler": {"c": "clang", "cxx": "clang++"},
                "optimizer": "opt"
            }
        super().__init__(config)

    def src_to_ir(
        self,
        src_filename,
        flags,
        *args,
        **kwargs
    ):
        """Generate an LLVM IR file.

        :param src_filename: The source code filename.

        :param flags: The compiler flags.

        :param timeout: The timeout in seconds.

        :param ir_directory: The out directory.

        :return: The ir filename.
        """

        """Parameters"""
        ir_directory = kwargs["ir_directory"] if "ir_directory" in kwargs else ""
        timeout = kwargs["timeout"] if "timeout" in kwargs else None

        """Check."""
        if not os.path.isabs(src_filename):
            logging.error(f"Use absolute path ({src_filename}).")
            sys.exit(1)

        if ir_directory and not os.path.isabs(ir_directory):
            logging.error(f"Use absolute path ({ir_directory}).")
            sys.exit(1)

        """The out filename."""
        if ir_directory:
            os.makedirs(ir_directory, exist_ok=True)

        _, file_type, out_filename = output_filename(
                                        src_filename,
                                        ir_directory, 
                                        ".ll"
                                    )

        """The compiler."""
        compiler = os.path.join(self.config["absolute_path"], self.config["compiler"][file_type])
        cmdline = f"{compiler} -S -c -Xclang -disable-O0-optnone {flags} -emit-llvm {src_filename} -o {out_filename}"

        """Compile to IR."""
        _, errs = execute_command_line(
                    cmdline,
                    "",
                    False,
                    True,
                    timeout
                ) 

        if not errs:
            return out_filename
        else:
            logging.error(
                f"Source -> IR ({src_filename})."
            )
            return False

    def src_to_exec(
        self,
        src_filename,
        flags,
        *args,
        **kwargs
    ):
        """Generate an executable file.

        :param src_filename: The source code filename.

        :param flags: The compiler flags.

        :param timeout: The timeout in seconds.

        :param exec_directory: The exec (output) directory.

        :return: The exec filename.
        """

        """Parameters"""
        exec_directory = kwargs["exec_directory"] if "exec_directory" in kwargs else ""
        libs = kwargs["libs"] if "libs" in kwargs else ""
        timeout = kwargs["timeout"] if "timeout" in kwargs else None

        """Check."""
        if not os.path.isabs(src_filename):
            logging.error(f"Use absolute path ({src_filename}).")
            sys.exit(1)

        if exec_directory and not os.path.isabs(exec_directory):
            logging.error(f"Use absolute path ({exec_directory}).")
            sys.exit(1)

        """The out filename."""
        if exec_directory:
            os.makedirs(exec_directory, exist_ok=True)

        _, file_type, out_filename = output_filename(
                                        src_filename,
                                        exec_directory,
                                        ""
                                    )

        """The compiler."""
        compiler = os.path.join(
                        self.config["absolute_path"],
                        self.config["compiler"][file_type]
                    )
        cmdline = f"{compiler} {flags} {src_filename} -o {out_filename} {libs} -lm"

        """Compile to exe."""
        _, errs = execute_command_line(
                    cmdline,
                    "",
                    False,
                    True,
                    timeout
                ) 

        if not errs:
            return out_filename
        else:
            logging.error(
                f"Source -> Exec ({src_filename})."
            )
            return False

    def ir_to_exec(
            self,
            ir_filename,
            flags,
            *args,
            **kwargs
    ):
        """Generate an executable file.

        :param ir_filename: The IR code filename.

        :param flags: The compiler flags.

        :param timeout: The timeout in seconds.

        :param exec_directory: The exec (output) directory.

        :return: The ir filename.
        """

        """Parameters"""
        exec_directory = kwargs["exec_directory"] if "exec_directory" in kwargs else ""
        libs = kwargs["libs"] if "libs" in kwargs else ""
        timeout = kwargs["timeout"] if "timeout" in kwargs else None

        """Check."""
        if not os.path.isabs(ir_filename):
            logging.error(f"Use absolute path ({ir_filename}).")
            sys.exit(1)

        if exec_directory and not os.path.isabs(exec_directory):
            logging.error(f"Use absolute path ({exec_directory}).")
            sys.exit(1)

        """The out filename."""
        _, file_type, out_filename = output_filename(ir_filename, exec_directory, "")

        """The compiler."""
        src_filename = linecache.getline(ir_filename, 2).replace("\n", "").replace('"', '')
        idx = src_filename.rfind(".")
        src_type = src_filename[idx+1:] if src_filename[idx+1:] == "c" else "cxx"

        compiler = os.path.join(self.config["absolute_path"], self.config["compiler"][src_type])
        cmdline = f"{compiler} {flags} {ir_filename} -o {out_filename} {libs} -lm"

        """Compile to exe."""
        if exec_directory:
            os.makedirs(exec_directory, exist_ok=True)

        _, errs = execute_command_line(
                        cmdline,
                        "",
                        False,
                        True,
                        timeout
                    ) 

        if not errs:
            return out_filename
        else:
            logging.error(
                f"IR -> Exec ({ir_filename})."
            )
            return False

    def optimize_ir(
            self,
            ir_filename,
            flags,
            *args,
            **kwargs
    ):
        """Generate an optimized file.

        :param ir_filename: The IR code filename.

        :param flags: The compiler flags.

        :param timeout: The timeout in seconds.

        :param ir_directory: The ir (output) directory.

        :return: The ir filename.
        """

        """Parameters"""
        ir_directory = kwargs["ir_directory"] if "ir_directory" in kwargs else ""
        timeout = kwargs["timeout"] if "timeout" in kwargs else None

        """Check."""
        if not os.path.isabs(ir_filename):
            logging.error(f"Use absolute path ({ir_filename}).")
            sys.exit(1)

        if ir_directory and not os.path.isabs(ir_directory):
            logging.error(f"Use absolute path ({ir_directory}).")
            sys.exit(1)

        """The out filename."""
        _, file_type, out_filename = output_filename(
                                        ir_filename,
                                        ir_directory,
                                        ".ll"
                                    )

        """The optimizer."""
        optimizer = os.path.join(self.config["absolute_path"], self.config["optimizer"])
        cmdline = f"{optimizer} {flags} {ir_filename} -o {out_filename}"

        """Optimize."""
        if ir_directory:
            os.makedirs(ir_directory, exist_ok=True)

        _, errs = execute_command_line(
                    cmdline,
                    "",
                    False,
                    True,
                    timeout
                ) 

        if not errs:
            return out_filename
        else:
            logging.error(
                f"IR -> IR ({ir_filename})."
            )
            return False

    def validate_output(
            self,
            src_filename,
            flags,
            *args,
            **kwargs
    ):
        """Validate the program execution.

        :param src_filename: The source code filename.

        :param flags: The compiler flags.

        :return: True if execution OK.
        """

        def cleanup(output):
            new_output = output[:]
            for ch in ["\n", "\t", " "]:
                if ch in new_output:
                    new_output = new_output.replace(ch, "")
            return new_output

        """Parameters"""
        input_data = kwargs["input_data"] if "input_data" in kwargs else ""
        output_data = kwargs["output_data"] if "output_data" in kwargs else ""
        use_stdin = kwargs["use_stdin"] if "use_stdin" in kwargs else False
        timeout = kwargs["timeout"] if "timeout" in kwargs else None
        exec_directory = kwargs["exec_directory"] if "exec_directory" in kwargs else "/tmp"

        """Check."""
        if not os.path.isabs(src_filename):
            logging.error(f"Use absolute path ({src_filename}).")
            sys.exit(1)

        if exec_directory and not os.path.isabs(exec_directory):
            logging.error(f"Use absolute path ({exec_directory}).")
            sys.exit(1)

        """Compile the program."""
        exec_filename = self.src_to_exec(
                                src_filename,
                                flags,
                                exec_directory=exec_directory,
                                timeout=timeout
                            )

        if not exec_filename:
            return False

        """Execute the program."""
        outs, _ = execute_command_line(
                        exec_filename,
                        input_data,
                        use_stdin,
                        False,
                        timeout
                    ) 
        try:
            outs = outs.decode() if type(outs) == bytes else outs
            output_data = output_data.decode() if type(output_data) == bytes else output_data
        except Exception:
            return False

        outs = cleanup(outs)
        output_data = cleanup(output_data)

        return outs == output_data

