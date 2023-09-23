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

import numpy as np
import pandas as pd

from sklearn.linear_model import LogisticRegression
from sklearn.metrics import accuracy_score

from rouxinol.model.model_en import Model


class LogisticRegressionModel(Model):
    def __init__(self, config=None, num_types=None):

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

    def _predict_with_data(self, data):
        data_test_x = [d["x"] for d in data]
        data_test_y = [d["y"] for d in data]
        data_pred_y = self.model.predict(np.array(data_test_x))
        acc = accuracy_score(data_test_y, data_pred_y)
        return acc, data_pred_y

