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


class Net(nn.Module):  
    def __init__(
        self, 
        config
    ):  
        """  
        Initialize the enhanced L2PModel model with increased complexity.  

        Parameters:  
            input_size (int): Number of input features.  
            hidden_size (int): Number of neurons in each hidden layer.  
            output_size (int): Number of outputs (e.g., 1 for one regression task).  
            dropout_rate (float): Dropout rate for regularization.  
            num_layers (int): Number of hidden layers to include (>=3 for increased depth).  
        """  
        super(Net, self).__init__()  
        
        input_size = config["input_size"] 
        hidden_size = config["hidden_size"]
        output_size = config["output_size"]
        dropout_rate = config["dropout_rate"]
        num_layers = config["num_layers"]

        # Input Layer  
        self.input_layer = nn.Linear(input_size, hidden_size)  
        self.bn_input = nn.BatchNorm1d(hidden_size)  # Batch Normalization for input layer  

        # Hidden Layers  
        self.hidden_layers = nn.ModuleList()  
        for _ in range(num_layers - 1):  # Add n-1 hidden layers  
            self.hidden_layers.append(nn.Linear(hidden_size, hidden_size))  
        
        self.bn_hidden = nn.ModuleList()  
        for _ in range(num_layers - 1):  # Add batch norm for each hidden layer  
            self.bn_hidden.append(nn.BatchNorm1d(hidden_size))  
        
        # Output Layer  
        self.output_layer = nn.Linear(hidden_size, output_size)  

        # Dropout  
        self.dropout = nn.Dropout(dropout_rate)  

    def forward(
        self, 
        x
    ):  
        """  
        Define the forward pass of the L2PModel.  

        Parameters:  
            x (torch.Tensor): Input tensor.  

        Returns:  
            torch.Tensor: Output tensor of the L2PModel.  
        """  
        # Input Layer  
        x = F.relu(self.bn_input(self.input_layer(x)))  
        x = self.dropout(x)  

        # Hidden Layers with residual connections  
        for i, hidden_layer in enumerate(self.hidden_layers):  
            residual = x  # Store input of the layer  
            x = F.relu(self.bn_hidden[i](hidden_layer(x)))  
            x = self.dropout(x)  

            # Add residual connection  
            x += residual  
        
        # Output Layer  
        return self.output_layer(x)  


class L2PModel(Model): 
    def __init__(self, config=None, input_size=None, output_size=None):
        if not config:
            config = {
                "input_size": input_size, 
                "output_size": output_size,
                "hidden_size": 64,  
                "dropout_rate": 0.5, 
                "num_layers": 12,
                "learning_rate": 0.0001,
                "batch_size": 16,
                "num_epochs": 1000,
                "early_stopping": 1,
                "restore_best_weights": 1,
                "patience": 100
            }
        super().__init__(config)

        self.device = torch.device("cuda" if torch.cuda.is_available() else "cpu")

        self.best_epoch_weights = None

        self.model = Net(config) 
        self.model = self.model.to(self.device)

        self.opt = Adam(self.model.parameters(), lr=config["learning_rate"])
        self.criterion = nn.MSELoss()

    def __process_data(self, data):
        return [
            {
                "x": data["x"],
                "label": data["y"],
            }
            for data in data
        ]

    def __build_embeddings_and_labels(self, batch):
        embeddings = []
        labels = []
        for batch_item in batch:
            # X
            embeddings.append(batch_item["x"])  

            # Label (for regression, labels should be float)
            labels.append(batch_item["label"])

        embeddings = torch.tensor(embeddings, dtype=torch.float)
        labels = torch.tensor(labels, dtype=torch.float) 

        if len(labels.shape) == 1:
            # Reshape it to be a 2D tensor of shape (num_samples, 1)
            # This is commonly required for loss functions like MSELoss or BCEWithLogitsLoss
            # where the input (predictions) often has a shape like [batch_size, 1].
            labels = labels.view(-1, 1)

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
            #loss, pred = self.model(embeddings, labels)
            pred = self.model(embeddings)

        # For regression, we return the loss and predictions directly
        loss = self.criterion(pred, labels) 
        valid_loss = loss.item() 

        return valid_loss, pred.cpu().data.numpy() # Return predictions as numpy array

    def _predict_with_data(self, data):
        self._test_init()
        data = self.__process_data(data)
        _, pred_array = self._predict_with_batch(data) # pred_array is numpy array

        data_test_y = np.array([d["label"] for d in data]) # Ensure true labels are numpy array

        return data_test_y, pred_array

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

    def freeze_layers(self, freeze_up_to=6):  
        """  
        Freezes the layers of the model up to a specific index (exclusive).  

        Parameters:  
            model (L2PModel): The model whose layers will be frozen.  
            freeze_up_to (int): The number of layers to freeze (including the input layer   
                                and batch normalization).  
        """  
        # Freeze input layer and its batch norm  
        start_time = time.perf_counter()        
        
        for param in self.model.input_layer.parameters():  
            param.requires_grad = False  
        for param in self.model.bn_input.parameters():  
            param.requires_grad = False  

        # Freeze the first `freeze_up_to` hidden layers  
        for i in range(freeze_up_to - 1):  # -1 because input_layer is already frozen  
            for param in self.model.hidden_layers[i].parameters():  
                param.requires_grad = False  
            for param in self.model.bn_hidden[i].parameters():  
                param.requires_grad = False  
        
        end_time = time.perf_counter()
        return end_time - start_time