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
        """
        Unified training loop for classification and regression.

        Behavior is controlled by the `classification` flag:
          - classification=True  -> early stopping on higher valid_accuracy
          - classification=False -> early stopping on lower valid_loss

        Expected helper behaviors:
          - _train_init(train, valid) -> possibly transformed (train, valid)
          - _train_with_batch(batch)  -> for classification: (loss, accuracy),
                                        for regression: loss or (loss, None)
          - _test_init()              -> put model in eval mode, disable grads
          - _predict_with_batch(batch)-> classification: (batch_accuracy, extra)
                                        regression: (batch_loss, extra)
          - _backup_best_weights(epoch)
          - _restore_best_weights()   -> state_dict compatible with model
        """
        start_train = time.perf_counter()

        # Task flag (backward compatible): default classification=True
        classification = kwargs["classification"] if "classification" in kwargs else True

        # Config
        early_stopping = bool(self.config.get("early_stopping", False))
        patience = int(self.config.get("patience", 0))
        restore_best = bool(self.config.get("restore_best_weights", False))
        num_epochs = int(self.config.get("num_epochs", 1))
        batch_size = int(self.config.get("batch_size", 32))
        # Optional: minimal improvement threshold
        min_delta = float(self.config.get("min_delta", 0.0))

        # Tracking best metric for early stopping
        if classification:
            best_valid_metric = -np.inf  # accuracy -> maximize
        else:
            best_valid_metric = np.inf   # loss -> minimize
        es_patience = patience

        # Initialize data / model / optimizer / etc.
        train_summary = []
        data_train, data_valid = self._train_init(data_train, data_valid)

        for epoch in range(num_epochs):
            # ---------------------------
            # Training
            # ---------------------------
            np.random.shuffle(data_train)
            train_batches = [
                data_train[i * batch_size : (i + 1) * batch_size]
                for i in range((len(data_train) + batch_size - 1) // batch_size)
            ]

            train_loss_sum = 0.0
            train_count = 0

            # For classification (optional): track train accuracy if provided
            train_correct_sum = 0.0
            track_train_acc = classification  # only compute if classification is True

            start_time = time.perf_counter()
            for batch in train_batches:
                out = self._train_with_batch(batch)
                # Handle multiple return shapes
                if isinstance(out, (tuple, list)):
                    batch_loss = float(out[0])
                    batch_acc = out[1] if len(out) > 1 else None
                else:
                    batch_loss = float(out)
                    batch_acc = None

                bs = len(batch)
                train_loss_sum += batch_loss * bs
                train_count += bs

                if track_train_acc and batch_acc is not None:
                    train_correct_sum += float(batch_acc) * bs
            end_time = time.perf_counter()

            train_loss_epoch = train_loss_sum / max(1, train_count)
            train_instances_per_sec = train_count / max(1e-9, (end_time - start_time))
            train_accuracy_epoch = None
            if track_train_acc and train_count > 0:
                train_accuracy_epoch = train_correct_sum / train_count

            # ---------------------------
            # Validation
            # ---------------------------
            self._test_init()

            valid_batches = [
                data_valid[i * batch_size : (i + 1) * batch_size]
                for i in range((len(data_valid) + batch_size - 1) // batch_size)
            ]

            valid_count = 0

            if classification:
                # Accumulate correct via batch-mean-accuracy * batch_size
                valid_correct_sum = 0.0
                for batch in valid_batches:
                    out = self._predict_with_batch(batch)
                    # Expected: (batch_accuracy, extra)
                    if isinstance(out, (tuple, list)):
                        batch_acc = float(out[0])
                    else:
                        # If only a scalar is returned, treat it as accuracy
                        batch_acc = float(out)
                    bs = len(batch)
                    valid_correct_sum += batch_acc * bs
                    valid_count += bs
                valid_accuracy = valid_correct_sum / max(1, valid_count)
                valid_metric = valid_accuracy  # for early stopping (maximize)
            else:
                # Accumulate loss via batch-mean-loss * batch_size
                valid_loss_sum = 0.0
                for batch in valid_batches:
                    out = self._predict_with_batch(batch)
                    # Expected: (batch_loss, extra) or just batch_loss
                    if isinstance(out, (tuple, list)):
                        batch_loss = float(out[0])
                    else:
                        batch_loss = float(out)
                    bs = len(batch)
                    valid_loss_sum += batch_loss * bs
                    valid_count += bs
                valid_loss = valid_loss_sum / max(1, valid_count)
                valid_metric = valid_loss  # for early stopping (minimize)

            # ---------------------------
            # Logging
            # ---------------------------
            if classification:
                # Prefer showing train_loss and both train/valid accuracy if available
                msg = (
                    f"epoch: {epoch}, "
                    f"train_loss: {train_loss_epoch:.8f}, "
                    f"train_accuracy: {train_accuracy_epoch:.4f}" if train_accuracy_epoch is not None else
                    f"epoch: {epoch}, train_loss: {train_loss_epoch:.8f}"
                )
                msg += f", valid_accuracy: {valid_metric:.4f}, train instances/sec: {train_instances_per_sec:.2f}"
                print(msg, flush=True)

                # Summary
                epoch_summary = {
                    "epoch": epoch,
                    "train_loss": train_loss_epoch,
                    "valid_accuracy": valid_metric,
                }
                if train_accuracy_epoch is not None:
                    epoch_summary["train_accuracy"] = train_accuracy_epoch
                train_summary.append(epoch_summary)
            else:
                print(
                    f"epoch: {epoch}, "
                    f"train_loss: {train_loss_epoch:.8f}, "
                    f"valid_loss: {valid_metric:.4f}, "
                    f"train instances/sec: {train_instances_per_sec:.2f}",
                    flush=True
                )
                train_summary.append({
                    "epoch": epoch,
                    "train_loss": train_loss_epoch,
                    "valid_loss": valid_metric,
                })

            # ---------------------------
            # Early Stopping & Checkpointing
            # ---------------------------
            improved = False
            if classification:
                # maximize accuracy
                if valid_metric > (best_valid_metric + min_delta):
                    improved = True
            else:
                # minimize loss
                if valid_metric < (best_valid_metric - min_delta):
                    improved = True

            if improved:
                best_valid_metric = valid_metric
                es_patience = patience
                if classification:
                    print(f"\tnew best valid_accuracy {best_valid_metric:.4f}")
                else:
                    print(f"\tnew best valid_loss {best_valid_metric:.4f}")
                self._backup_best_weights(epoch)
            else:
                es_patience -= 1
                if early_stopping and es_patience <= 0:
                    if classification:
                        print(f"early stopping (best valid_accuracy: {best_valid_metric:.4f})")
                    else:
                        print(f"early stopping (best valid_loss: {best_valid_metric:.4f})")
                    break
        # ---------------------------
        # Checkpointing
        # ---------------------------
        self._backup_last_weights(epoch)

        # ---------------------------
        # Restore best weights (optional)
        # ---------------------------
        if restore_best:
            missing, unexpected = self.model.load_state_dict(
                self._restore_weights(prefer="best_model_state_dict"), strict=True
            )
            print(f"[restore] load_state_dict: missing={len(missing)} unexpected={len(unexpected)}")

        end_train = time.perf_counter()
        return train_summary, end_train - start_train

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

    def _backup_last_weights(
        self,
        epoch
    ):
        raise NotImplementedError

    def _restore_best_weights(
        self
    ):
        raise NotImplementedError

    def _restore_weights(
        self,
        ckpt,
        *,
        strategy,
        prefer,
        verbose,
    ):
        raise NotImplementedError    