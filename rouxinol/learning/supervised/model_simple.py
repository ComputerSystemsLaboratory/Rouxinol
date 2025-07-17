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

import time
import joblib
import pprint

import numpy as np


class Model(object):
    def __init__(
        self,
        config
    ):
        pp = pprint.PrettyPrinter(indent=2)
        #pp.pprint(config)

        self.config = config

    def train(
        self,
        data_train,
        data_valid,
        *args,
        **kwargs
    ):
        start_time = time.perf_counter()
        data_train_x, data_train_y = self._train_init(data_train)
        self.model.fit(data_train_x, data_train_y)
        end_time = time.perf_counter()
        return [], end_time - start_time

    def predict(
        self,
        data
    ):
        start_time = time.perf_counter()
        y_test, y_pred = self._predict_with_data(data)
        end_time = time.perf_counter()
        return y_test, y_pred, end_time - start_time
    
    def only_predict(
        self,
        data
    ):
        _, y_pred = self._predict_with_data(data)
        return y_pred

    def save_model_to_disk(
        self,
        path
    ):
        start_time = time.perf_counter()
        joblib.dump(self.model, path)
        end_time = time.perf_counter()
        return end_time - start_time

    def restore_model_from_disk(
        self,
        path
    ):
        start_time = time.perf_counter()
        self.model = joblib.load(path)
        end_time = time.perf_counter()
        return end_time - start_time

    def _train_init(
        self,
        data_train
    ):
        data_train_x = [data["x"] for data in data_train]
        data_train_y = [data["y"] for data in data_train]
        return np.array(data_train_x), np.array(data_train_y)