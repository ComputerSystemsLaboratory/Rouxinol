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

# Thaís Damásio, Michael Canesche, Vinícius Pacheco, Marcus
# Botacin, Anderson Faustino da Silva, and Fernando M. Quintão
# Pereira. 2023. A Game-Based Framework to Compare Program
# Classifiers and Evaders. In Proceedings of the 21st ACM/IEEE
# International Symposium on Code Generation and Optimization
# (CGO 2023). Association for Computing Machinery, New York, NY,
# USA, 108–121. https://doi.org/10.1145/3579990.3580012

#
# Exploration
#

import os
import sys
import shutil

import yaml as yl
import numpy as np
import pickle as pk

from random import shuffle

from dataclasses import dataclass

from absl import app, flags, logging

from sklearn.metrics import f1_score
from sklearn.metrics import confusion_matrix

from rouxinol import transformer as T
from rouxinol.code4ml import OpenJudge
from rouxinol.utility import multiple_file_types
from rouxinol.environment import LLVMEnvironment
from rouxinol.learning.supervised.classification import sequence as S
from rouxinol.learning.supervised.classification import graph as G


@dataclass
class ExplorationFlags(object):
    compiler_dir: str
    c_compiler: str
    cxx_compiler: str
    optimizer: str
    representation: str
    game: int
    model: str
    min_max: bool
    test_size: float
    num_rounds: int
    ir_directory: str
    code4ml_directory: str
    results_filename: str
    shuffle: bool
    timeout: int
    exec_directory: str
    num_classes

    @property
    def game0(
        self
    ):
        return {
            "train": ["O0", "O1", "O2", "O3"],
            "test": ["O0", "O1", "O2", "O3"]
        }

    @property
    def game1(
        self
    ):
        return {
            "train": ["O0"],
            "test": ["fla", "bcf", "sub", "ollvm"]
        }

    @property
    def game2(
        self
    ):
        return {
            "train": ["fla", "bcf", "sub", "ollvm"],
            "test": ["fla", "bcf", "sub", "ollvm"]
        }

    @property
    def game3(
        self
    ):
        return {
            "train": ["O3"],
            "test": ["fla.O3", "bcf.O3", "sub.O3", "ollvm.O3"]
        }

    @property
    def config(
        self
    ):
        return {
            "absolute_path": self.compiler_dir,
            "compiler": {
                "c": self.c_compiler,
                "cxx": self.cxx_compiler
            },
            "optimizer": self.optimizer
        }


