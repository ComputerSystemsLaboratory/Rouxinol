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

import numpy as np
import pandas as pd

from sklearn.svm import LinearSVC

from rouxinol.learning.supervised.model_simple import Model


class SupportVectorMachineModel(Model):
    def __init__(
        self,
        config=None,
        num_types=None
    ):
        if not config:
            config = {
                "penalty": "l2",
                "loss": "squared_hinge",
                "dual": True,
                "tol": 1e-4,
                "C": 1,
                "multi_class": "ovr",
                "fit_intercept": True,
                "intercept_scaling": 1,
                "class_weight": None,
                "verbose": 0,
                "seed": 0,
                "max_iter": 1000
            }

        config["random_state"] = 2**config["seed"]

        super().__init__(config)

        self.__num_types = num_types

        self.model = LinearSVC(
            penalty=config["penalty"],
            loss=config["loss"],
            dual=config["dual"],
            tol=config["tol"],
            C=config["C"],
            multi_class=config["multi_class"],
            fit_intercept=config["fit_intercept"],
            intercept_scaling=config["intercept_scaling"],
            class_weight=config["class_weight"],
            verbose=config["verbose"],
            random_state=config["random_state"],
            max_iter=config["max_iter"]
        )

    def _predict_with_data(
        self,
        data
    ):
        data_test_x = [d["x"] for d in data]
        data_test_y = [d["y"] for d in data]
        
        data_pred_y = self.model.predict(np.array(data_test_x))

        return data_test_y, data_pred_y


