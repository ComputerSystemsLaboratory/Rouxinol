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

import pprint

import numpy as np
import pandas as pd

class Model(object):
    def __init__(
        self,
        config
    ):
        pp = pprint.PrettyPrinter(indent=2)
        #pp.pprint(config)

        self.config = config

    def _train_init(
        self,
        data_train
    ):
        data_train_x = [data["x"] for data in data_train]
        data_train_y = [data["y"] for data in data_train]
        #data_train_x = pd.DataFrame.from_records(data_train_x).fillna(0).to_numpy()
        return np.array(data_train_x), np.array(data_train_y)

    def train(
        self,
        data_train,
        data_valid,
        *args,
        **kwargs
    ):
        data_train_x, data_train_y = self._train_init(data_train)
        self.model.fit(data_train_x, data_train_y)
        return True

    def predict(
        self,
        data
    ):
        y_test, y_pred = self._predict_with_data(data)
        return y_test, y_pred
