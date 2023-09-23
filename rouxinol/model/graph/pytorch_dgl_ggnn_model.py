import torch
import numpy as np

from torch import nn
from torch.optim import Adam

from compy.models.model import Model


class Net(nn.Module):
    def __init__(self, config):
        from dgl.nn.pytorch import (
            GatedGraphConv,
        )  # Prevents DGL from clashing with TensorFlow backend
        from dgl.nn.pytorch import GlobalAttentionPooling

        super(Net, self).__init__()

        annotation_size = config["hidden_size_orig"]
        self.annotation_size = annotation_size
        hidden_size = config["gnn_h_size"]
        n_steps = config["num_timesteps"]
        n_etypes = config["num_edge_types"]
        num_cls = config["num_classes"]

        self.reduce_layer = nn.Linear(annotation_size, hidden_size)
        self.ggnn = GatedGraphConv(
            in_feats=hidden_size,
            out_feats=hidden_size,
            n_steps=n_steps,
            n_etypes=n_etypes,
        )

        pooling_gate_nn = nn.Linear(hidden_size * 2, 1)
        self.pooling = GlobalAttentionPooling(pooling_gate_nn)
        self.output_layer = nn.Linear(hidden_size * 2, num_cls)

        self.loss_fn = nn.CrossEntropyLoss()

    def forward(self, graph, labels=None):
        etypes = graph.edata.pop("type")
        annotation = graph.ndata.pop("annotation").float()
        assert annotation.size()[-1] == self.annotation_size

        annotation = self.reduce_layer(annotation)

        out = self.ggnn(graph, annotation, etypes)
        out = torch.cat([out, annotation], -1)
        out = self.pooling(graph, out)

        logits = self.output_layer(out)
        preds = torch.argmax(logits, -1)

        if labels is not None:
            loss = self.loss_fn(logits, labels)
            return loss, preds
        return preds


class PytorchDGLGGNNModel(Model):
    def __init__(self, config=None, num_types=None):
        if not config:
            config = {
                "num_timesteps": 4,
                "hidden_size_orig": num_types,
                "gnn_h_size": 32,
                "num_edge_types": 4,
                "learning_rate": 0.001,
                "batch_size": 64,
                "num_epochs": 1000,
                "early_stopping": 0,
                "restore_best_weights": 0,
                "patience": 100,
                "num_classes": 2,
            }
        super().__init__(config)

        self.device = torch.device("cuda" if torch.cuda.is_available() else "cpu")

        self.best_epoch_weights = None

        self.model = Net(config)
        self.model = self.model.to(self.device)
    
    def __process_data(self, data):
        return [
            {
                "nodes": data["x"]["node_list"],
                "edges": data["x"]["edge_list"],
                "label": data["y"],
            }
            for data in data
        ]

    def __build_dgl_graph_and_labels(self, batch_graphs):
        import dgl  # Import DGL locally to prevent clashing with TensorFlow import

        dgl_graphs = []
        labels = []
        for batch_graph in batch_graphs:
            # edges
            src_ids = []
            dst_ids = []
            edge_types = []
            for edge in batch_graph["edges"]:
                src_ids.append(edge[0])
                dst_ids.append(edge[2])
                edge_types.append(edge[1])

            # graph
            g = dgl.graph((torch.tensor(src_ids), torch.tensor(dst_ids)))

            # edge data
            g.edata["type"] = torch.tensor(edge_types, dtype=torch.long)

            # node data
            one_hot = np.zeros(
                (len(batch_graph["nodes"]), self.config["hidden_size_orig"])
            )
            one_hot[np.arange(len(batch_graph["nodes"])), batch_graph["nodes"]] = 1
            g.ndata["annotation"] = torch.tensor(one_hot, dtype=torch.float)

            dgl_graphs.append(g)

            # Label
            labels.append(batch_graph["label"])

        # Put small graphs into a large graph with disconnected subgraphs
        dgl_graph = dgl.batch(dgl_graphs)

        labels = torch.tensor(labels, dtype=torch.long)

        dgl_graph = dgl_graph.to(self.device)
        labels = labels.to(self.device)

        return dgl_graph, labels

    def _train_init(self, data_train, data_valid):
        self.opt = Adam(self.model.parameters(), lr=self.config["learning_rate"])

        return self.__process_data(data_train), self.__process_data(data_valid)

    def _train_with_batch(self, batch):
        g, labels = self.__build_dgl_graph_and_labels(batch)

        self.model.train()
        self.opt.zero_grad()

        loss, pred = self.model(g, labels)
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
        g, labels = self.__build_dgl_graph_and_labels(batch)

        with torch.no_grad():
            loss, pred = self.model(g, labels)

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
        valid_accuracy, pred = self._predict_with_batch(data)
        return valid_accuracy, pred

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
        torch.save(self.best_epoch_weigths, path)

    def restore_weights_from_disk(self, path):
        """Saves model weights to given file."""
        # print("Restoring weights from file %s." % path)
        self.best_epoch_weights = torch.load(path)
        self._restore_best_weights()

