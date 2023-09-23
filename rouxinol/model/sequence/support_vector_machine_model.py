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

from sklearn.svm import LinearSVC
from sklearn.metrics import accuracy_score

from rouxinol.model.model_en import Model


class SupportVectorMachineModel(Model):
    def __init__(self, config=None, num_types=None):

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

    def _predict_with_data(self, data):
        data_test_x = [d["x"] for d in data]
        data_test_y = [d["y"] for d in data]
        data_pred_y = self.model.predict(np.array(data_test_x))
        acc = accuracy_score(data_test_y, data_pred_y)
        return acc, data_pred_y

