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


#
# Generate LLVM code
#

import os
import sys
import glob as gl
import yaml as yl
import pandas as pd

from absl import app, flags, logging
  
from sklearn.model_selection import train_test_split  
from sklearn.ensemble import RandomForestClassifier  
from sklearn.metrics import accuracy_score, classification_report, confusion_matrix

from rouxinol.dataset import OpenJudge
from rouxinol.environment import LLVMEnvironment
from rouxinol.transformer import CFGgrindHistogramBuilder, CFGgrindDynamicHistogramVisitor


class CFGgrindDynamicCost(object):
    def __init__(
        self,
        flags
    ):
        self.flags = flags
        self.elapsed_compilation = 0.0
        self.code4ml = OpenJudge()
        self.builder = CFGgrindHistogramBuilder()

    def filter_dataset(
        self
    ):
        data = self.code4ml.select_problems_and_samples(
                    num_problems=self.flags.num_problems,
                    languages={self.flags.language: self.flags.num_samples}
                )

        if not data:
            logging.error("There is not enough data.")
            sys.exit(1)

        return data

    def create_histogram(
        self,
        data
    ):
        ### Environment
        env_config = {
            "absolute_path": self.flags.compiler_dir,
            "compiler": {"c": self.flags.c_compiler, "cxx": self.flags.cxx_compiler},
            "optimizer": self.flags.optimizer
        }
        env = LLVMEnvironment(env_config)

        ### Generate Histogram from source
        for problem, samples in data.items():
            problem_name = os.path.basename(problem)

            histogram_dir = os.path.join(self.flags.preprocess_directory, "histogram", problem_name)
            os.makedirs(histogram_dir, exist_ok=True)

            for sample in samples:
                ### EXEC
                flags = self.flags.c_flags if sample.endswith(".c") else self.flags.cxx_flags
                flags += " " + self.flags.compiler_flags
                exec_filename, elapsed = env.src_to_exec(
                                            sample,
                                            flags,
                                            exec_directory=os.path.join(self.flags.preprocess_directory, "exec", problem_name),
                                            timeout=self.flags.timeout
                )
                self.elapsed_compilation += elapsed
                
                ### CFGgrind dynamic histogram
                input_data = os.path.join(self.code4ml.content_dir, problem_name, "info", "input.txt")
                self.builder.string_to_info(
                        exec_filename,
                        input_data,
                        stdin=True,
                        timeout = self.flags.timeout
                )
                histogram = self.builder.info_to_representation(
                                CFGgrindDynamicHistogramVisitor
                )
                histogram_filename = os.path.join(histogram_dir, f"{os.path.basename(exec_filename)}.yml")
                with open(histogram_filename, "w") as fout:
                    yl.dump(histogram, fout)

        elapsed = {"compilation": self.elapsed_compilation, "histogram": self.builder.get_elapsed()}
        elapsed_filename = os.path.join(self.flags.preprocess_directory, "elapsed.yml")
        with open(elapsed_filename, "w") as fout:
            yl.dump(elapsed, fout)

    def classify(
        self
    ):
        X = []
        y = []
 
        histogram_dir = os.path.join(self.flags.preprocess_directory, "histogram")

        problems = gl.glob(os.path.join(histogram_dir, "p*"))
        for problem_key, problem in enumerate(problems):
            histograms = gl.glob(os.path.join(problem, "*.yml"))
            histogram_samples = len(histograms)

            for histogram_key, histogram in enumerate(histograms):
                with open(histogram, "r") as fin:
                    cfggrind_hist = yl.load(fin, Loader=yl.FullLoader)
                    X.append(cfggrind_hist)
                    y.append(problem_key)

        X = pd.DataFrame.from_dict(X).fillna(0).astype(int)

        X_train, X_test, y_train, y_test = train_test_split(
                                                X,
                                                y,
                                                test_size=self.flags.test_size,
                                                random_state=42
                                            )
        
        rf_classifier = RandomForestClassifier(
                random_state=42,
                n_estimators=100,
                criterion="gini",
                max_depth=None,
                min_samples_split=2,
                min_samples_leaf=1,
                min_weight_fraction_leaf=0.0,
                max_features="sqrt",
                max_leaf_nodes=None,
                min_impurity_decrease=0.0,
                bootstrap=True,
                oob_score=False,
                n_jobs=None,
                verbose=0,
                warm_start=False,
                class_weight=None,
                ccp_alpha=0.0,
                max_samples=None
        )  
        rf_classifier.fit(X_train, y_train)
        
        y_pred = rf_classifier.predict(X_test)

        # Calculate accuracy  
        accuracy = accuracy_score(y_test, y_pred)  
        print(f"Accuracy: {accuracy}")  

        # Display classification report  
        print("\nClassification Report:")  
        print(classification_report(y_test, y_pred))  

        # Display confusion matrix  
        print("\nConfusion Matrix:")  
        print(confusion_matrix(y_test, y_pred))


def main(argv):
    """Source -> LLVM."""
    del argv

    cfggrind = CFGgrindDynamicCost(flags.FLAGS)

    data = cfggrind.filter_dataset()

    if flags.FLAGS.create_histogram:
        cfggrind.create_histogram(data)

    if flags.FLAGS.classify:
        cfggrind.classify()

# Execute
if __name__ == "__main__":
    # app
    flags.DEFINE_boolean(
        "create_histogram",
        True,
        "Enable the creation of histograms"
    )
    flags.DEFINE_boolean(
        "classify",
        True,
        "Enable classification"
    )
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
        "c_flags",
        "-w -g -ggdb -fno-stack-protector -no-pie",
        "C Flags"
    )
    flags.DEFINE_string(
        "cxx_flags",
        "-w -g -ggdb -fno-stack-protector -no-pie --std=c++11 --std=c++14",
        "C++ Flags"
    )
    flags.DEFINE_string(
        "compiler_flags",
        "-O2",
        "Compiler flags"
    )
    flags.DEFINE_string(
        "preprocess_directory",
        None,
        "Preprocess directory"
    )
    flags.DEFINE_integer(
        "num_problems",
        100,
        "Number of problems"
    )
    flags.DEFINE_string(
        "language",
        "C",
        "The samples' language"
    )
    flags.DEFINE_integer(
        "num_samples",
        500,
        "Number of samples per language"
    )
    flags.DEFINE_integer(
        "timeout",
        20,
        "Timeout in seconds"
    )
    flags.DEFINE_float(
        "test_size",
        0.2,
        "Test size"
    )
    flags.mark_flag_as_required(
        "preprocess_directory"
    )

    app.run(main)
