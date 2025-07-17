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

from sklearn.neighbors import KNeighborsClassifier

from rouxinol.learning.supervised.model_simple import Model


class KNeighborsModel(Model):
    def __init__(
        self,
        config=None,
        num_types=None
    ):

        if not config:
            config = {
                "n_neighbors": 10,
                "weights": "uniform",
                "algorithm": "auto",
                "leaf_size": 30,
                "p": 2,
                "metric": "minkowski",
                "metric_params": None,
                "n_jobs": -1
            }

        super().__init__(config)

        self.__num_types = num_types

        self.model = KNeighborsClassifier(
            n_neighbors=config["n_neighbors"],
            weights=config["weights"],
            algorithm=config["algorithm"],
            leaf_size=config["leaf_size"],
            p=config["p"],
            metric=config["metric"],
            metric_params=config["metric_params"],
            n_jobs=config["n_jobs"]
        )

    def _predict_with_data(
        self,
        data
    ):
        data_test_x = [d["x"] for d in data]
        data_test_y = [d["y"] for d in data]
        
        data_pred_y = self.model.predict_proba(np.array(data_test_x))
        data_pred_y = data_pred_y.argmax(axis=-1)

        return data_test_y, data_pred_y

