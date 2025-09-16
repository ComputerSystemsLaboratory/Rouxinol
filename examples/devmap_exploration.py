"""
Rouxinol an infrastructure to explore code generation and machine learning models.
Copyright (C) 2025 Anderson Faustino da Silva

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
import numpy as np

from sklearn.model_selection import StratifiedKFold

from rouxinol import dataset as D
from rouxinol import transformer as T
from rouxinol.transformer import ClangDriver
from rouxinol.learning.supervised.classification import graphifier as M


# Load dataset
dataset = D.OpenCLDevmap()

# Explore combinations
combinations = [
    (T.ASTGraphBuilder, T.ASTDataVisitor, M.GGNNModel),
    (T.LLVMGraphBuilder, T.LLVMCDFGVisitor, M.GGNNModel),
    (T.LLVMGraphBuilder, T.LLVMProGraMLVisitor, M.GGNNModel),
    (T.ASTGraphBuilder, T.ASTDataCFGVisitor, M.GGNNModel),
    (T.LLVMGraphBuilder, T.LLVMCDFGCallVisitor, M.GGNNModel),
    (T.LLVMGraphBuilder, T.LLVMCDFGPlusVisitor, M.GGNNModel),
]

for builder, visitor, model in combinations:
    print("Processing %s-%s-%s" % (builder.__name__, visitor.__name__, model.__name__))

    # Build representation
    clang_driver = ClangDriver(
        ClangDriver.ProgrammingLanguage.OpenCL,
        ClangDriver.OptimizationLevel.O3,
        [(x, ClangDriver.IncludeDirType.User) for x in dataset.additional_include_dirs],
        ["-xcl", "-target", "x86_64-pc-linux-gnu"],
    )
    data = dataset.preprocess(
        builder=builder(clang_driver), 
        visitor=visitor
    )

    # Train and test
    kf = StratifiedKFold(n_splits=10, shuffle=True, random_state=204)
    split = kf.split(data["samples"], [sample["info"][5] for sample in data["samples"]])
    for train_idx, test_idx in split:
        model = model(num_types=data["num_types"], num_classes=2)
        train_summary = model.train(
            list(np.array(data["samples"])[train_idx]),
            list(np.array(data["samples"])[test_idx]),
        )
        print(train_summary)

        break

