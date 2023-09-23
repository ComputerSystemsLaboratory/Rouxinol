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

import pprint

import numpy as np
import pandas as pd

class Model(object):
    def __init__(self, config):
        pp = pprint.PrettyPrinter(indent=2)
        #pp.pprint(config)

        self.config = config

    def train(self, data_train, data_valid):
        data_train_x, data_train_y = self._train_init(data_train)
        self.model.fit(data_train_x, data_train_y)
        return True

    def predict(self, data):
        acc, pred = self._predict_with_data(data)
        return acc, pred

    def _train_init(self, data_train):
        data_train_x = [data["x"] for data in data_train]
        data_train_y = [data["y"] for data in data_train]
        #data_train_x = pd.DataFrame.from_records(data_train_x).fillna(0).to_numpy()
        return np.array(data_train_x), np.array(data_train_y)

    def _predict_with_data(self, data):
        raise NotImplementedError

