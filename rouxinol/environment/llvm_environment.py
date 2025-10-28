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

from rouxinol.utility import output_filename, run_command_unix, none_output
from rouxinol.environment import Environment


class LLVMEnvironment(Environment):
    """LLVM environment.
    """

    def __init__(
        self,
        config: None
    ):
        if not config:
            config = {
                "absolute_path": "",
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
        force = kwargs["force"] if "force" in kwargs else False

        """Check."""
        if not os.path.isabs(src_filename):
            logging.error(f"Use absolute path ({src_filename}).")
            sys.exit(1)

        if ir_directory and not os.path.isabs(ir_directory):
            logging.error(f"Use absolute path ({ir_directory}).")
            sys.exit(1)

        """The out filename."""
        _, file_type, out_filename = output_filename(
                                src_filename,
                                ir_directory, 
                                ".ll"
                            )

        if not force and os.path.isfile(out_filename):
            return out_filename, none_output()

        if ir_directory:
            os.makedirs(ir_directory, exist_ok=True)

        """The compiler."""
        compiler = os.path.join(
                        self.config["absolute_path"],
                        self.config["compiler"][file_type]
                    ) if self.config["absolute_path"] else self.config["compiler"][file_type]
        command = f"{compiler} -S -c -Xclang -disable-O0-optnone {flags} -emit-llvm {src_filename} -o {out_filename}"

        """Compile to IR."""
        return out_filename, run_command_unix(command, timeout=timeout)

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
        linker_flags = kwargs["linker_flags"] if "linker_flags" in kwargs else ""
        timeout = kwargs["timeout"] if "timeout" in kwargs else None
        force = kwargs["force"] if "force" in kwargs else False

        """Check."""
        if not os.path.isabs(src_filename):
            logging.error(f"Use absolute path ({src_filename}).")
            sys.exit(1)

        if exec_directory and not os.path.isabs(exec_directory):
            logging.error(f"Use absolute path ({exec_directory}).")
            sys.exit(1)

        """The out filename."""
        _, file_type, out_filename = output_filename(
                                        src_filename,
                                        exec_directory,
                                        ""
                                    )

        if not force and os.path.isfile(out_filename):
            return out_filename, none_output()

        if exec_directory:
            os.makedirs(exec_directory, exist_ok=True)

        """The compiler."""
        compiler = os.path.join(
                        self.config["absolute_path"],
                        self.config["compiler"][file_type]
                    ) if self.config["absolute_path"] else self.config["compiler"][file_type]
        command = f"{compiler} {flags} {src_filename} -o {out_filename} {linker_flags} -lm"

        """Compile to exe."""
        return out_filename, run_command_unix(command, timeout=timeout)

    def ir_to_exec(
            self,
            ir_filename,
            flags="",
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
        linker_flags = kwargs["linker_flags"] if "linker_flags" in kwargs else ""
        timeout = kwargs["timeout"] if "timeout" in kwargs else None
        force = kwargs["force"] if "force" in kwargs else False

        """Check."""
        if not os.path.isabs(ir_filename):
            logging.error(f"Use absolute path ({ir_filename}).")
            sys.exit(1)

        if exec_directory and not os.path.isabs(exec_directory):
            logging.error(f"Use absolute path ({exec_directory}).")
            sys.exit(1)

        """The out filename."""
        _, _, out_filename = output_filename(
                                ir_filename,
                                exec_directory,
                                ""
                            )

        if not force and os.path.isfile(out_filename):
            return out_filename, none_output()

        """The compiler."""
        src_filename = linecache.getline(ir_filename, 2).replace("\n", "").replace('"', '')
        idx = src_filename.rfind(".")
        src_type = src_filename[idx+1:] if src_filename[idx+1:] == "c" else "cxx"

        compiler = os.path.join(
                        self.config["absolute_path"],
                        self.config["compiler"][src_type]
                    ) if self.config["absolute_path"] else self.config["compiler"][src_type]
        command = f"{compiler} {flags} {ir_filename} -o {out_filename} {linker_flags} -lm"

        """Compile to exe."""
        if exec_directory:
            os.makedirs(exec_directory, exist_ok=True)

        return out_filename, run_command_unix(command, timeout=timeout)

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
        force = kwargs["force"] if "force" in kwargs else False

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
        
        if not force and os.path.isfile(out_filename):
            return out_filename, none_output()

        """The optimizer."""
        optimizer = os.path.join(
                        self.config["absolute_path"],
                        self.config["optimizer"]
                    ) if self.config["absolute_path"] else self.config["optimizer"]        
        command = f"{optimizer} -S {flags} {ir_filename} -o {out_filename}"

        """Optimize."""
        if ir_directory:
            os.makedirs(ir_directory, exist_ok=True)

        return out_filename, run_command_unix(command, timeout=timeout)

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
        use_stdin = kwargs["use_stdin"] if "use_stdin" in kwargs else None
        timeout = kwargs["timeout"] if "timeout" in kwargs else None
        exec_directory = kwargs["exec_directory"] if "exec_directory" in kwargs else "/tmp"
        linker_flags = kwargs["linker_flags"] if "linker_flags" in kwargs else ""
        force = kwargs["force"] if "force" in kwargs else False

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
                                linker_flags=linker_flags,
                                timeout=timeout,
                                force=force
                            )

        if not exec_filename:
            return False

        output = run_command_unix(command, input=input_data, timeout=timeout)

        if output['returncode'] == 0:
            return cleanup(output['stdout']) == cleanup(output_data)

        return False

