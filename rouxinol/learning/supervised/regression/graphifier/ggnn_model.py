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
import torch
import numpy as np

from torch import nn
from torch.optim import Adam

from rouxinol.learning.supervised.model_complex import Model


class Net(nn.Module): # Renamed Net to RegressionGGNNNet
    def __init__(self, config):
        from dgl.nn.pytorch import (
            GatedGraphConv,
        )  # Prevents DGL from clashing with TensorFlow backend
        from dgl.nn.pytorch import GlobalAttentionPooling

        super(Net, self).__init__() # Corrected super call

        annotation_size = config["hidden_size_orig"]
        self.annotation_size = annotation_size
        hidden_size = config["gnn_h_size"]
        n_steps = config["num_timesteps"]
        n_etypes = config["num_edge_types"]
        # num_cls = config["num_cls"] # Removed as it's for classification, output is 1 for regression

        self.gnn = GatedGraphConv(
            in_feats=annotation_size,
            out_feats=hidden_size,
            n_steps=n_steps,
            n_etypes=n_etypes,
        )

        # For regression, output is a single continuous value
        self.pooling = GlobalAttentionPooling(
            gate_nn=nn.Linear(hidden_size, 1), feat_nn=nn.Linear(hidden_size, hidden_size)
        )

        self.classify = nn.Linear(hidden_size, 1) # Output layer for regression (1 continuous value)
        self.loss_fn = nn.MSELoss() # Changed to MSELoss for regression

    def forward(self, g, labels=None):
        h = g.ndata["h"]
        h = self.gnn(g, h, g.edata["etype"])
        g.ndata["h"] = h
        
        # In regression, pooling output directly feeds into classification layer (now regression layer)
        hg = self.pooling(g, h)
        logits = self.classify(hg) # Raw logits for regression (continuous output)
        
        # For regression, the prediction is the raw output from the last layer. No argmax.
        preds = logits

        if labels is not None:
            # Squeeze logits to match labels shape for MSELoss if labels are (batch_size,)
            loss = self.loss_fn(logits.squeeze(), labels) 
            return loss, preds
        return preds


class GGNNModel(Model): # Renamed GGNNModel to GGNNRegressionModel
    def __init__(self, config=None, embedding_dim=None, dense_layer_size=None, num_classes=None, max_len=None):
        if not config:
            config = {
                "hidden_size_orig": 10, # Example value
                "gnn_h_size": 20, # Example value
                "num_timesteps": 5, # Example value
                "num_edge_types": 2, # Example value
                "learning_rate": 0.001,
                "batch_size": 64,
                "num_epochs": 1000,
                "early_stopping": 1,
                "restore_best_weights": 1,
                "patience": 100,
                # "num_cls": None, # Removed as it's for classification
            }
        super().__init__(config)

        self.device = torch.device("cuda" if torch.cuda.is_available() else "cpu")
        self.best_epoch_weights = None

        self.model = Net(config) # Instantiating the RegressionGGNNNet
        self.model = self.model.to(self.device)

        self.opt = Adam(self.model.parameters(), lr=config["learning_rate"])
        self.criterion = nn.MSELoss()

    def __process_data(self, data):
        # Assuming data structure is {x: graph_data, y: label}
        return [
            {
                "x": d["x"], # Keep graph data as is
                "label": d["y"],
            }
            for d in data
        ]

    def __build_graphs_and_labels(self, batch):
        # This part depends heavily on the graph data structure.
        # Assuming `batch_item["x"]` is already a DGL graph object or can be converted.
        # For a DGL graph batch, you might use dgl.batch for combining graphs.
        # For simplicity, assuming a single graph per batch item for now and will adapt.
        
        # The original code did not provide graph creation logic, so this part assumes
        # that 'x' in batch_item is already a DGL graph or can be directly processed.
        # If 'x' contains features and adjacency lists, DGL graph creation logic would be needed here.
        # For the purpose of refactoring for regression, we focus on the model output and metrics.

        # Example: if batch_item['x'] is a pre-constructed DGL graph
        batched_graph = None
        graph_list = []
        labels = []
        for batch_item in batch:
            graph_list.append(batch_item["x"])
            labels.append(batch_item["label"])

        # Batch the graphs if multiple graphs per batch, otherwise handle single graph
        if len(graph_list) > 1:
            import dgl
            batched_graph = dgl.batch(graph_list)
        elif len(graph_list) == 1:
            batched_graph = graph_list[0]
        else:
            raise ValueError("Batch contains no graphs.")

        # Ensure node features are on the correct device
        if "h" in batched_graph.ndata:
            batched_graph.ndata["h"] = batched_graph.ndata["h"].to(self.device)
        if "etype" in batched_graph.edata:
            batched_graph.edata["etype"] = batched_graph.edata["etype"].to(self.device)

        # Labels (for regression, labels should be float and match output shape [batch_size, 1])
        labels = torch.tensor(labels, dtype=torch.float).to(self.device)
        labels = labels.unsqueeze(1) # Ensure labels are [batch_size, 1] for MSELoss

        return batched_graph, labels


    def _train_init(self, data_train, data_valid):
        return self.__process_data(data_train), self.__process_data(data_valid)

    def _train_with_batch(self, batch):
        graphs, labels = self.__build_graphs_and_labels(batch)

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
        graphs, labels = self.__build_graphs_and_labels(batch)

        with torch.no_grad():
            loss, pred = self.model(graphs, labels)

        # For regression, we return the loss and predictions directly
        loss = self.criterion(pred, labels) 
        valid_loss = loss.item()

        return valid_loss, pred.cpu().data.numpy() # Return predictions as numpy array

    def _predict_with_data(self, data):
        self._test_init()
        data = self.__process_data(data)
        valid_loss, pred_array = self._predict_with_batch(data) # pred_array is numpy array

        data_test_y = np.array([d["label"] for d in data]) # Ensure true labels are numpy array
        
        # If pred_array is (N, 1), convert to (N,) for sklearn metrics
        if pred_array.ndim == 2 and pred_array.shape[1] == 1:
            pred_array = pred_array.flatten()

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