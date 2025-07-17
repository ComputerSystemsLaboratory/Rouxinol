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

import os
import torch
import time
import numpy as np
import pickle as pk

from torch import nn
from torch.optim import Adam

import torch.nn.functional as F  

from rouxinol.learning.supervised.model_complex import Model


class Net(nn.Module):  
    def __init__(self, config):  
        num_classes = config["num_classes"]  
        embedding_dim = config["embedding_dim"]  
        dense_layer_size = config["dense_layer_size"]  

        super(Net, self).__init__()  

        self.lstm1 = nn.LSTM(  
            input_size=embedding_dim,  
            hidden_size=embedding_dim,  
            batch_first=True  
        )  

        self.lstm2 = nn.LSTM(  
            input_size=embedding_dim,  
            hidden_size=embedding_dim,  
            batch_first=True  
        )  

        self.batch_norm = nn.BatchNorm1d(embedding_dim)  
        self.fc1 = nn.Linear(embedding_dim, dense_layer_size)  
        self.fc2 = nn.Linear(dense_layer_size, num_classes)  
        self.loss_fn = nn.CrossEntropyLoss()  

    def forward(self, x, labels=None):  
        # x shape: [batch_size, maxlen, embedding_dim]  
        x, _ = self.lstm1(x)  
        x, _ = self.lstm2(x)  
        # Take the last time-step's output  
        x = x[:, -1, :]  # shape: [batch_size, embedding_dim]  

        x = self.batch_norm(x)  
        x = F.relu(self.fc1(x))  
        logits = self.fc2(x)  # No sigmoid here, logits are used for CrossEntropyLoss  
        preds = torch.argmax(logits, dim=-1)  

        if labels is not None:  
            loss = self.loss_fn(logits, labels)    
            return loss, preds  
        return preds


class LSTMModel(Model):
    def __init__(self, config=None, embedding_dim=None, dense_layer_size=None, num_classes=None, max_len=None):
        if not config:
            config = {
                "embedding_dim": embedding_dim,
                "dense_layer_size": dense_layer_size,
                "learning_rate": 0.001,
                "batch_size": 64,
                "num_epochs": 1000,
                "early_stopping": 1,
                "restore_best_weights": 1,
                "patience": 100,
                "num_classes": num_classes,
            }
        super().__init__(config)

        self. max_len = max_len
        self.unk_index = 8564

        self.device = torch.device("cuda" if torch.cuda.is_available() else "cpu")

        self.best_epoch_weights = None

        self.model = Net(config)
        self.model = self.model.to(self.device)
    
        self.opt = Adam(self.model.parameters(), lr=config["learning_rate"])

        if 'ROUXINOL_APP_DIR' in os.environ:
            app_dir = os.environ['ROUXINOL_APP_DIR']
        else:
            app_dir = user_data_dir(appname="Rouxinol")

        self.vocabulary_dir = os.path.join(app_dir, "vocabulary")

    def __process_data(self, data):
        return [
            {
                "x": data["x"].tolist(),
                "label": data["y"],
            }
            for data in data
        ]

    def __build_embeddings_and_labels(self, batch):
        with open(os.path.join(self.vocabulary_dir, "emb.p"), "rb") as f:
            inst2vec_embeddings = pk.load(f)

        embeddings = []
        labels = []
        for batch_item in batch:
            # X
            padded_seq = batch_item["x"] + [self.unk_index] * (self.max_len - len(batch_item["x"]))
            embeddings.append([inst2vec_embeddings[idx].tolist() for idx in padded_seq])  

            # Label
            labels.append(batch_item["label"])

        embeddings = torch.tensor(embeddings, dtype=torch.float)
        labels = torch.tensor(labels, dtype=torch.long)

        embeddings = embeddings.to(self.device)
        labels = labels.to(self.device)

        return embeddings, labels

    def _train_init(self, data_train, data_valid):
        return self.__process_data(data_train), self.__process_data(data_valid)

    def _train_with_batch(self, batch):
        embeddings, labels = self.__build_embeddings_and_labels(batch)

        self.model.train()
        self.opt.zero_grad()

        loss, pred = self.model(embeddings, labels)
        loss.backward()
        self.opt.step()

        train_accuracy = (
            np.equal(
                labels.cpu().data.numpy().tolist(), pred.cpu().data.numpy().tolist()
            )
            .astype(np.double)
            .tolist()
        )
        train_accuracy = sum(train_accuracy) / len(train_accuracy)
        train_loss = loss / len(batch)

        return train_loss, train_accuracy

    def _train_with_data(self, data):
        self._train_with_batch(self, data)

    def _test_init(self):
        self.model.eval()

    def _predict_with_batch(self, batch):
        embeddings, labels = self.__build_embeddings_and_labels(batch)

        with torch.no_grad():
            loss, pred = self.model(embeddings, labels)

        valid_accuracy = (
            np.equal(
                labels.cpu().data.numpy().tolist(), pred.cpu().data.numpy().tolist()
            )
            .astype(np.double)
            .tolist()
        )
        valid_accuracy = sum(valid_accuracy) / len(valid_accuracy)

        return valid_accuracy, pred

    def _predict_with_data(self, data):
        self._test_init()
        data = self.__process_data(data)
        _, pred = self._predict_with_batch(data)

        data_test_y = [data["label"] for data in data]
        pred=pred.tolist()

        return data_test_y, pred

    def _backup_best_weights(self, epoch):
        self.best_epoch_weights = {'epoch': epoch,
                                   'model_state_dict': self.model.state_dict(),
                                   'optimizer_state_dict': self.opt.state_dict()}

    def _restore_best_weights(self):
        if self.best_epoch_weights:
            self.model.load_state_dict(self.best_epoch_weights['model_state_dict'])
            self.opt.load_state_dict(self.best_epoch_weights['optimizer_state_dict'])

    def save_weights_to_disk(self, path):
        """Saves model weights to given file."""
        start_time = time.perf_counter()
        torch.save(self.best_epoch_weights, path)
        end_time = time.perf_counter()
        return end_time - start_time

    def restore_weights_from_disk(self, path):
        """Saves model weights to given file."""
        start_time = time.perf_counter()
        self.best_epoch_weights = torch.load(path)
        self._restore_best_weights()
        end_time = time.perf_counter()
        return end_time - start_time

