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

from sklearn.neighbors import KNeighborsClassifier
from sklearn.metrics import accuracy_score

from rouxinol.model.model_en import Model


class KNeighborsModel(Model):
    def __init__(self, config=None, num_types=None):

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

    def _predict_with_data(self, data):
        data_test_x = [d["x"] for d in data]
        data_test_y = [d["y"] for d in data]
        #data_test_x = pd.DataFrame.from_records(data_test_x).fillna(0).to_numpy()

        data_pred_y = self.model.predict_proba(np.array(data_test_x))
        data_pred_y = data_pred_y.argmax(axis=-1)
        acc = accuracy_score(data_test_y, data_pred_y)
        return acc, data_pred_y

