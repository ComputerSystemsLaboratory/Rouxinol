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
import numpy as np

import torch
import torch.nn as nn

from torch.optim import Adam

from typing import List, Dict, Any, Iterable, Optional, Sequence

from rouxinol.learning.supervised.model_complex import Model


# ----------------------------- Shared helpers -----------------------------

def _get_activation(name: str) -> nn.Module:
    name = str(name).lower()
    if name == "relu":
        return nn.ReLU()
    if name == "gelu":
        return nn.GELU()
    if name == "tanh":
        return nn.Tanh()
    if name == "leakyrelu":
        return nn.LeakyReLU(0.1)
    raise ValueError(f"Unsupported activation: {name}")


class BaseGraphRegressor(nn.Module):
    """
    Base class for graph regression backbones.

    Shared parts:
      - annotation projection to hidden_size
      - Global Attention Pooling over nodes with a gate on [h || ann]
      - regression head to target_dim outputs
      - configurable regression loss (MSE or Huber/SmoothL1 with delta)
    Subclasses must implement `encode_nodes(graph, h, etypes) -> node_states`.
    """
    def __init__(self, config: Dict[str, Any]):
        super().__init__()
        # Import pooling locally to avoid TF/DGL backend clashes
        from dgl.nn.pytorch import GlobalAttentionPooling

        # Required sizes
        self.annotation_size = int(config["hidden_size_orig"])
        self.hidden_size = int(config["gnn_h_size"])
        self.target_dim = int(config.get("target_dim", 1))

        # Optional backbone hyperparams
        self.num_layers = int(config.get("num_layers", 2))
        self.dropout_p = float(config.get("dropout", 0.0))
        self.act = _get_activation(config.get("activation", "relu"))
        self.dropout = nn.Dropout(self.dropout_p) if self.dropout_p > 0 else nn.Identity()

        # Node annotation projection
        self.reduce_layer = nn.Linear(self.annotation_size, self.hidden_size)

        # Pooling gate on concatenated [node_state, projected_annotation]
        self.pooling = GlobalAttentionPooling(nn.Linear(self.hidden_size * 2, 1))

        # Regression head
        self.output_layer = nn.Linear(self.hidden_size * 2, self.target_dim)

        # Configurable loss
        loss_name = str(config.get("loss_name", "mse")).lower()
        if loss_name == "huber":
            delta = float(config.get("huber_delta", 1.0))
            # SmoothL1Loss is Huber with beta=delta
            self.loss_fn = nn.SmoothL1Loss(beta=delta, reduction="mean")
        elif loss_name == "mse":
            self.loss_fn = nn.MSELoss(reduction="mean")
        else:
            raise ValueError("Unsupported loss_name. Use 'mse' or 'huber'.")

    # To be implemented by subclasses:
    def encode_nodes(self, graph, h: torch.Tensor, etypes: Optional[torch.Tensor]) -> torch.Tensor:
        raise NotImplementedError

    def forward(self, graph, labels: Optional[torch.Tensor] = None):
        # Edge types (optional) and node annotations (required)
        etypes = graph.edata.pop("type", None)
        annotation = graph.ndata.pop("annotation").float()
        assert annotation.size(-1) == self.annotation_size

        # Project annotations
        ann = self.reduce_layer(annotation)  # [N, hidden]

        # Backbone message passing
        h = self.encode_nodes(graph, ann, etypes)  # [N, hidden]

        # Concatenate with projected annotation for gating (matches your original GGNN pattern)
        node_repr = torch.cat([h, ann], dim=-1)  # [N, 2*hidden]

        # Graph-level embedding
        graph_repr = self.pooling(graph, node_repr)  # [B, 2*hidden]

        # Regression head
        preds = self.output_layer(graph_repr)  # [B, target_dim]
        preds_out = preds.squeeze(-1) if self.target_dim == 1 else preds

        if labels is not None:
            labels = labels.float()
            if labels.dim() == 1 and self.target_dim == 1:
                labels = labels.unsqueeze(-1)
            if labels.shape[-1] != self.target_dim:
                raise ValueError(f"Labels last dim {labels.shape[-1]} != target_dim {self.target_dim}")
            loss = self.loss_fn(preds, labels)
            return loss, preds_out

        return preds_out


# ----------------------------- Backbones -----------------------------

