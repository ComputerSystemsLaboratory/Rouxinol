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

from xgboost import XGBRegressor 

from rouxinol.learning.supervised.model_simple import Model


class XGBoostModel(Model): 
    def __init__(
        self,
        config=None,
        num_types=None
    ):
        if not config:
            config = {
                "max_depth": 10,
                "learning_rate": 0.5,
                "n_estimators": 70,
                "objective": "reg:squarederror",
                "booster": "gbtree",
                "n_jobs": -1, 
                "gamma": 0,
                "min_child_weight": 1,
                "max_delta_step": 0,
                "subsample": 1,
                "colsample_bytree": 1,
                "colsample_bylevel": 1,
                "reg_alpha": 0,
                "reg_lambda": 1,
                "base_score": 0.5, 
                "random_state": 0
            }

        super().__init__(config)

        self.__num_types = num_types

        self.model = XGBRegressor(
            max_depth=config["max_depth"],
            learning_rate=config["learning_rate"],
            n_estimators=config["n_estimators"],
            objective=config["objective"],
            booster=config["booster"],
            n_jobs=config["n_jobs"],
            gamma=config["gamma"],
            min_child_weight=config["min_child_weight"],
            max_delta_step=config["max_delta_step"],
            subsample=config["subsample"],
            colsample_bytree=config["colsample_bytree"],
            colsample_bylevel=config["colsample_bylevel"],
            reg_alpha=config["reg_alpha"],
            reg_lambda=config["reg_lambda"],
            base_score=config["base_score"],
            random_state=config["random_state"]
        )

    def _predict_with_data(
        self,
        data
    ):
        data_test_x = [d["x"] for d in data]
        data_test_y = [d["y"] for d in data]

        data_pred_y = self.model.predict(np.array(data_test_x))

        return data_test_y, data_pred_y