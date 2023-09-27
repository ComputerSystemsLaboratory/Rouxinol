"""
Copyright 2023 Anderson Faustino da Silva.

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
"""

"""
Generate histograms
"""

#
# Games
#

import os
import sys
import yaml as yl

from typing import Dict, Optional, List, Tuple
from absl import app, flags, logging

from dataclasses import dataclass, make_dataclass

from rouxinol import environment as E
from rouxinol import transformer as T
from rouxinol.model import sequence as S
from rouxinol.utilities import Dataset


def filename_type(filename: str) -> Tuple:
    """Return the file type."""
    basename = os.path.basename(filename)
    idx = basename.rfind(".")
    return basename[:idx], basename[idx+1:]


def samples_to_rep(args: Tuple) -> List:
    (
        X_samples,
        y_samples,
        transformer,
        environment,
        flags,
        output_directory,
        is_cfggrind_histogram,
        cfggrind_representation,
        dataset_input_output,
        dataset_input_data
    ) = args

    compiler_level = flags["level"]
    obfuscation_flags = flags["obfuscation"]
 
    for idx, X_sample in enumerate(X_samples):
        filename, ftype = filename_type(X_sample)
        y_sample = y_samples[idx]

        comp_flags = flags["c_flags"] if ftype == "c" else flags["cxx_flags"]
        compiler_flags = f"{compiler_level} {comp_flags} {obfuscation_flags}"
        
        ir_dir = os.path.join(output_directory, "ir", str(y_sample))
        exec_dir = os.path.join(output_directory, "exec", str(y_sample))
        rep_dir = os.path.join(output_directory, "rep", str(y_sample))

        os.makedirs(ir_dir, exist_ok=True)
        os.makedirs(exec_dir, exist_ok=True)
        os.makedirs(rep_dir, exist_ok=True)

        ir_filename = environment.src_to_ir(
                        X_sample,
                        compiler_flags,
                        ir_directory=ir_dir
                        )
        if is_cfggrind_histogram:
            input_data = f"< {dataset_input_output}/{y_sample}/{dataset_input_data}"
            static, dynamic = transformer.from_ir(
                                ir_filename,
                                flags=compiler_flags,
                                input_data=input_data,
                                exec_directory=exec_dir,
                                env=environment
                            )
            with open(os.path.join(rep_dir, f"{filename}_static.yl"), "w") as fout:
                yl.dump(static, fout, default_flow_style=False)
            with open(os.path.join(rep_dir, f"{filename}_dynamic.yl"), "w") as fout:
                yl.dump(dynamic, fout, default_flow_style=False)
            representation = static if cfggrind_representation == "static" else dynamic
        else:
            representation = transformer.from_ir(
                                ir_filename
                            )
            with open(os.path.join(rep_dir, f"{filename}.yl"), "w") as fout:
                yl.dump(representation, fout, default_flow_style=False)


def play_game(config: dataclass) -> None:
    """Play a game."""

    ### The LLVM environment
    env = E.LLVMEnvironment(config.environment["tools"])

    ### The Dataset
    dataset = Dataset(config.dataset["benchmarks"])
    X_train, X_test, X_val, y_train, y_test, y_val = dataset.split_dataset(
                                                        config.model["config"]["num_classes"],
                                                        config.dataset["test_size"],
                                                        config.dataset["validation_size"]
                                                    )

    X_train.extend(X_test)
    y_train.extend(y_test)
    if X_val:
        X_train.extend(X_val)
        y_train.extend(y_val)

    ### The transformer
    transformer = {
        "llvm_histogram": T.LLVMHistogram,
        "cfggrind_histogram": T.CFGgrindHistogram
    }
    transformer_class = transformer[config.representation["type"]]
    transformer = transformer_class()

    ### Verify if the representation is based on CFGgrind
    is_cfggrind_histogram = config.representation["type"] == "cfggrind_histogram" 

    ### Extract the representation
    # Train data
    args = (
        X_train,
        y_train,
        transformer,
        env,
        config.compiler_flags["train"],
        config.output_absolute_path,
        is_cfggrind_histogram,
        config.representation["cfggrind"],
        config.dataset["input_output"],
        config.dataset["input_data"]
    )
    samples_to_rep(args)


def main(argv):
    """Source -> LLVM."""
    del argv

    if not os.path.isfile(flags.FLAGS.config):
        logging.error("Configuration file does not exist.")
        sys.exit(1)

    with open(flags.FLAGS.config, "r") as fin:
        config_yl = yl.load(fin)

    Config = make_dataclass("Args", config_yl.keys())
    config = Config(**config_yl)
    play_game(config)


# Execute
if __name__ == "__main__":
    # app
    flags.DEFINE_string(
        "config",
        None,
        "Configuration filename"
    )

    flags.mark_flag_as_required(
        "config"
    )

    app.run(main)