class Net_GGNN(BaseGraphRegressor):
    """
    Original GGNN backbone (GatedGraphConv).
    Uses edge types and n_steps propagation.
    """
    def __init__(self, config: Dict[str, Any]):
        super().__init__(config)
        from dgl.nn.pytorch import GatedGraphConv

        self.n_steps = int(config["num_timesteps"])
        self.n_etypes = int(config["num_edge_types"])

        self.ggnn = GatedGraphConv(
            in_feats=self.hidden_size,
            out_feats=self.hidden_size,
            n_steps=self.n_steps,
            n_etypes=self.n_etypes,
        )

    def encode_nodes(self, graph, h: torch.Tensor, etypes: Optional[torch.Tensor]) -> torch.Tensor:
        if etypes is None:
            raise ValueError("GGNN requires graph.edata['type'] for edge types.")
        h = self.ggnn(graph, h, etypes)
        return h


class Net_GCN(BaseGraphRegressor):
    """
    Graph Convolutional Network (GraphConv).
    Optional per-edge-type scalar gating as edge weights.
    """
    def __init__(self, config: Dict[str, Any]):
        super().__init__(config)
        from dgl.nn.pytorch import GraphConv

        self.use_etype_gate = bool(config.get("gcn_use_etype_gate", True))
        self.n_etypes = int(config.get("num_edge_types", 0))
        self.etype_gate = nn.Embedding(self.n_etypes, 1) if (self.use_etype_gate and self.n_etypes > 0) else None

        self.layers = nn.ModuleList([
            GraphConv(self.hidden_size, self.hidden_size, norm="both", weight=True, bias=True)
            for _ in range(self.num_layers)
        ])

    def encode_nodes(self, graph, h: torch.Tensor, etypes: Optional[torch.Tensor]) -> torch.Tensor:
        eweight = None
        if self.etype_gate is not None and etypes is not None:
            eweight = self.etype_gate(etypes).squeeze(-1)  # [E]
        for conv in self.layers:
            h = conv(graph, h, edge_weight=eweight)
            h = self.act(h)
            h = self.dropout(h)
        return h


class Net_SAGE(BaseGraphRegressor):
    """
    GraphSAGE (SAGEConv) with configurable aggregator: mean/pool/gcn/lstm.
    """
    def __init__(self, config: Dict[str, Any]):
        super().__init__(config)
        from dgl.nn.pytorch import SAGEConv

        aggregator = str(config.get("sage_aggregator", "mean")).lower()
        if aggregator not in {"mean", "pool", "gcn", "lstm"}:
            raise ValueError("SAGE aggregator must be one of {'mean','pool','gcn','lstm'}")

        self.layers = nn.ModuleList([
            SAGEConv(self.hidden_size, self.hidden_size, aggregator_type=aggregator)
            for _ in range(self.num_layers)
        ])

    def encode_nodes(self, graph, h: torch.Tensor, etypes: Optional[torch.Tensor]) -> torch.Tensor:
        for conv in self.layers:
            h = conv(graph, h)
            h = self.act(h)
            h = self.dropout(h)
        return h


class Net_GAT(BaseGraphRegressor):
    """
    Graph Attention Network (GATConv) with multi-head attention.
    Requires gnn_h_size % gat_num_heads == 0.
    """
    def __init__(self, config: Dict[str, Any]):
        super().__init__(config)
        from dgl.nn.pytorch import GATConv

        self.num_heads = int(config.get("gat_num_heads", 4))
        if self.hidden_size % self.num_heads != 0:
            raise ValueError("gnn_h_size must be divisible by gat_num_heads")
        out_feats = self.hidden_size // self.num_heads

        self.convs = nn.ModuleList([
            GATConv(
                in_feats=self.hidden_size,
                out_feats=out_feats,
                num_heads=self.num_heads,
                feat_drop=float(config.get("gat_feat_drop", 0.0)),
                attn_drop=float(config.get("gat_attn_drop", 0.0)),
                negative_slope=float(config.get("gat_negative_slope", 0.2)),
                residual=bool(config.get("gat_residual", True)),
                allow_zero_in_degree=True,
            )
            for _ in range(self.num_layers)
        ])

    def encode_nodes(self, graph, h: torch.Tensor, etypes: Optional[torch.Tensor]) -> torch.Tensor:
        for conv in self.convs:
            h = conv(graph, h)   # [N, num_heads, out_feats]
            h = h.flatten(1)     # [N, hidden_size]
            h = self.act(h)
            h = self.dropout(h)
        return h


