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

from sklearn.ensemble import RandomForestClassifier
from sklearn.metrics import accuracy_score

from rouxinol.model.model_en import Model


class RandomForestModel(Model):
    def __init__(self, config=None, num_types=None):

        if not config:
            config = {
                "n_estimators": 100,
                "criterion": "gini",
                "max_depth": None,
                "min_samples_split": 2,
                "min_samples_leaf": 1,
                "min_weight_fraction_leaf": 0.0,
                "max_features": "sqrt",
                "max_leaf_nodes": None,
                "min_impurity_decrease": 0.0,
                "bootstrap": True,
                "oob_score": False,
                "n_jobs": None,
                "seed": 0,
                "verbose": 0,
                "warm_start": False,
                "class_weight": None,
                "ccp_alpha": 0.0,
                "max_samples": None
            }
            config["random_state"] = 2**config["seed"]

        super().__init__(config)

        self.__num_types = num_types

        self.model = RandomForestClassifier(
            n_estimators=config["n_estimators"],
            criterion=config["criterion"],
            max_depth=config["max_depth"],
            min_samples_split=config["min_samples_split"],
            min_samples_leaf=config["min_samples_leaf"],
            min_weight_fraction_leaf=config["min_weight_fraction_leaf"],
            max_features=config["max_features"],
            max_leaf_nodes=config["max_leaf_nodes"],
            min_impurity_decrease=config["min_impurity_decrease"],
            bootstrap=config["bootstrap"],
            oob_score=config["oob_score"],
            n_jobs=config["n_jobs"],
            random_state=config["random_state"],
            verbose=config["verbose"],
            warm_start=config["warm_start"],
            class_weight=config["class_weight"],
            ccp_alpha=config["ccp_alpha"],
            max_samples=config["max_samples"]
        )

    def _predict_with_data(self, data):
        data_test_x = [d["x"] for d in data]
        data_test_y = [d["y"] for d in data]
        data_pred_y = self.model.predict_proba(np.array(data_test_x))
        data_pred_y = data_pred_y.argmax(axis=-1)
        acc = accuracy_score(data_test_y, data_pred_y)
        return acc, data_pred_y