class Exploration(object):
    def __init__(
        self,
        compiler_dir,
        c_compiler,
        cxx_compiler,
        optimizer,
        representation,
        game,
        model,
        min_max,
        test_size,
        num_rounds,
        ir_directory,
        code4ml_directory,
        results_filename,
        shuffle,
        timeout,
        exec_directory,
        num_classes
   ):
        self.flags = ExplorationFlags(
            compiler_dir,
            c_compiler,
            cxx_compiler,
            optimizer,
            representation,
            game,
            model,
            min_max,
            test_size,
            num_rounds,
            ir_directory,
            code4ml_directory,
            results_filename,
            shuffle,
            timeout,
            exec_directory,
            num_classes
       )

    def _transform(
        self,
        data,
        transformer
    ):
        ### The environment
        env = LLVMEnvironment(self.flags.config)

        ### Transform
        data_transform = []
        for sample in data:
            path, _ = os.path.split(sample["x"])
            _, problem = os.path.split(path)
            input_directory = os.path.join(self.flags.code4ml_directory, problem, "info", "input.txt")
            input_data = f"< {input_directory}"
            rep = transformer.from_ir(
                sample["x"],
                env=env,
                exec_directory=self.flags.exec_directory,
                input_data=input_data,
                timeout=self.flags.timeout
            )
            if not rep:
                continue
            data_transform.append({"x": rep, "y": sample["y"]})

        return data_transform

    def _ir_to_representation(
        self,
        train,
        test
    ):
        ### Train/Test split
        samples_directory = os.path.join(self.flags.ir_directory, train)
        folders = [
            os.path.join(samples_directory, subdir)
            for subdir in os.listdir(samples_directory)
            if os.path.isdir(os.path.join(samples_directory, subdir))
        ]
        folders.sort()

        data_train = []
        data_test = []
        for i, folder in enumerate(folders):
            samples = multiple_file_types(
                        folder,
                        "*.ll"
                    )
            samples.sort()
            if self.flags.shuffle:
                shuffle(samples)

            local_data_train = [
                {"x": sample, "y": i}
                for sample in samples[:int(len(samples)*(1.0-self.flags.test_size))]
            ]
            local_data_test = [
                {"x": sample.replace(train, test), "y": i}
                for sample in samples[int(len(samples)*(1.0-self.flags.test_size)):]
            ]
            data_train.extend(local_data_train)
            data_test.extend(local_data_test)

            if self.flags.num_classes == i + 1:
                break

        ### Transformer
        transformer_dict = {
            "ir2vec": T.IR2Vec,
            "inst2vec": T.Inst2Vec,
            "cfggrind_cfg": T.CFGgrindCFGCallGraph,
            "cfggrind_cfg_compact": T.CFGgrindCFGCallCompactGraph,
            "llvm_cfg": T.CFGCallGraph,
            "llvm_cfg_compact": T.CFGCallCompactGraph,
            "llvm_cdfg": T.CDFGCallGraph,
            "llvm_cfdg_compact": T.CDFGCallCompactGraph,
            "llvm_cdfg_plus": T.CDFGPlusGraph,
            "llvm_programl": T.ProGraMLGraph,
            "llvm_inst_count": T.LLVMInstCount,
            "cfggrind_static_inst_count": T.CFGgrindStaticInstCount,
            "cfggrind_dynamic_inst_count": T.CFGgrindDynamicInstCount,
        }
        transformer_class = transformer_dict[self.flags.representation]
        transformer = transformer_class()

        data_train = self._transform(
                                data_train,
                                transformer
                            )
        data_test = self._transform(
                                data_test,
                                transformer
                            )
        if self.flags.representation in ["ir2vec"]:
            num_types, tokens = 300, 300
        elif self.flags.representation in ["inst2vec"]:
            num_types, tokens = 200, 200
        elif self.flags.representation in ["cfggrind_cfg", "cfggrind_cfg_compact"]: 
            num_types, tokens = transformer.cfggrind_graph_builder.num_tokens(), transformer.cfggrind_graph_builder.get_tokens()
        elif self.flags.representation in ["llvm_cfg", "llvm_cdfg", "llvm_cfdg_compact", "llvm_cdfg_plus", "llvm_programl"]:
            num_types, tokens = transformer.llvm_graph_builder.num_tokens(), transformer.llvm_graph_builder.get_tokens()
        elif self.flags.representation in ["llvm_inst_count"]:
            num_types, tokens = transformer.llvm_inst_builder.num_tokens(), transformer.llvm_inst_builder.get_tokens()
        elif self.flags.representation in ["cfggrind_static_inst_count", "cfggrind_dynamic_inst_count"]:
            num_types, tokens = transformer.cfggrind_inst_builder.num_tokens(), transformer.cfggrind_inst_builder.get_tokens()

        ### Fix data
        if self.flags.representation in [
                                            "llvm_inst_count",
                                            "cfggrind_static_inst_count",
                                            "cfggrind_dynamic_inst_count"
                                        ]:
            tokens.sort()
            data_train = [
                {"x": [item["x"][key] if key in item["x"] else 0 for key in tokens], "y": item["y"]}
                for item in data_train
            ]
            data_test = [
                {"x": [item["x"][key] if key in item["x"] else 0 for key in tokens], "y": item["y"]}
                for item in data_test
            ]

        return {"train": data_train, "test": data_test, "num_types": num_types}

    def run(
        self
    ):
        ### Dataset
        _ = OpenJudge()

        ### Game
        game = {
            0: self.flags.game0,
            1: self.flags.game1,
            2: self.flags.game2,
            3: self.flags.game3
        }
        game = game[self.flags.game]
        is_symetric = True if self.flags.game == 0 or self.flags.game == 2 else False

        ### Select the model
        models = {
            "rf": S.RandomForestModel,
            "lr": S.LogisticRegressionModel,
            "mlp": S.MultiLayerPerceptronModel,
            "knn": S.KNeighborsModel,
            "svm": S.SupportVectorMachineModel,
            "xgb": S.XGBoostModel,
            "lstm": S.TfLSTMModel,
            "ggnn": G.GGNNModel
        }
        model_class = models[self.flags.model]

        ### Run the classification
        results = {}
        for train in game["train"]:
            for test in game["test"]:
                if is_symetric and train != test:
                    continue

                if not train in results:
                    results[train] = {}
                results[train][test] = []

                data = self._ir_to_representation(
                                train,
                                test
                            )

                for i in range(self.flags.num_rounds):
                    if self.flags.representation in ["llvm_cfg", "llvm_cdfg", "llvm_cfdg_compact", "llvm_cdfg_plus", "llvm_programl"]:
                        config = {
                            "num_timesteps": 4,
                            "hidden_size_orig": data["num_types"],
                            "gnn_h_size": 32,
                            "num_edge_types": 4,
                            "learning_rate": 0.001,
                            "batch_size": 64,
                            "num_epochs": 1000,
                            "early_stopping": 1,
                            "restore_best_weights": 1,
                            "patience": 100,
                            "num_classes": self.flags.num_classes,
                        }
                        model = model_class(config=config, num_types=data["num_types"])
                    else:
                        model = model_class(num_types=data["num_types"])
                    train_summary = model.train(
                        data["train"],
                        data["test"]
                    )
                    acc, _ = model.predict(data["test"])
                    results[train][test].append(acc)

        with open(self.flags.results_filename, "w") as f:
            yl.dump(results, f, default_flow_style=False)