class Net_GIN(BaseGraphRegressor):
    """
    Graph Isomorphism Network (GINConv) with MLP update.
    Strong on discrete structures.
    """
    def __init__(self, config: Dict[str, Any]):
        super().__init__(config)
        from dgl.nn.pytorch import GINConv

        self.convs = nn.ModuleList()
        for _ in range(self.num_layers):
            mlp = nn.Sequential(
                nn.Linear(self.hidden_size, self.hidden_size),
                _get_activation(config.get("activation", "relu")),
                nn.Linear(self.hidden_size, self.hidden_size),
            )
            conv = GINConv(
                apply_func=mlp,
                aggregator_type=str(config.get("gin_agg", "sum")).lower(),
                init_eps=float(config.get("gin_init_eps", 0.0)),
                learn_eps=bool(config.get("gin_learn_eps", True)),
            )
            self.convs.append(conv)

    def encode_nodes(self, graph, h: torch.Tensor, etypes: Optional[torch.Tensor]) -> torch.Tensor:
        for conv in self.convs:
            h = conv(graph, h)
            h = self.act(h)
            h = self.dropout(h)
        return h


class Net_RGCN(BaseGraphRegressor):
    """
    Relational GCN (RelGraphConv) using edge types (relations).
    Good when etypes carry semantics; supports basis/blocks decomposition.
    """
    def __init__(self, config: Dict[str, Any]):
        super().__init__(config)
        from dgl.nn.pytorch import RelGraphConv

        self.n_etypes = int(config["num_edge_types"])
        regularizer = str(config.get("rgcn_regularizer", "basis")).lower()
        num_bases = int(config.get("rgcn_num_bases", min(self.n_etypes, 8))) if regularizer == "basis" else None
        rgcn_drop = float(config.get("rgcn_dropout", self.dropout_p))

        self.layers = nn.ModuleList([
            RelGraphConv(
                in_feat=self.hidden_size,
                out_feat=self.hidden_size,
                num_rels=self.n_etypes,
                regularizer=regularizer,
                num_bases=num_bases,
                bias=True,
                activation=None,
                self_loop=True,
                dropout=rgcn_drop,
                low_mem=False,
            )
            for _ in range(self.num_layers)
        ])

    def encode_nodes(self, graph, h: torch.Tensor, etypes: Optional[torch.Tensor]) -> torch.Tensor:
        if etypes is None:
            raise ValueError("R-GCN requires graph.edata['type'] edge types.")
        for conv in self.layers:
            h = conv(graph, h, etypes)
            h = self.act(h)
            h = self.dropout(h)
        return h


class Net_APPNP(BaseGraphRegressor):
    """
    APPNPConv: MLP-style transform + Personalized PageRank propagation.
    """
    def __init__(self, config: Dict[str, Any]):
        super().__init__(config)
        from dgl.nn.pytorch import APPNPConv

        self.pre = nn.Sequential(
            nn.Linear(self.hidden_size, self.hidden_size),
            _get_activation(config.get("activation", "relu")),
            nn.Dropout(self.dropout_p) if self.dropout_p > 0 else nn.Identity(),
        )
        self.appnp = APPNPConv(
            k=int(config.get("appnp_k", 10)),
            alpha=float(config.get("appnp_alpha", 0.1)),
            edge_drop=float(config.get("appnp_edge_drop", 0.0)),
        )

    def encode_nodes(self, graph, h: torch.Tensor, etypes: Optional[torch.Tensor]) -> torch.Tensor:
        h0 = self.pre(h)
        h = self.appnp(graph, h0)
        return h


def get_net(config: Dict[str, Any]) -> nn.Module:
    """
    Factory to construct a graph regressor according to config['gnn_arch'].
    Supported: 'ggnn', 'gcn', 'sage', 'gat', 'gin', 'rgcn', 'appnp'
    """
    arch = str(config.get("gnn_arch", "ggnn")).lower()
    if arch == "ggnn":
        return Net_GGNN(config)
    if arch == "gcn":
        return Net_GCN(config)
    if arch == "sage":
        return Net_SAGE(config)
    if arch == "gat":
        return Net_GAT(config)
    if arch == "gin":
        return Net_GIN(config)
    if arch == "rgcn":
        return Net_RGCN(config)
    if arch == "appnp":
        return Net_APPNP(config)
    raise ValueError(f"Unknown gnn_arch='{arch}'. Choose from ['ggnn','gcn','sage','gat','gin','rgcn','appnp'].")


