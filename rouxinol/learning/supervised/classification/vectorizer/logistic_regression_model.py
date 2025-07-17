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

from sklearn.linear_model import LogisticRegression

from rouxinol.learning.supervised.model_simple import Model


class LogisticRegressionModel(Model):
    def __init__(
        self,
        config=None,
        num_types=None
    ):
        if not config:
            config = {
                "penalty": "l2",
                "dual": False,
                "tol": 1e-4,
                "C": 1e5,
                "fit_intercept": True,
                "intercept_scaling": 1,
                "class_weight": None,
                "seed": 0,
                "solver": "lbfgs",
                "max_iter": 100,
                "multi_class": 'auto',
                "verbose": 0,
                "warm_start": False,
                "n_jobs": None,
                "l1_ratio": None
            }

        config["random_state"] = 2**config["seed"]

        super().__init__(config)

        self.__num_types = num_types

        self.model = LogisticRegression(
            penalty=config["penalty"],
            dual=config["dual"],
            tol=config["tol"],
            C=config["C"],
            fit_intercept=config["fit_intercept"],
            intercept_scaling=config["intercept_scaling"],
            class_weight=config["class_weight"],
            random_state=config["random_state"],
            solver=config["solver"],
            max_iter=config["max_iter"],
            multi_class=config["multi_class"],
            verbose=config["verbose"],
            warm_start=config["warm_start"],
            n_jobs=config["n_jobs"],
            l1_ratio=config["l1_ratio"]
        )

    def _predict_with_data(
        self,
        data
    ):
        data_test_x = [d["x"] for d in data]
        data_test_y = [d["y"] for d in data]
        
        data_pred_y = self.model.predict(np.array(data_test_x))

        return data_test_y, data_pred_y