def main(argv):
    """Source -> LLVM."""
    del argv

    FLAGS = flags.FLAGS

    if not os.path.isdir(FLAGS.ir_directory):
        logging.error("LLVM IR directory does not exist.")
        sys.exit(1)

    exploration = Exploration(
        compiler_dir=FLAGS.compiler_dir,
        c_compiler=FLAGS.c_compiler,
        cxx_compiler=FLAGS.cxx_compiler,
        optimizer=FLAGS.optimizer,
        representation=FLAGS.representation,
        game=FLAGS.game,
        model=FLAGS.model,
        min_max=FLAGS.min_max,
        test_size=FLAGS.test_size,
        num_rounds=FLAGS.num_rounds,
        ir_directory=FLAGS.ir_directory,
        code4ml_directory=FLAGS.code4ml_directory,
        results_filename=FLAGS.results_filename,
        shuffle=FLAGS.shuffle,
        timeout=FLAGS.timeout,
        exec_directory=FLAGS.exec_directory
        num_classes=FLAGS.num_classes
    )

    exploration.run()


# Execute
if __name__ == "__main__":
    # app
    flags.DEFINE_string(
        "compiler_dir",
        "/usr/bin",
        "Compiler directory (absolute path)"
    )
    flags.DEFINE_string(
        "c_compiler",
        "clang",
        "C Compiler"
    )
    flags.DEFINE_string(
        "cxx_compiler",
        "clang++",
        "C++ Compiler"
    )
    flags.DEFINE_string(
        "optimizer",
        "opt",
        "Optimizer"
    )
    flags.DEFINE_string(
        "ir_directory",
        None,
        "LLVM IR directory"
    )
    flags.DEFINE_string(
        "exec_directory",
        "/tmp",
        "EXEC directory"
    )
    flags.DEFINE_string(
        "code4ml_directory",
        None,
        "Code4ML directory"
    )
    flags.DEFINE_string(
        "results_filename",
        "results.yl",
        "Results filename"
    )
    flags.DEFINE_integer(
        "game",
        0,
        "The game"
    )
    flags.DEFINE_integer(
        "num_classes",
        100,
        "Number of classes"
    )
    flags.DEFINE_enum(
        "model",
        "rf",
        ["rf", "lr", "mlp", "knn", "svm", "xgb", "lstm", "ggnn"],
        "Model"
    )
    flags.DEFINE_boolean(
        "min_max",
        False,
        "Use min_max_scaler"
    )
    flags.DEFINE_float(
        "test_size",
        0.2,
        "Test size"
    )
    flags.DEFINE_integer(
        "random_state",
        42,
        "Split data random state (-1 == None)"
    )
    flags.DEFINE_integer(
        "num_rounds",
        10,
        "Number of rounds"
    )
    flags.DEFINE_integer(
        "timeout",
        20,
        "Timeout"
    )
    flags.DEFINE_enum(
        "representation",
        "llvm_inst_count",
        [
            "ir2vec",
            "inst2vec",
            "cfggrind_cfg",
            "cfggrind_cfg_compact",
            "llvm_cfg",
            "llvm_cfg_compact",
            "llvm_cdfg",
            "llvm_cfdg_compact",
            "llvm_cdfg_plus",
            "llvm_programl",
            "llvm_inst_count",
            "cfggrind_static_inst_count",
            "cfggrind_dynamic_inst_count",
       ],
        "The representation"
    )
    flags.DEFINE_boolean(
        "shuffle",
        False,
        "Shuffle the samples"
    )
    flags.mark_flag_as_required(
        "ir_directory"
    )
    flags.mark_flag_as_required(
        "code4ml_directory"
    )


    app.run(main)