# ----------------------------- Training wrapper -----------------------------

class GNNModel(Model):
    """
    Training/eval wrapper for graph regression with multiple backbones.
    Adds:
      - Configurable loss (MSE/Huber) chosen in the Net
      - Configurable metrics: regression_metrics, primary_metric
    Keeps:
      - Same graph building pipeline as your original GGNNModel
    """
    def __init__(self, config=None, num_classes=None, num_types=None):
        # num_classes is ignored (regression); kept for API compatibility
        if not config:
            config = {
                # Graph / features
                "num_timesteps": 4,             # for GGNN
                "hidden_size_orig": num_types,  # size of node one-hot
                "gnn_h_size": 32,
                "num_edge_types": 3,

                # Backbone choice and depth
                "gnn_arch": "ggnn",             # 'ggnn','gcn','sage','gat','gin','rgcn','appnp'
                "num_layers": 2,
                "activation": "relu",
                "dropout": 0.0,

                # GAT-specific
                "gat_num_heads": 4,

                # APPNP-specific
                "appnp_k": 10,
                "appnp_alpha": 0.1,

                # R-GCN-specific
                "rgcn_regularizer": "basis",
                "rgcn_num_bases": 3,

                # Optimization
                "learning_rate": 0.001,
                "batch_size": 64,
                "num_epochs": 1000,
                "early_stopping": 1,
                "restore_best_weights": 1,
                "patience": 100,

                # Regression
                "target_dim": 1,
                "loss_name": "mse",             # 'mse' or 'huber'
                "huber_delta": 1.0,

                # Metrics
                "regression_metrics": ["mae"],  # any of {"mae","mse","rmse","r2","mape"}
                "primary_metric": "mae",
                "mape_epsilon": 1e-8,
            }
        super().__init__(config)

        # Validate metrics config
        self.allowed_metrics = {"mae", "mse", "rmse", "r2", "mape"}
        self.metrics_to_compute = [m.lower() for m in self.config.get("regression_metrics", ["mae"])]
        for m in self.metrics_to_compute:
            if m not in self.allowed_metrics:
                raise ValueError(f"Unsupported metric '{m}'. Allowed: {sorted(self.allowed_metrics)}")
        self.primary_metric = self.config.get("primary_metric", "mae").lower()
        if self.primary_metric not in self.metrics_to_compute:
            raise ValueError(f"primary_metric '{self.primary_metric}' must be in regression_metrics {self.metrics_to_compute}")
        self.mape_eps = float(self.config.get("mape_epsilon", 1e-8))

        self.device = torch.device("cuda" if torch.cuda.is_available() else "cpu")
        self.best_epoch_weights = None

        # Build selected backbone
        self.model = get_net(self.config).to(self.device)
        self.opt = Adam(self.model.parameters(), lr=self.config["learning_rate"])

    # ----------------- Data pipeline (same contract as your original) -----------------

    def __process_data(self, dataset: Iterable[Dict[str, Any]]):
        """
        Expects each item to provide:
          - item["x"].get_node_list()
          - item["x"].get_edge_list() with tuples (src, etype, dst)
          - item["y"] as float or list (for multi-target)
        """
        return [
            {
                "nodes": item["x"].get_node_list(),
                "edges": item["x"].get_edge_list(),
                "label": item["y"],
            }
            for item in dataset
        ]

    def __build_dgl_graph_and_labels(self, batch_graphs):
        """
        Build a batched DGLGraph and a float labels tensor.
        """
        import dgl  # local import to avoid TF/DGL clashes

        dgl_graphs = []
        labels = []
        for bg in batch_graphs:
            # Edges: (src, etype, dst)
            src_ids, dst_ids, edge_types = [], [], []
            for (src, etype, dst) in bg["edges"]:
                src_ids.append(src)
                dst_ids.append(dst)
                edge_types.append(etype)

            # Graph
            g = dgl.graph((torch.tensor(src_ids), torch.tensor(dst_ids)))

            # Edge data
            g.edata["type"] = torch.tensor(edge_types, dtype=torch.long)

            # Node annotation as one-hot of size hidden_size_orig
            one_hot = np.zeros((len(bg["nodes"]), self.config["hidden_size_orig"]), dtype=np.float32)
            one_hot[np.arange(len(bg["nodes"])), bg["nodes"]] = 1.0
            g.ndata["annotation"] = torch.tensor(one_hot, dtype=torch.float32)

            dgl_graphs.append(g)

            # Label(s)
            labels.append(bg["label"])

        # Batch graphs and labels
        dgl_graph = dgl.batch(dgl_graphs)
        labels = torch.tensor(labels, dtype=torch.float32)

        # Move to device
        dgl_graph = dgl_graph.to(self.device)
        labels = labels.to(self.device)

        return dgl_graph, labels

    # ----------------- Metrics -----------------

    def _flatten_pair(self, preds: torch.Tensor, labels: torch.Tensor):
        y_hat, y = preds, labels
        if y_hat.dim() == 1:
            y_hat = y_hat.unsqueeze(-1)
        if y.dim() == 1:
            y = y.unsqueeze(-1)
        return y_hat.reshape(-1), y.reshape(-1)

    def _compute_metrics(self, preds: torch.Tensor, labels: torch.Tensor) -> Dict[str, float]:
        y_hat, y = self._flatten_pair(preds, labels)
        diff = y_hat - y
        out: Dict[str, float] = {}

        if "mae" in self.metrics_to_compute:
            out["mae"] = torch.mean(torch.abs(diff)).item()
        if "mse" in self.metrics_to_compute or "rmse" in self.metrics_to_compute:
            mse_val = torch.mean(diff.pow(2))
            if "mse" in self.metrics_to_compute:
                out["mse"] = mse_val.item()
            if "rmse" in self.metrics_to_compute:
                out["rmse"] = torch.sqrt(mse_val).item()
        if "r2" in self.metrics_to_compute:
            y_mean = torch.mean(y)
            ss_res = torch.sum((y - y_hat).pow(2))
            ss_tot = torch.sum((y - y_mean).pow(2))
            r2 = 1.0 - (ss_res / ss_tot) if ss_tot > 0 else torch.tensor(0.0, device=y.device)
            out["r2"] = float(r2.item())
        if "mape" in self.metrics_to_compute:
            denom = torch.clamp(torch.abs(y), min=self.mape_eps)
            out["mape"] = (torch.mean(torch.abs(diff) / denom) * 100.0).item()

        return out

    # ----------------- Train / Eval -----------------

    def _train_init(self, data_train, data_valid):
        return self.__process_data(data_train), self.__process_data(data_valid)

    def _train_with_batch(self, batch):
        g, labels = self.__build_dgl_graph_and_labels(batch)

        self.model.train()
        self.opt.zero_grad()

        loss, preds = self.model(g, labels)
        loss.backward()
        self.opt.step()

        with torch.no_grad():
            metrics = self._compute_metrics(preds, labels)

        primary_value = metrics[self.primary_metric]
        train_loss = loss.item()
        return train_loss, primary_value

    def _train_with_data(self, data):
        # Convenience to match previous API
        return self._train_with_batch(data)

    def _test_init(self):
        self.model.eval()

    def _predict_with_batch(self, batch):
        g, labels = self.__build_dgl_graph_and_labels(batch)

        with torch.no_grad():
            loss, preds = self.model(g, labels)

        metrics = self._compute_metrics(preds, labels)
        primary_value = metrics[self.primary_metric]
        return primary_value, preds

    def _predict_with_data(self, data):
        self._test_init()
        data = self.__process_data(data)
        valid_primary, pred = self._predict_with_batch(data)

        y_true = [item["label"] for item in data]
        pred = pred.detach().cpu().numpy()
        if self.model.target_dim == 1:
            pred = pred.reshape(-1).tolist()
        else:
            pred = pred.tolist()

        return y_true, pred

    def _backup_best_weights(self, epoch):
        self.best_epoch_weights = {
            'epoch': epoch,
            'model_state_dict': self.model.state_dict(),
            'optimizer_state_dict': self.opt.state_dict()
        }

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
        """Restores model weights from given file."""
        start_time = time.perf_counter()
        self.best_epoch_weights = torch.load(path, map_location=self.device)
        self._restore_best_weights()
        end_time = time.perf_counter()
        return end_time - start_time