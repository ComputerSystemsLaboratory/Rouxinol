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
import numpy as np
import pickle as pk

from torch import nn
from torch.optim import Adam

import torch.nn.functional as F  

from sklearn.metrics import mean_squared_error, r2_score, mean_absolute_error 

from rouxinol.learning.supervised.model_complex import Model


class Net(nn.Module):  
    def __init__(
        self, 
        input_size, 
        hidden_size, 
        output_size, 
        dropout_rate, 
        num_layers=12
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
        super(L2PModel, self).__init__()  
        
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
    def __init__(self, config=None):
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
    
        if 'ROUXINOL_APP_DIR' in os.environ:
            app_dir = os.environ['ROUXINOL_APP_DIR']
        else:
            # Placeholder for user_data_dir as it's not directly available in this environment
            # In a real application, you'd define or import user_data_dir correctly.
            # For this example, we'll assume a default path or handle it.
            app_dir = os.path.join(os.path.expanduser("~"), ".rouxinol_app_data") 


        self.vocabulary_dir = os.path.join(app_dir, "vocabulary")

    def __process_data(self, data):
        pass

    def __build_embeddings_and_labels(self, batch):
        pass

    def _train_init(self, data_train, data_valid):
        pass

    def _train_with_batch(self, batch):
        pass

    def _train_with_data(self, data):
        self._train_with_batch(self, data)

    def _test_init(self):
        self.model.eval()

    def _predict_with_batch(self, batch):
        embeddings, labels = self.__build_embeddings_and_labels(batch)

        with torch.no_grad():
            loss, pred = self.model(embeddings, labels)

        # For regression, we return the loss and predictions directly
        valid_loss = loss.item() 

        return valid_loss, pred.cpu().data.numpy() # Return predictions as numpy array

    def _predict_with_data(self, data):
        self._test_init()
        data = self.__process_data(data)
        valid_loss, pred_array = self._predict_with_batch(data) # pred_array is numpy array

        data_test_y = np.array([d["label"] for d in data]) # Ensure true labels are numpy array

        # Changed metrics to appropriate regression metrics
        mse = mean_squared_error(data_test_y, pred_array)
        rmse = np.sqrt(mse)
        r2 = r2_score(data_test_y, pred_array)
        mae = mean_absolute_error(data_test_y, pred_array)

        # Return regression metrics and data
        return mse, rmse, r2, mae, data_test_y, pred_array.tolist() # Return pred as list

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
        torch.save(self.best_epoch_weights, path) # Corrected typo: best_epoch_weigths to best_epoch_weights

    def restore_weights_from_disk(self, path):
        """Saves model weights to given file."""
        # print("Restoring weights from file %s." % path)
        self.best_epoch_weights = torch.load(path)
        self._restore_best_weights()