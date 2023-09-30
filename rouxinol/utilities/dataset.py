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

import os
import sys
import glob
import numpy as np
import itertools as it

from absl import logging

from typing import List, Optional, Tuple, Dict

from sklearn.model_selection import train_test_split
from sklearn.preprocessing import MinMaxScaler

class Dataset():
    """Dataset utilities.

    """

    def __init__(self, dataset_path: str):
        """Init.

        :param absolute_path: The dataset absolute path.
        """
        self.dataset_path = dataset_path
        self.scaler = MinMaxScaler()

        if not self.validate_dataset():
            logging.error(f"Invalid dataset ({self.dataset_path}).")
            sys.exit(1)

    def _multiple_file_types(self, dir_path: str, *patterns) -> List:
        """Read the filenames.

        :param dir_path: The directory.

        :param patterns: A list of file extensions.

        :return: A list of files with specific extensions (patterns).
        """
        files = it.chain.from_iterable(glob.iglob(os.path.join(dir_path, pattern)) for pattern in patterns)
        _, filenames = it.tee(files)
        return list(filenames)

    def labels(self) -> List:
        """Return the labels.

        :return: The labels.
        """
        if not os.path.isabs(self.dataset_path):
            logging.error(f"Not a absolute path. ({daaset_path})")
            sys.exit(1)

        try:
            labels = [
                int(subdir)
                for subdir in os.listdir(os.path.join(self.dataset_path))
                if os.path.isdir(os.path.join(self.dataset_path, subdir))
            ]
        except Exception:
            logging.error(f"Wrong dataset ({dataset}).")
            sys.exit(1)

        nof_labels = len(labels)
        if (nof_labels*(nof_labels+1))/2 == sum(labels):
            labels.sort()
            return labels
        else:
            logging.error(f"Wrong labels ({dataset})")
            sys.exit(1)

    def validate_dataset(self) -> bool:
        """Verify the dataset.

        :return: True if the dataset is valid.
        """
        if not os.path.isabs(self.dataset_path):
            logging.error(f"Not a absolute path. ({daaset_path})")
            sys.exit(1)

        try:
            labels = [
                int(subdir)
                for subdir in os.listdir(os.path.join(self.dataset_path))
                if os.path.isdir(os.path.join(self.dataset_path, subdir))
            ]
        except Exception:
            return False

        nof_labels = len(labels)
        return (nof_labels*(nof_labels+1))/2 == sum(labels)

    def _split_dataset(self, num_classes: int, test_size: float, validation_size: float, *args) -> Tuple[List, List, List, List, List, List]:
        """Split the dataset into train, test and validation subsets.

        :param num_classes: The number of classes.

        :param test_size: Test subset size.

        :param validation_size: Validation subset size.

        :return: The subsets.

        train = |dataset| * (1.0 - test_size)
        IF validation_size:
            train = |train| * (1.0 - validation_size)
        """
        train_size = 1.0 - (test_size + validation_size)
        if train_size + test_size + validation_size != 1.0:
            logging.error(f"Wrong split dataset (test size={test_size}, validation size={validation_size})")
            sys.exit(1)

        X = []
        y = []

        labels = self.labels()
        labels = labels[:num_classes]
        for label in labels:
            label_path = os.path.join(self.dataset_path, str(label))
            sources = self._multiple_file_types(label_path, *args)
            X.extend(sources)
            y.extend([label] * len(sources))

        X_train, X_test, y_train, y_test = train_test_split(
                                                X,
                                                y,
                                                test_size=test_size,
                                                random_state=42
                                                )

        if validation_size:
            X_train, X_val, y_train, y_val = train_test_split(
                                                        X_train,
                                                        y_train,
                                                        test_size=validation_size,
                                                        random_state=42
                                                    )
            return (X_train, X_test, X_val, y_train, y_test, y_val)
        else:
            return (X_train, X_test, [], y_train, y_test, [])

    def split_dataset(self, num_classes: int, test_size: Optional[float]=0.2, validation_size: Optional[float]=0.0) -> Tuple[List, List, List, List, List, List]:
        return self._split_dataset(num_classes, test_size, validation_size, "*.c", "*.cpp")

    def split_ir_dataset(self, num_classes: int, test_size: Optional[float]=0.2, validation_size: Optional[float]=0.0) -> Tuple[List, List, List, List, List, List]:
        return self._split_dataset(num_classes, test_size, validation_size, "*.ll")

    def _histogram_to_list(self, samples: Dict, keys: List) -> List:
        """Transform a dict into a list.
        
        :param samples: The samples {x: histogram, y: label}.
        
        :param keys: The keys of a full histogram.
        
        :return: The correct samples.
        """
        new_samples = []
        values = []
        values_list = []
        for sample in samples:
            rep = [sample["x"][key] if key in sample["x"] else 0 for key in keys]
            new_samples.append({"x": rep, "y": sample["y"]})
            values.append(max(rep))
            values_list.append(rep)
        return new_samples, values_list, max(values)

    def _transform(self, samples: Dict) -> Dict:
        """Transform the features by scaling them.

        :param samples: The samples.

        :return: The new samples.
        """
        new_samples = []
        values = []
        for sample in samples:
            rep = self.scaler.transform(np.array(sample["x"]).reshape(1,-1))
            rep = rep[0].tolist()
            new_samples.append({"x": rep, "y": sample["y"]})
            values.append(max(rep))
        return new_samples, max(values)

    def preprocess_histograms(self, X_train: List, y_train: List, X_test: List, y_test: List, X_val: Optional[List]=None, y_val: Optional[List]=None, min_max_scaler: Optional[bool]=False) -> Tuple:
        """Preprocess the histograms.

        All histogram should have the same length.

        :param X_train: The X_train histograms.

        :param y_train: The y_train histograms.

        :param X_test: The X_train histograms.

        :param y_test: The y_test histograms.

        :param X_val: The X_val histograms.

        :param y_val: The y_val histograms.

        :return: A tuple of samples, number of keys and also max key
        """
        keys = []
        samples = {"train": [], "test": [], "val": []}

        for i, histogram in enumerate(X_train):
            keys = list(set(keys + list(histogram.keys())))
            samples["train"].append({"x": histogram, "y": y_train[i]-1})

        for i, histogram in enumerate(X_test):
            keys = list(set(keys + list(histogram.keys())))
            samples["test"].append({"x": histogram, "y": y_test[i]-1})

        if X_val:
            for i, histogram in enumerate(X_val):
                keys = list(set(keys + list(histogram.keys())))
                samples["val"].append({"x": histogram, "y": y_val[i]-1})

        samples["train"], train_list, train_max = self._histogram_to_list(samples["train"], keys)
        samples["test"], _, test_max = self._histogram_to_list(samples["test"], keys)
        samples["val"], _, val_max = self._histogram_to_list(samples["test"], keys) if X_val else None, None, None

        if min_max_scaler:
            self.scaler.fit(train_list)
            samples["train"], train_max = self._transform(samples["train"])
            samples["test"], test_max = self._transform(samples["test"])
            samples["val"], val_max = self._transform(samples["val"]) if samples["val"] else None, None

        max_value = max([train_max, test_max])
        if samples["val"]:
            max_value = max([train_max, test_max, val_max])
        
        return (samples["train"], samples["test"], samples["val"], len(keys), max_value)

