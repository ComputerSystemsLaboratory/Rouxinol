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
Thaís Damásio, Michael Canesche, Vinícius Pacheco, Marcus
Botacin, Anderson Faustino da Silva, and Fernando M. Quintão
Pereira. 2023. A Game-Based Framework to Compare Program
Classifiers and Evaders. In Proceedings of the 21st ACM/IEEE
International Symposium on Code Generation and Optimization
(CGO 2023). Association for Computing Machinery, New York, NY,
USA, 108–121. https://doi.org/10.1145/3579990.3580012
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
        label,
        X_samples,
        y_samples,
        transformer,
        environment,
        flags,
        output_directory,
        is_cfggrind_histogram,
        cfggrind_representation,
        dataset_input_output,
        dataset_input_data,
        dataset_input_type
    ) = args


    print(output_directory)
    compiler_level = flags["level"]
    obfuscation_flags = flags["obfuscation"]
 
    representation_list = []

    for idx, X_sample in enumerate(X_samples):
        filename, ftype = filename_type(X_sample)
        y_sample = y_samples[idx]

        comp_flags = flags["c_flags"] if ftype == "c" else flags["cxx_flags"]
        compiler_flags = f"{compiler_level} {comp_flags} {obfuscation_flags}"

        ir_filename = environment.src_to_ir(
                        X_sample,
                        compiler_flags,
                        output_directory=os.path.join(output_directory, label, "ir", str(y_sample))
                        )

        out_dir = os.path.join(output_directory, label, "rep", str(y_sample))
        os.makedirs(out_dir, exist_ok=True)

        if is_cfggrind_histogram:
            exec_filename = environment.ir_to_exec(
                                ir_filename,
                                "",
                                output_directory=os.path.join(output_directory, label, "exec", str(y_sample))
                            )

            if dataset_input_type == "stdin":
                input_ = f"< {dataset_input_output}/{y_sample}/{dataset_input_data}"
            else:
                input_ = dataset_input_data

            static, dynamic = transformer.from_exec(
                                exec_filename,
                                input_data=input_
                            )

            with open(os.path.join(out_dir, f"{filename}_static.yl"), "w") as fout:
                yl.dump(static, fout, default_flow_style=False)

            with open(os.path.join(out_dir, f"{filename}_dynamic.yl"), "w") as fout:
                yl.dump(dynamic, fout, default_flow_style=False)

            representation = static if cfggrind_representation == "static" else dynamic

        else:
            representation = transformer.from_ir(
                                ir_filename
                            )

            with open(os.path.join(out_dir, f"{filename}.yl"), "w") as fout:
                yl.dump(representation, fout, default_flow_style=False)

        representation_list.append(representation)

    return representation_list


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
        "train",
        X_train,
        y_train,
        transformer,
        env,
        config.compiler_flags["train"],
        config.output_absolute_path,
        is_cfggrind_histogram,
        config.representation["cfggrind"],
        config.dataset["input_output"],
        config.dataset["input_data"],
        config.dataset["input_type"]
    )
    X_train = samples_to_rep(args)

    # Test data
    args = (
        "test",
        X_test,
        y_test,
        transformer,
        env,
        config.compiler_flags["test"],
        config.output_absolute_path,
        is_cfggrind_histogram,
        config.representation["cfggrind"],
        config.dataset["input_output"],
        config.dataset["input_data"],
        config.dataset["input_type"]
    )
    X_test = samples_to_rep(args)

    # Validattion data
    if X_val:
        args = (
            "val",
            X_val,
            y_val,
            transformer,
            env,
            config.compiler_flags["test"],
            config.output_absolute_path,
            is_cfggrind_histogram,
            config.representation["cfggrind"],
            config.dataset["input_output"],
            config.dataset["input_data"],
            config.dataset["input_type"]
        )
        X_val = samples_ro_rep(args)

    ### Run the model
    # Prepare the data
    data_train, data_test, data_val, num_types, max_val_type = dataset.preprocess_histograms(X_train, y_train, X_test, y_test, X_val, y_val)

    # The model
    models = {
        "rf": S.RandomForestModel,
        "lr": S.LogisticRegressionModel,
        "mlp": S.MultiLayerPerceptronModel,
        "knn": S.KNeighborsModel,
        "svm": S.SupportVectorMachineModel,
        "lstm": S.TfLSTMModel
    }
    model = models[config.model["type"]]
    model_ = model(num_types=max_val_type)

    # Run
    train_summary = model_.train(data_train, data_test)
    acc, _ = model_.predict(data_test)
    print("\n\nAccuracy:", acc, "\n\n")


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
