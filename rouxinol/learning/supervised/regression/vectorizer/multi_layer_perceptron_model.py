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

from sklearn.neural_network import MLPRegressor

from rouxinol.learning.supervised.model_simple import Model


class MultiLayerPerceptronModel(Model): 
    def __init__(
        self,
        config=None,
        num_types=None
    ):
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

        self.model = MLPRegressor(
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

    def _predict_with_data(
        self,
        data
    ):
        data_test_x = [d["x"] for d in data]
        data_test_y = [d["y"] for d in data]
        
        data_pred_y = self.model.predict(np.array(data_test_x))

        return data_test_y, data_pred_y