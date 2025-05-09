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
import time

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
        data_valid
    ):
        early_stopping = True if self.config["early_stopping"] else False;
        es_patience = self.config["patience"]
        best_valid_accuracy = -np.inf

        train_summary = []
        data_train, data_valid = self._train_init(data_train, data_valid)

        print()
        for epoch in range(self.config["num_epochs"]):
            batch_size = self.config["batch_size"]
            np.random.shuffle(data_train)
            batches = [
                data_train[i * batch_size : (i + 1) * batch_size]
                for i in range((len(data_train) + batch_size - 1) // batch_size)
            ]

            # Train
            start_time = time.time()
            for batch in batches:
                train_loss, train_accuracy = self._train_with_batch(batch)
            end_time = time.time()

            # Valid
            self._test_init()

            batch_size = self.config["batch_size"]
            np.random.shuffle(data_valid)
            batches = [
                data_valid[i * batch_size : (i + 1) * batch_size]
                for i in range((len(data_valid) + batch_size - 1) // batch_size)
            ]

            valid_count = 0
            for batch in batches:
                batch_accuracy, _ = self._predict_with_batch(batch)
                valid_count += batch_accuracy * len(batch)
            valid_accuracy = valid_count / len(data_valid)

            # Logging
            instances_per_sec = len(data_train) / (end_time - start_time)
            print(
                "epoch: %i, train_loss: %.8f, train_accuracy: %.4f, valid_accuracy:"
                " %.4f, train instances/sec: %.2f"
                % (epoch, train_loss, train_accuracy, valid_accuracy, instances_per_sec)
            )

            train_summary.append({"train_accuracy": train_accuracy})
            train_summary.append({"valid_accuracy": valid_accuracy})

            # Check if accuracy improved for early stopping
            if valid_accuracy > best_valid_accuracy:
                best_valid_accuracy = valid_accuracy
                es_patience = self.config["patience"]
                print("\tnew best valid_accuracy %.4f" % valid_accuracy)
                if self.config["restore_best_weights"]:
                    self._backup_best_weights(epoch)
            else:
                es_patience -= 1
                if early_stopping and es_patience == 0:
                    print("early stopping (best valid_accuracy: %.4f)" % best_valid_accuracy)
                    break

        if self.config["restore_best_weights"]:
            self._restore_best_weights()

        return train_summary

    def predict(
        self,
        data
    ):
        f1, acc, recall, precision, y_test, y_pred = self._predict_with_data(data)
        return f1, acc, recall, precision, y_test, y_pred

    def save_weights_to_disk(
        self,
        path
    ):
        raise NotImplementedError

    def restore_weights_from_disk(
        self,
        path
    ):
        raise NotImplementedError

    def _train_init(
        self,
        data_train,
        data_valid
    ):
        return data_train, data_valid

    def _test_init(
        self
    ):
        pass

    def _train_with_batch(
        self,
        batch
    ):
        raise NotImplementedError

    def _predict_with_batch(
        self,
        batch
    ):
        raise NotImplementedError

    def _predict_with_data(
        self,
        data
    ):
        raise NotImplementedError

    def _backup_best_weights(
        self,
        epoch
    ):
        raise NotImplementedError

    def _restore_best_weights(
        self
    ):
        raise NotImplementedError
