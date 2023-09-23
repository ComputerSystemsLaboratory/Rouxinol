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
import time

import numpy as np


class Model(object):
    def __init__(self, config):
        pp = pprint.PrettyPrinter(indent=2)
        #pp.pprint(config)

        self.config = config

    def train(self, data_train, data_valid):

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

    def predict(self, data):
        acc, pred = self._predict_with_data(data)
        return acc, pred

    def save_weights_to_disk(self, path):
        raise NotImplementedError

    def restore_weights_from_disk(self, path):
        raise NotImplementedError

    def _train_init(self, data_train, data_valid):
        return data_train, data_valid

    def _test_init(self):
        pass

    def _train_with_batch(self, batch):
        raise NotImplementedError

    def _predict_with_batch(self, batch):
        raise NotImplementedError

    def _predict_with_data(self, data):
        raise NotImplementedError

    def _backup_best_weights(self, epoch):
        raise NotImplementedError

    def _restore_best_weights(self):
        raise NotImplementedError
