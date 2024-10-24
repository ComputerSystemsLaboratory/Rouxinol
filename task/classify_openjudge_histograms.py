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
import glob as gl
import yaml as yl
import pickle as pk
import pandas as pd

from absl import app, flags, logging
  
from sklearn.model_selection import train_test_split  
from sklearn.ensemble import RandomForestClassifier  
from sklearn.metrics import accuracy_score, classification_report, confusion_matrix


FLAGS = flags.FLAGS

def main(argv):
    """Source -> LLVM."""
    del argv

    X = []
    y = []

    problems = gl.glob(os.path.join(FLAGS.dataset_directory, "p*"))
    problems.sort()

    for problem_key, problem in enumerate(problems):
        filenames = gl.glob(os.path.join(problem, FLAGS.subdir, FLAGS.representation, "*.yml"))

        for filename in filenames:
            with open(filename, "r") as fin:
                histogram = yl.load(fin, Loader=yl.FullLoader)
                if histogram:
                    X.append(histogram)
                    y.append(problem_key)

    X = pd.DataFrame.from_dict(X).fillna(0).astype(int)

    X_train, X_test, y_train, y_test = train_test_split(
                                            X,
                                            y,
                                            test_size=FLAGS.test_size,
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

    # C*lassification report  
    classification_report_ = classification_report(y_test, y_pred)

    # Confusion matri  
    confusion_matrix_ = confusion_matrix(y_test, y_pred)

    results = {
        "accuracy": accuracy,
        "classification_report": classification_report_,
        "confusion_matrix": confusion_matrix_
    }
    os.makedirs(os.path.join(FLAGS.dataset_directory, "stats"), exist_ok=True)
    with open(os.path.join(FLAGS.dataset_directory, "stats", f"classification_{FLAGS.subdir}_{FLAGS.representation}.pk"), "wb") as fout:
        pk.dump(results, fout)


# Execute
if __name__ == "__main__":
    # app
    flags.DEFINE_string(
        "dataset_directory",
        None,
        "Dataset directory"
    )
    flags.DEFINE_string(
        "subdir",
        None,
        "The directory where to read from (dataset_directory/SUBDIR)."
    )
    flags.DEFINE_enum(
        "representation",
        "X86Histogram",
        ["LLVMHistogram", "X86Histogram", "CFGgrindHistogram"],
        "Representations to evaluate."
    )    
    flags.DEFINE_float(
        "test_size",
        0.2,
        "Test size"
    )
    flags.mark_flag_as_required(
        "dataset_directory"
    )
    flags.mark_flag_as_required(
        "subdir"
    )

    app.run(main)
