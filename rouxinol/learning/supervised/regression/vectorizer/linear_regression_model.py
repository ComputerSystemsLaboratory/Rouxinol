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

from sklearn.linear_model import LinearRegression

from rouxinol.learning.supervised.model_simple import Model


class LinearRegressionModel(Model): 
    def __init__(
        self,
        config=None,
        num_types=None
    ):
        if not config:
            config = {
                "fit_intercept": True,
                "copy_X": True,
                "n_jobs": None,
                "positive": False
            }

        super().__init__(config)

        self.__num_types = num_types

        self.model = LinearRegression( 
            fit_intercept=config["fit_intercept"],
            copy_X=config["copy_X"],
            n_jobs=config["n_jobs"],
            positive=config["positive"]
        )

    def _predict_with_data(
        self,
        data
    ):
        data_test_x = [d["x"] for d in data]
        data_test_y = [d["y"] for d in data]
        
        data_pred_y = self.model.predict(np.array(data_test_x))

        return data_test_y, data_pred_y