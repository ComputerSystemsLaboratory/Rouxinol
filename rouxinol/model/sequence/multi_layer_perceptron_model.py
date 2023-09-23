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

from sklearn.neural_network import MLPClassifier
from sklearn.metrics import accuracy_score

from rouxinol.model.model_en import Model


class MultiLayerPerceptronModel(Model):
    def __init__(self, config=None, num_types=None):

        if not config:
            config = {
                "hidden_layer_sizes": (100,),
                "activation": "relu",
                "solver": "adam",
                "alpha": 1e-5,
                "batch_size": "auto",
                "learning_rate": "constant",
                "learning_rate_init": 0.001,
                "power_t": 0.5,
                "max_iter": 300,
                "shuffle": True,
                "seed": 0,
                "tol": 1e-4,
                "verbose": False,
                "warm_start": False,
                "momentum": 0.9,
                "nesterovs_momentum": True,
                "early_stopping": False,
                "validation_fraction": 0.1,
                "beta_1": 0.9,
                "beta_2": 0.999,
                "epsilon": 1e-8,
                "n_iter_no_change": 10,
                "max_fun": 15000
            }

            config["random_state"] = 2**config["seed"]

        super().__init__(config)

        self.__num_types = num_types

        self.model = MLPClassifier(
            hidden_layer_sizes=config["hidden_layer_sizes"],
            activation=config["activation"],
            solver=config["solver"],
            alpha=config["alpha"],
            batch_size=config["batch_size"],
            learning_rate=config["learning_rate"],
            learning_rate_init=config["learning_rate_init"],
            power_t=config["power_t"],
            max_iter=config["max_iter"],
            shuffle=config["shuffle"],
            random_state=config["random_state"],
            tol=config["tol"],
            verbose=config["verbose"],
            warm_start=config["warm_start"],
            momentum=config["momentum"],
            nesterovs_momentum=config["nesterovs_momentum"],
            early_stopping=config["early_stopping"],
            validation_fraction=config["validation_fraction"],
            beta_1=config["beta_1"],
            beta_2=config["beta_2"],
            epsilon=config["epsilon"],
            n_iter_no_change=config["n_iter_no_change"],
            max_fun=config["max_fun"]
        )

    def _predict_with_data(self, data):
        data_test_x = [d["x"] for d in data]
        data_test_y = [d["y"] for d in data]
        data_pred_y = self.model.predict_proba(np.array(data_test_x))
        data_pred_y = data_pred_y.argmax(axis=-1)
        acc = accuracy_score(data_test_y, data_pred_y)
        return acc, data_pred_y

