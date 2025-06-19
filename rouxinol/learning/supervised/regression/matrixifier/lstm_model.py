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
import time
import torch
import numpy as np
import pickle as pk

from torch import nn
from torch.optim import Adam

import torch.nn.functional as F  

from rouxinol.learning.supervised.model_complex import Model


class Net(nn.Module): # Renamed Net to RegressionNet
    def __init__(self, config):  
        # For regression, num_classes is implicitly 1 for single output
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
        self.fc2 = nn.Linear(dense_layer_size, 1) 
        self.loss_fn = nn.MSELoss() 

    def forward(self, x, labels=None):  
        # x shape: [batch_size, maxlen, embedding_dim]  
        x, _ = self.lstm1(x)  
        x, _ = self.lstm2(x)  
        # Take the last time-step's output  
        x = x[:, -1, :]  # shape: [batch_size, embedding_dim]  

        x = self.batch_norm(x)  
        x = F.relu(self.fc1(x))  
        logits = self.fc2(x)  # Raw logits for regression (continuous output)
        
        # For regression, the prediction is the raw output from the last layer. No argmax.
        preds = logits 

        if labels is not None:  
            loss = self.loss_fn(logits.squeeze(), labels) # Squeeze logits to match labels shape for MSELoss
            return loss, preds  
        return preds


class LSTMModel(Model): 
    def __init__(self, config=None, embedding_dim=None, dense_layer_size=None, max_len=None):
        if not config:
            config = {
                "embedding_dim": embedding_dim,
                "dense_layer_size": dense_layer_size,
                "learning_rate": 0.001,
                "batch_size": 64,
                "num_epochs": 1000,
                "early_stopping": 1,
                "restore_best_weights": 1,
                "patience": 100
            }
        super().__init__(config)

        self.max_len = max_len
        self.unk_index = 8564

        self.device = torch.device("cuda" if torch.cuda.is_available() else "cpu")

        self.best_epoch_weights = None

        self.model = Net(config) 
        self.model = self.model.to(self.device)
    
        self.opt = Adam(self.model.parameters(), lr=config["learning_rate"])
        self.criterion = nn.MSELoss()

        if 'ROUXINOL_APP_DIR' in os.environ:
            app_dir = os.environ['ROUXINOL_APP_DIR']
        else:
            # Placeholder for user_data_dir as it's not directly available in this environment
            # In a real application, you'd define or import user_data_dir correctly.
            # For this example, we'll assume a default path or handle it.
            app_dir = os.path.join(os.path.expanduser("~"), ".rouxinol_app_data") 


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

            # Label (for regression, labels should be float)
            labels.append(batch_item["label"])

        embeddings = torch.tensor(embeddings, dtype=torch.float)
        # Ensure labels are float and have correct shape for MSELoss (e.g., [batch_size])
        labels = torch.tensor(labels, dtype=torch.float) 

        embeddings = embeddings.to(self.device)
        labels = labels.to(self.device)

        return embeddings, labels

    def _train_init(self, data_train, data_valid):
        return self.__process_data(data_train), self.__process_data(data_valid)

    def _train_with_batch(self, batch):
        embeddings, labels = self.__build_embeddings_and_labels(batch)
        
        self.model.train()
        self.opt.zero_grad()

        #loss, pred = self.model(embeddings, labels) # pred will now be continuous values
        pred = self.model(embeddings)  
        loss = self.criterion(pred, labels)  
        loss.backward()
        self.opt.step()

        # For regression, we typically track loss instead of accuracy during training
        train_loss = loss.item() # Get scalar value of loss

        return train_loss, None # Accuracy is not applicable for regression training

    def _train_with_data(self, data):
        self._train_with_batch(self, data)

    def _test_init(self):
        self.model.eval()

    def _predict_with_batch(self, batch):
        embeddings, labels = self.__build_embeddings_and_labels(batch)

        with torch.no_grad():
            loss, pred = self.model(embeddings, labels)

        # For regression, we return the loss and predictions directly
        loss = self.criterion(pred, labels) 
        valid_loss = loss.item() 

        return valid_loss, pred.cpu().data.numpy() # Return predictions as numpy array

    def _predict_with_data(self, data):
        self._test_init()
        data = self.__process_data(data)
        _, pred_array = self._predict_with_batch(data) # pred_array is numpy array

        data_test_y = np.array([d["label"] for d in data]) # Ensure true labels are numpy array

        return data_test_y, pred_array.tolist() # Return pred as list

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