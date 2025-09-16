"""
GRAPH-BASED EXECUTION TIME AND SPEEDUP REGRESSION MODEL WITH FINE-TUNING

This implementation extends graph neural networks (GNNs) to predict program execution time and speedup using graph representations. 
Key features include multiple robust GNN architectures, multi-objective regression (time + speedup), 
GPU/CPU optimization, and fine-tuning capability for transfer learning.

## 1. Hyperparameter Optimization Strategies

- **Grid/Random Search**: Systematically test combinations of layer sizes, learning rates, dropout
- **Bayesian Optimization**: Use libraries like Optuna for efficient parameter space exploration
- **Cross-Validation**: 5-fold CV to evaluate parameter stability
- **Architecture-specific Tuning**: Different optimal parameters per GNN type

Example parameters to tune: 
  learning_rate = [1e-4, 5e-4, 1e-3]
  num_layers = [2, 3, 4, 5]
  hidden_size = [64, 128, 256]

## 2. Optimal Dataset Size Determination

- **Learning Curves**: Plot validation MAPE vs training set size
- **Power Analysis**: Estimate required n = (2 * std^2 * z^2) / (mape * mean)^2
- **Sub-sampling Test**: Train on 10%, 20%, ..., 100% of data
- **Diminishing Returns**: Identify the point where adding more data improves MAPE <1%

## 3. Sample Quality Assessment

- **Distribution Analysis**: Compare training/testing feature distributions
- **Outlier Detection**: Use Isolation Forests on graph metrics
- **Label Balance**: Ensure even coverage of time/speedup values
- **Graph Metrics**: Analyze size (nodes/edges), diameter, clustering coefficient

## 4. MAPE Reduction Strategies (Target ≤10%)

- **Loss Function**: Huber loss + MAPE penalty
- **Feature Engineering**: Add graph centrality metrics
- **Label Transformation**: Log scaling for skewed targets
- **Regularization**: Dropout (0.1-0.3), weight decay (1e-4)
- **Ensemble Methods**: Combine predictions from multiple GNNs
"""

"""
This module implements an Advanced GNN model for graph-level multi-target regression with:
- Multiple DGL backbones (GCN, GraphSAGE, GAT, GIN, GGNN, R-GCN, APPNP)
- Global Attention Pooling for graph-level readout
- Multi-output regression head (e.g., predict [time, speedup])
- MAPE/Huber/MSE loss choices
- Early-stopping via base Model (assumed)
- Optional layer freezing for fine-tuning
- Utility strategies: hyperparameter search stub, learning curve-based data sizing, sample quality checks, MAPE suggestions

The code emphasizes readability and pedagogical comments to help you learn GNN concepts and the DGL workflow.
"""


"""
NUMBER OF LAYERS

The number of layers is dependent on the specific network.

## 1. GCN, GraphSAGE, GAT, GIN, RGCN
    The number of layers is exactly the num_layers specified in the configuration.

## 2. GGNN
    The depth is controlled by num_timesteps (not the same as num_layers).
    This network has a fixed number of layers (timesteps) defined by num_timesteps, 
    which is a separate hyperparameter. The number of layers (in the usual sense) is 1, 
    but it unrolls for num_timesteps steps.

## 3. APPNP
    The depth is controlled by appnp_k (the propagation steps).
    This network has two components: a preprocessing MLP (one hidden layer, but note that the output 
    of the MLP is the same size) and then the APPNP propagation (which does k steps). The num_layers 
    parameter is not used in APPNP. Instead, the propagation depth is controlled by appnp_k.

## 4. How to Control the Number of Layers:
    When initializing the model, the configuration dictionary should include:
    "num_layers": for the number of layers in GCN, SAGE, GAT, GIN, and RGCN.
    "num_timesteps": for GGNN (this is equivalent to the depth in terms of propagation steps).
    "appnp_k": for APPNP (number of propagation steps).
"""

"""
EDGE FEATURES

| Network     | Uses Edge Features? | How?
|-----------------------------------|----------------------------------------------------------------- |  
| GCN         | Yes                 | As scalar weights (if configured)                                |
| GAT         | No                  | ot used in current implementation                                |
| GraphSAGE   | No                  | Not supported by the layer                                       |
| GIN         | No                  | Not supported by the layer                                       |
| R-GCN       | Yes                 | Discrete edge types (categorical) for relation-specific weights  |
| GGNN        | Yes                 | Discrete edge types for gated propagation                        |
| APPNP       |No                   | Only uses adjacency structure                                    |


| Graph Type                     | Recommended Network      |  
|--------------------------------|--------------------------|  
| Graphs with rich edge features | GCN (with edge weights)  |  
| Heterogeneous relations        | GGNN or R-GCN            |  
| Homogeneous large graphs       | GraphSAGE or APPNP       |  
| Structure-focused tasks        | GIN                      |  
| Attention-demanding problems   | GAT                      |  


## 1. Graphs with Rich Edge Features
Definition
    Graphs where edges carry significant, complex information beyond basic connectivity. 
    Edge features represent continuous or multi-dimensional properties.

Characteristics
    Edges have meaningful numerical attributes
    Edge information is critical for accurate predictions

Examples
    Transportation networks (edge weights = travel time, capacity)
    Molecular graphs (bond types, bond angles, bond strength)
    Financial transaction networks (transaction amount, frequency, risk score)

Why GCN works best
    GCN can directly incorporate continuous edge features as weights that scale neighbor 
    messages. Its convolutional aggregation naturally extends to weighting neighbor contributions:

    # GCN's edge weighting mechanism
    if self.use_edge_weight and edge_feats:
        eweight = self.edge_weight_proj(edge_feats)
    h = conv(graph, h, edge_weight=eweight)

Practical Tip
    When edges have categorical types instead of continuous features, GGNN or R-GCN would 
    be better choices.

## 2. Heterogeneous Relations
Definition
    Graphs with multiple types of relationships between nodes. Each relationship type has 
    distinct semantics.

Characteristics
    Multiple distinct edge types exist
    Relationships have different meanings/weights

Examples
    Program dependency graphs (data flow, control flow, call relationships)
    Knowledge graphs (person → works_at → company, person → friends_with → person)
    Biomedical networks (protein → interacts_with → protein, protein → inhibits → disease)

Why GGNN/R-GCN excel
    These networks maintain separate parameters for each relation type:

    # R-GCN's relation-specific computation
    h = conv(graph, h, etypes)  # etypes = [0,2,1,0,...] per edge

    # GGNN's edge-type handling
    h = self.ggnn(graph, h, etypes)

Practical Tip
    For graphs with <10 relation types, R-GCN works well. For >20 types, GGNN's gating 
    mechanism might be more efficient.

## 3. Homogeneous Large Graphs

Definition
    Uniform graphs with a single relationship type but very large scale (millions+ nodes/edges).

Characteristics
    Massive node counts
    Mostly uniform connectivity
    Examples:
    Social networks (users and friendships)
    Recommendation systems (users and items)
    Web graphs (pages and hyperlinks)

Why GraphSAGE/APPNP shine
    They employ sampling strategies that scale linearly with graph size:

    # GraphSAGE samples neighbors:
    # Only processes a fixed neighborhood per node
    h = conv(graph, h)  # Automatically samples neighbors

    # APPNP decouples propagation:
    h0 = self.pre(h)       # Compute once
    h = self.appnp(graph, h0)  # Efficient propagation

Practical Tip
    For billion-scale graphs, combine GraphSAGE with neighborhood sampling and distributed training.

## 4. Structure-Focused Tasks

Definition
    Problems where the graph's topological arrangement is the primary signal for predictions.

Characteristics
    Graph isomorphism matters
    Global structure > local features

Examples
    Molecule property prediction (same atoms, different arrangements)
    Program similarity detection
    Fraud detection in transaction networks

Why GIN dominates
    GIN's architecture is provably as powerful as the Weisfeiler-Lehman graph isomorphism test:

    # GIN's structure-aware aggregation
    h = conv(graph, h)  # Uses sum aggregation (critical for structure awareness)

Practical Tip: Add cycle counts or other graph invariants as node features to boost structural awareness.

## 5. Attention-Demanding Problems

Definition
    Cases where neighbor importance varies significantly based on context.

Characteristics
    Critical neighbors exist among many irrelevant ones
    Importance depends on current state

Examples
    Fault localization in systems (critical dependencies)
    Drug-target interaction prediction
    Fake news detection in social networks

Why GAT outperforms
    Its attention mechanism dynamically weights neighbors:

    # GAT computes attention weights:
    # α_ij = f(hi, hj) where i = target node, j = neighbor
    h = conv(graph, h).flatten(1)  # [N, heads, feats] → [N, heads*feats]

Practical Tip
    Monitor attention patterns for model interpretability - they often reveal why a prediction was made.

## 6. Decision Flowchart for Architecture Selection

mermaid
graph TD
    A[Start with graph type] --> B{Edge features?}
    B -->|Rich continuous| C[GCN]
    B -->|Multiple relations| D{Many types?}
    D -->|Few < 10| E[R-GCN]
    D -->|Many > 10| F[GGNN]
    B -->|No features| G{Graph size?}
    G -->|Massive| H[GraphSAGE/APPNP]
    G -->|Normal| I{Task focus?}
    I -->|Structure| J[GIN]
    I -->|Attention| K[GAT]

++ Key Considerations

Hybrid graphs (e.g., social networks with rich edge features): Combine approaches
Temporal graphs: Use GGNN for its sequential processing
Ultra-sparse graphs: APPNP handles long-range dependencies well
Dynamic graphs: GAT adapts best to changing relationships

++ Always validate architectural choices through ablation studies measuring

Relative MAPE reduction
Training time per epoch
Memory footprint
Interpretability of results

"""

import os
import time
import json
import uuid
import joblib  
import pandas as pd  
import numpy as np
import matplotlib.pyplot as plt

import torch
import torch.nn as nn
from torch.optim import Adam

import optuna  
from optuna.trial import TrialState  
from optuna.integration import PyTorchLightningPruningCallback  

from tqdm import tqdm
from copy import deepcopy  
from dataclasses import dataclass
from typing import List, Dict, Any, Iterable, Optional, Tuple, Union

from scipy import sparse
from scipy.sparse.linalg import eigsh
from scipy.stats import ks_2samp, entropy

from sklearn.ensemble import IsolationForest
from sklearn.model_selection import KFold, train_test_split
from sklearn.metrics import mean_absolute_percentage_error
from sklearn.metrics import mean_absolute_error, mean_squared_error, r2_score

import dgl
from dgl.nn.pytorch import (
    GlobalAttentionPooling,  # Graph-level readout via learned attention scores per node
    GatedGraphConv,          # GGNN backbone
    GraphConv,               # GCN backbone
    SAGEConv,                # GraphSAGE backbone
    GATConv,                 # GAT backbone
    GINConv,                 # GIN backbone
    RelGraphConv,            # R-GCN backbone
    APPNPConv,               # APPNP propagation
)

from rouxinol.learning.supervised.model_complex import Model  # Base framework Model


# ---------------------------
# Utilities
# ---------------------------

def _get_activation(name: str) -> nn.Module:
    """
    Map a string to a torch activation module.

    Why it matters:
    - ReLU: simple, fast, generally a strong default for GNNs.
    - GELU: smoother, often helps transformers/attention-based models.
    - Tanh: bounded, may constrain representation; can help stability.
    - LeakyReLU: mitigates dead neurons in ReLU.

    Recommended defaults: 'relu' or 'gelu'.
    """
    name = str(name).lower()
    if name == "relu":
        return nn.ReLU()
    if name == "gelu":
        return nn.GELU()
    if name == "tanh":
        return nn.Tanh()
    if name == "leakyrelu":
        # Negative slope is configurable; expose if needed.
        return nn.LeakyReLU(negative_slope=0.1)
    raise ValueError(f"Unsupported activation: {name}")


# ---------------------------
# Call backs
# ---------------------------

class TorchPruningCallback:
    """Callback for Optuna pruning with PyTorch training"""
    def __init__(self, trial, monitor_metric, min_delta=0.0, patience=5):
        self.trial = trial
        self.monitor = monitor_metric
        self.min_delta = min_delta
        self.patience = patience
        
        self.best_metric = float('inf')
        self.counter = 0
        
    def on_epoch_end(self, epoch, logs=None):
        """Called at epoch end to decide pruning"""
        current = logs.get(self.monitor)
        if current is None:
            return
            
        # Improvement tracking
        improvement = (self.best_metric - current) >= self.min_delta
        
        if improvement:
            self.best_metric = current
            self.counter = 0
        else:
            self.counter += 1
            
        # Report to Optuna
        self.trial.report(current, epoch)
        
        # Prune condition
        if self.counter >= self.patience or self.trial.should_prune():
            self.trial.set_user_attr("pruned_epoch", epoch)
            self.trial.set_user_attr("best_metric", self.best_metric)
            raise optuna.TrialPruned()

# -----------------------------------------------------
# Advanced Feature Extraction for Multigraph Datasets
# -----------------------------------------------------

class BatchGraphFeatureEngineer:
    """
    Batch processing pipeline for enhancing graph representations with structural,
    positional, and interaction features for multigraph machine learning tasks.

    Purpose:
        Enhances graph representations with structural, positional, and interaction features to improve 
        downstream graph machine learning performance. Designed for multigraphs with discrete node/edge attributes.

    Key Capabilities:
        1. Structural Feature Extraction:
            - Directional degree features (in/out/total)
            - Feature-specific degree distributions
            - Graph-level statistics broadcasted to nodes
            - Directional connectivity patterns
            
        2. Positional Encoding Methods:
            - Laplacian-based spectral embeddings (edge feature-weighted)
            - Feature diffusion propagations
            - Random walk statistics
            
        3. Attribute Interaction Analysis:
            - Homophily/heterophily quantification
            - Neighbor attribute distributions
            - Edge-type interaction patterns
            
    Graph Representation:
        Each graph is a dictionary with:
            "nodes": List[int]        - Node attribute indices
            "edges": List[List]       - Edges as [source_idx, edge_attribute, target_idx]
            "num_attrs": int           - Number of distinct node attribute types

    Implementation Notes:
        - Fully vectorized operations using NumPy for efficiency
        - Progress tracking with tqdm
        - Edge feature integration in structural calculations
        - Automatic handling of disconnected components
        - Preservation of original graph structure

    Typical Usage:
        engineer = BatchGraphFeatureEngineer()
        config = {
            "structural": True,
            "positional": {"method": "laplacian", "dim": 8},
            "interactions": True,
            "progress": True
        }
        enhanced_graphs = engineer.process_graph_list(raw_graphs, config)

    Feature Matrix Composition:
        [Original_attr, In_degree, Out_degree, Total_degree, 
         Norm_in_degree, Norm_out_degree, Direction_ratio, 
         F_out_degree_0, ... F_out_degree_K, F_in_degree_0, ... F_in_degree_K, 
         Graph_stat_1, ... Graph_stat_M, 
         Positional_enc_1, ... Positional_enc_P, 
         Neighbor_attr_dist_1, ... Neighbor_attr_dist_K]
         
    Dimensions: 1 + 3 + 2 + 1 + 2*K + M + P + K

    EXAMPLE:
    
    # Initialize a complex multigraph dataset
    complex_graphs = [
        # Communication network with device types
        {
            "nodes": [1, 1, 2, 2, 3],  # Device types
            "edges": [
                [0, 101, 1],  # [source, protocol_type, target]
                [0, 102, 2],
                [1, 103, 3],
                [2, 101, 4],
                [3, 104, 0]
            ],
            "num_attrs": 4  # Number of device types
        },
        # Social network with interest categories
        {
            "nodes": [0, 1, 0, 2, 1],
            "edges": [
                [0, 201, 1],  # [user, interaction_type, friend]
                [1, 202, 2],
                [0, 203, 3],
                [3, 201, 4],
                [1, 204, 3]
            ],
            "num_attrs": 3  # Interest categories
        }
    ]

    # Configure feature extraction pipeline
    feature_config = {
        "structural": True,
        "positional": {
            "method": "laplacian", 
            "dim": 6, 
            "edge_feat_weight": 0.2
        },
        "interactions": True,
        "progress": True
    }

    # Process entire dataset
    enhanced_graphs = BatchGraphFeatureEngineer.process_graph_list(
        complex_graphs, 
        config=feature_config
    )
    """
    
    @staticmethod
    def add_structural_features(graph: Dict) -> Dict:
        """
        Compute advanced structural features accounting for:
        - Directional connectivity patterns
        - Feature-specific degree distributions
        - Graph-level statistics
        - Structural diversity metrics
        
        Args:
            graph: Multigraph representation dictionary
            
        Returns:
            Enhanced graph with node_features and stats attributes
        """
        nodes = np.array(graph["nodes"])
        n_nodes = len(nodes)
        edge_list = np.array(graph["edges"])
        
        # Initialize degree arrays
        in_degree = np.zeros(n_nodes, dtype=np.int32)
        out_degree = np.zeros(n_nodes, dtype=np.int32)
        total_degree = np.zeros(n_nodes, dtype=np.int32)
        
        # Feature-specific degree distributions
        # (Separate tracking for in/out degrees per attribute type)
        feature_out = np.zeros((n_nodes, graph["num_attrs"]), dtype=np.int32)
        feature_in = np.zeros((n_nodes, graph["num_attrs"]), dtype=np.int32)
        
        if edge_list.size > 0:
            # Extract edge components
            src = edge_list[:, 0]
            edge_feat = edge_list[:, 1]
            tgt = edge_list[:, 2]
            
            # Compute directional degrees
            np.add.at(out_degree, src, 1)  # Vectorized out-degree accumulation
            np.add.at(in_degree, tgt, 1)    # Vectorized in-degree accumulation
            
            # Calculate feature-specific connectivity patterns
            for node_idx in range(n_nodes):
                node_attr = nodes[node_idx]
                
                # Feature-matching outgoing connections
                out_mask = (src == node_idx)
                if out_mask.any():
                    # Count targets with matching attribute
                    same_attr_mask = (nodes[tgt[out_mask]] == node_attr)
                    feature_out[node_idx, node_attr] = same_attr_mask.sum()
                
                # Feature-matching incoming connections
                in_mask = (tgt == node_idx)
                if in_mask.any():
                    # Count sources with matching attribute
                    same_attr_mask = (nodes[src[in_mask]] == node_attr)
                    feature_in[node_idx, node_attr] = same_attr_mask.sum()
        
        # Compute composite metrics
        total_degree = in_degree + out_degree
        in_degree_norm = in_degree / np.maximum(in_degree.max(), 1)  # Avoid division by zero
        out_degree_norm = out_degree / np.maximum(out_degree.max(), 1)
        
        # Directional balance feature: log(out) - log(in)
        # (Positive = output-oriented, Negative = input-oriented)
        with np.errstate(divide='ignore'):  # Suppress log(0) warnings
            direction_ratio = np.log1p(out_degree) - np.log1p(in_degree)
        direction_ratio = np.nan_to_num(direction_ratio, nan=0.0)
        
        # Compute graph-level diversity metrics
        degree_entropy = entropy(np.bincount(total_degree)) if n_nodes > 1 else 0
        feature_counts = np.bincount(nodes, minlength=graph["num_attrs"])
        feature_diversity = entropy(feature_counts) if feature_counts.sum() > 0 else 0
        
        # Assemble broadcastable graph statistics
        stats = np.array([
            n_nodes,                            # Node count
            len(edge_list),                     # Edge count
            degree_entropy,                     # Degree distribution entropy
            feature_diversity                   # Feature distribution entropy
        ])
        
        # Construct comprehensive feature matrix
        feature_components = [
            nodes.reshape(-1, 1),              # Original attribute index
            in_degree.reshape(-1, 1),           # Raw in-degree
            out_degree.reshape(-1, 1),          # Raw out-degree
            total_degree.reshape(-1, 1),        # Total degree
            in_degree_norm.reshape(-1, 1),      # Normalized in-degree [0,1]
            out_degree_norm.reshape(-1, 1),     # Normalized out-degree [0,1]
            direction_ratio.reshape(-1, 1),     # Directional balance
            feature_out,                        # Attribute-specific outgoing degrees
            feature_in,                         # Attribute-specific incoming degrees
            np.tile(stats, (n_nodes, 1))        # Graph statistics (broadcasted)
        ]
        
        # Final feature matrix assembly
        graph["node_features"] = np.hstack(feature_components)
        
        # Store stats for later analysis
        graph["stats"] = {
            "n_nodes": n_nodes,
            "n_edges": len(edge_list),
            "degree_entropy": degree_entropy,
            "feature_diversity": feature_diversity
        }
        
        return graph

    @staticmethod
    def add_positional_encodings(
        graph: Dict,
        method: str = "laplacian",
        dim: int = 8,
        edge_feat_weight: float = 0.1
    ) -> Dict:
        """
        Compute structural position encodings with edge feature integration
        
        Args:
            graph: Multigraph representation
            method: 
                "laplacian": Spectral embeddings using normalized Laplacian
                "diffusion": Feature-weighted random walk propagation
            dim: Output dimensionality of positional encoding
            edge_feat_weight: Influence of edge attributes on connectivity
            
        Returns:
            Graph with positional encodings appended to node features
        """
        # Skip processing for empty graphs
        n_nodes = len(graph["nodes"])
        if n_nodes == 0:
            return graph
            
        edge_list = np.array(graph["edges"])
        
        # Initialize adjacency matrix
        adj = np.zeros((n_nodes, n_nodes))
        
        # Process edges if they exist
        if edge_list.size > 0:
            src = edge_list[:, 0]
            edge_feat = edge_list[:, 1]
            tgt = edge_list[:, 2]
            
            if method == "laplacian":
                # Spectral method: edge features as connection weights
                for i in range(len(edge_list)):
                    s, e, t = src[i], edge_feat[i], tgt[i]
                    # Linear combination: base connection + edge feature contribution
                    adj[s, t] += 1 + edge_feat_weight * e
                    
            elif method == "diffusion":
                # Propagation method: logarithmic feature weighting
                for i in range(len(edge_list)):
                    s, e, t = src[i], edge_feat[i], tgt[i]
                    adj[s, t] += np.log1p(e)  # Logarithmic scaling

        # Handle completely disconnected graphs
        if np.all(adj == 0):
            pe = np.zeros((n_nodes, dim))
        elif method == "laplacian":
            # Convert to sparse matrix format
            W = sparse.csr_matrix(adj)
            
            # Compute normalized Laplacian: L = I - D^{-1/2} W D^{-1/2}
            deg = np.array(W.sum(axis=1)).flatten()
            deg_sqrt_inv = 1 / np.sqrt(np.maximum(deg, 1e-6))
            D_inv_sqrt = sparse.diags(deg_sqrt_inv)
            L = sparse.eye(n_nodes) - D_inv_sqrt @ W @ D_inv_sqrt
            
            # Compute spectral embeddings (skip first trivial eigenvector)
            try:
                # Compute k smallest eigenvectors (k = dim+1)
                _, eigenvectors = eigsh(L, k=dim+1, which='SM')
                pe = eigenvectors[:, 1:dim+1]  # Remove first eigenvector
            except Exception as e:
                # Fallback to zeros in case of numerical issues
                pe = np.zeros((n_nodes, dim))
                
        elif method == "diffusion":
            # Diffusion process propagation
            W = sparse.csr_matrix(adj)
            
            # Create normalized transition matrix
            row_sum = np.array(W.sum(axis=1)).flatten()
            P = W / np.maximum(row_sum[:, None], 1)  # Transition probability matrix
            
            # Initialize random embeddings
            pe = np.random.randn(n_nodes, dim)
            
            # Propagate through graph structure
            for _ in range(50):
                pe = P @ pe  # Diffuse through connections
                pe = pe / (np.linalg.norm(pe, axis=0) + 1e-6)  # Normalize
                
        # Append to existing features
        graph["node_features"] = np.hstack([graph["node_features"], pe])
        return graph

    @staticmethod
    def add_neighbor_interactions(graph: Dict) -> Dict:
        """
        Compute neighbor attribute interaction patterns to capture:
        - Homophily: Tendency to connect with similar nodes
        - Heterophily: Tendency to connect with different nodes
        - Feature preference: Biases toward specific attributes
        
        Args:
            graph: Multigraph representation
            
        Returns:
            Graph with normalized neighbor attribute distribution appended
        """
        nodes = np.array(graph["nodes"])
        edge_list = np.array(graph["edges"])
        n_nodes = len(nodes)
        num_attrs = graph["num_attrs"]
        
        # Initialize neighbor distribution matrices
        neighbor_attrs = np.zeros((n_nodes, num_attrs))
        
        if edge_list.size > 0:
            src = edge_list[:, 0]
            tgt = edge_list[:, 2]
            
            # Accumulate neighbor attributes
            for s, t in zip(src, tgt):
                # Add target attribute to source's neighbor profile
                neighbor_attrs[s, nodes[t]] += 1
                
                # Add source attribute to target's neighbor profile
                neighbor_attrs[t, nodes[s]] += 1
            
            # Normalize to probability distributions
            row_sum = neighbor_attrs.sum(axis=1, keepdims=True)
            neighbor_attrs = neighbor_attrs / np.maximum(row_sum, 1)
        
        # Append to feature matrix
        graph["node_features"] = np.hstack([graph["node_features"], neighbor_attrs])
        return graph

    @staticmethod
    def process_graph_list(
        graph_list: List[Dict],
        config: Dict = {
            "structural": True,
            "positional": {"method": "laplacian", "dim": 8},
            "interactions": True,
            "progress": True
        }
    ) -> List[Dict]:
        """
        Full feature engineering pipeline for processing batches of graphs
        
        Args:
            graph_list: List of graph dictionaries to process
            config: Processing configuration dictionary:
                - structural: Enable structural features (bool)
                - positional: Dictionary with:
                    - method: "laplacian" or "diffusion"
                    - dim: Embedding dimension
                    - edge_feat_weight: Edge feature influence [0-1]
                - interactions: Enable neighbor interaction features (bool)
                - progress: Show progress bar (bool)
                
        Returns:
            List of enhanced graphs with node_features attribute added
        """
        processed_graphs = []
        
        # Configure progress tracking
        iterator = graph_list
        if config.get("progress", True):
            iterator = tqdm(graph_list, desc="Processing graphs")
        
        for graph in iterator:
            # Create a working copy preserving original data
            processed = {**graph}  # Shallow copy
            
            # Apply structural feature engineering
            if config.get("structural", True):
                processed = BatchGraphFeatureEngineer.add_structural_features(processed)
            
            # Apply positional encoding
            if "positional" in config and config["positional"].get("enable", True):
                pe_config = config["positional"]
                processed = BatchGraphFeatureEngineer.add_positional_encodings(
                    processed,
                    method=pe_config.get("method", "laplacian"),
                    dim=pe_config.get("dim", 8),
                    edge_feat_weight=pe_config.get("edge_feat_weight", 0.1)
                )
            
            # Apply neighbor interaction analysis
            if config.get("interactions", True):
                processed = BatchGraphFeatureEngineer.add_neighbor_interactions(processed)
            
            processed_graphs.append(processed)
            
        return processed_graphs


# ---------------------------
# Base Graph Regressor
# ---------------------------

class BaseGraphRegressor(nn.Module):
    """
    Base class for graph-level regressors using DGL.

    Pipeline (per batch of graphs):
    1) Node feature embedding/projection (node_reduce) brings raw node features to hidden size.
    2) Optional edge feature embedding/projection (edge_reduce) if available in the backbone.
    3) Message passing via encode_nodes(...) implemented in subclasses (GCN/GAT/...).
    4) Concatenate propagated node states with initial projected node features (skip-like).
    5) Global attention pooling over nodes to get a graph-level embedding.
    6) Linear regression head outputs target_dim values per graph.
    7) Compute loss if labels provided; otherwise return predictions.
    """

    def __init__(self, config: Dict[str, Any]):
        super().__init__()

        # Required sizes (as provided)
        # If embeddings are enabled, node_feat_size/edge_feat_size can be "vocab sizes"
        self.node_feat_size: int = int(config.get("node_feat_size", 0))
        self.edge_feat_size: int = int(config.get("edge_feat_size", 0))
        self.hidden_size: int = int(config["gnn_h_size"])
        self.target_dim: int = int(config.get("target_dim", 2))

        # Embedding toggles
        # - If True, ndata['feat'] must be LongTensor of shape [N] (single categorical id per node).
        # - If False, ndata['feat'] must be FloatTensor of shape [N, node_feat_size].
        self.use_node_embedding: bool = bool(config.get("use_node_embedding", False))
        self.use_edge_embedding: bool = bool(config.get("use_edge_embedding", False))

        # Optional explicit embed dims (defaults to hidden_size)
        self.node_embed_dim: int = int(config.get("node_embed_dim", self.hidden_size))
        self.edge_embed_dim: int = int(config.get("edge_embed_dim", self.hidden_size))

        # Architectural knobs
        self.num_layers: int = int(config.get("num_layers", 3))
        self.dropout_p: float = float(config.get("dropout", 0.1))
        self.act: nn.Module = _get_activation(config.get("activation", "relu"))
        self.dropout: nn.Module = nn.Dropout(self.dropout_p) if self.dropout_p > 0 else nn.Identity()

        # Node input mapping
        if self.use_node_embedding:
            node_vocab_size = int(config["node_vocab_size"]) if "node_vocab_size" in config else self.node_feat_size
            if node_vocab_size <= 0:
                raise ValueError("use_node_embedding=True requires positive node_vocab_size or node_feat_size > 0")
            self.node_embedding = nn.Embedding(num_embeddings=node_vocab_size, embedding_dim=self.node_embed_dim)
            # Project embedding dim to hidden if needed
            if self.node_embed_dim != self.hidden_size:
                self.node_reduce = nn.Linear(self.node_embed_dim, self.hidden_size)
            else:
                self.node_reduce = nn.Identity()
        else:
            # Expect float features of size node_feat_size
            if self.node_feat_size <= 0:
                raise ValueError("use_node_embedding=False requires node_feat_size > 0 (float feature dimension).")
            self.node_embedding = None
            self.node_reduce = nn.Linear(self.node_feat_size, self.hidden_size)

        # Edge input mapping (optional for some backbones)
        # If using embeddings, edata['feat'] must be LongTensor [E]; else FloatTensor [E, edge_feat_size]
        if self.use_edge_embedding:
            edge_vocab_size = int(config["edge_vocab_size"]) if "edge_vocab_size" in config else self.edge_feat_size
            if edge_vocab_size <= 0:
                raise ValueError("use_edge_embedding=True requires positive edge_vocab_size or edge_feat_size > 0")
            self.edge_embedding = nn.Embedding(num_embeddings=edge_vocab_size, embedding_dim=self.edge_embed_dim)
            if self.edge_embed_dim != self.hidden_size:
                self.edge_reduce = nn.Linear(self.edge_embed_dim, self.hidden_size)
            else:
                self.edge_reduce = nn.Identity()
        else:
            self.edge_embedding = None
            self.edge_reduce = nn.Linear(self.edge_feat_size, self.hidden_size) if self.edge_feat_size > 0 else None

        # Global attention pooling
        self.pooling = GlobalAttentionPooling(gate_nn=nn.Linear(self.hidden_size * 2, 1))

        # Output head
        self.output_layer = nn.Linear(self.hidden_size * 2, self.target_dim)

        # Loss selection
        loss_name = str(config.get("loss_name", "mape")).lower()
        if loss_name == "mape":
            self.mape_eps: float = float(config.get("mape_epsilon", 1e-8))
            self.loss_fn = lambda preds, labels: self._mape_loss(preds, labels, eps=self.mape_eps)
        elif loss_name == "huber":
            delta = float(config.get("huber_delta", 1.0))
            self.loss_fn = nn.SmoothL1Loss(beta=delta, reduction="mean")
        elif loss_name == "mse":
            self.loss_fn = nn.MSELoss(reduction="mean")
        else:
            raise ValueError("Unsupported loss_name. Use 'mape', 'mse', or 'huber'.")

    def _mape_loss(self, preds: torch.Tensor, labels: torch.Tensor, eps: float = 1e-8) -> torch.Tensor:
        return torch.mean(torch.abs((labels - preds) / torch.clamp(torch.abs(labels), min=eps))) * 100.0

    def encode_nodes(self, graph: dgl.DGLGraph, h: torch.Tensor, edge_feats: Optional[torch.Tensor]) -> torch.Tensor:
        raise NotImplementedError

    def forward(self, graph: dgl.DGLGraph, labels: Optional[torch.Tensor] = None):
        # Retrieve node features
        if self.use_node_embedding:
            # Expect LongTensor [N]
            node_ids = graph.ndata["feat"].long().view(-1)
            h0_in = self.node_embedding(node_ids)  # [N, node_embed_dim]
        else:
            node_feats = graph.ndata["feat"].float()  # [N, node_feat_size]
            if node_feats.size(-1) != self.node_feat_size:
                raise ValueError(f"Node feature dim mismatch: got {node_feats.size(-1)}, expected {self.node_feat_size}")
            h0_in = node_feats

        # Project to hidden
        h0 = self.node_reduce(h0_in)  # [N, hidden_size]

        # Edge features (optional)
        edge_feats = None
        if self.use_edge_embedding:
            if "feat" in graph.edata:
                edge_ids = graph.edata["feat"].long().view(-1)
                e_in = self.edge_embedding(edge_ids)  # [E, edge_embed_dim]
                edge_feats = self.edge_reduce(e_in)   # [E, hidden_size]
        else:
            if self.edge_reduce is not None and "feat" in graph.edata:
                raw_e = graph.edata["feat"].float()
                if raw_e.size(-1) != self.edge_feat_size:
                    raise ValueError(f"Edge feature dim mismatch: got {raw_e.size(-1)}, expected {self.edge_feat_size}")
                edge_feats = self.edge_reduce(raw_e)  # [E, hidden_size]

        # Backbone message passing
        h = self.encode_nodes(graph, h0, edge_feats)  # [N, hidden_size]

        # Skip-like concat
        node_repr = torch.cat([h, h0], dim=-1)  # [N, 2*hidden_size]

        # Graph pooling
        graph_repr = self.pooling(graph, node_repr)  # [B, 2*hidden_size]

        # Predict
        preds = self.output_layer(graph_repr)  # [B, target_dim]
        preds_out = preds.squeeze(-1) if self.target_dim == 1 else preds

        if labels is not None:
            labels = labels.float()
            if labels.shape[-1] != self.target_dim:
                raise ValueError(f"Labels dim {labels.shape[-1]} != target_dim {self.target_dim}")
            loss = self.loss_fn(preds, labels)
            return loss, preds_out

        return preds_out

# ---------------------------
# Backbones
# ---------------------------

class Net_GGNN(BaseGraphRegressor):
    """
    Gated Graph Neural Network (GGNN):
    - Applies GRU-like gated updates across T time steps.
    - Requires discrete edge types; messages are type-specific.
    - Good when edge semantics matter (e.g., data/control dependencies).

    Config:
    - num_timesteps (int): number of propagation steps (typical range: 4-12)
    - num_edge_types (int): number of relation types
    """
    def __init__(self, config: Dict[str, Any]):
        super().__init__(config)
        self.n_steps = int(config.get("num_timesteps", 8))
        self.n_etypes = int(config["num_edge_types"])
        self.ggnn = GatedGraphConv(
            in_feats=self.hidden_size,
            out_feats=self.hidden_size,
            n_steps=self.n_steps,
            n_etypes=self.n_etypes,
        )

    def encode_nodes(self, graph, h: torch.Tensor, edge_feats: Optional[torch.Tensor]) -> torch.Tensor:
        if "type" not in graph.edata:
            raise ValueError("GGNN requires graph.edata['type'] for edge relation ids.")
        etypes = graph.edata["type"].long()
        h = self.ggnn(graph, h, etypes)
        return h

class Net_GCN(BaseGraphRegressor):
    """
    Graph Convolutional Network (GCN):
    - Aggregates normalized neighbor messages.
    - Simple and efficient; captures local smoothing behavior.

    Notes:
    - Standard GraphConv in DGL allows optional edge_weight (scalar per edge).
      If you encode edge features, you typically need to reduce them to scalars first.
    """
    def __init__(self, config: Dict[str, Any]):
        super().__init__(config)
        self.layers = nn.ModuleList([
            GraphConv(self.hidden_size, self.hidden_size, norm="both", allow_zero_in_degree=True)
            for _ in range(self.num_layers)
        ])

        # Edge weight projection
        self.use_edge_weight: bool = bool(config.get("use_edge_weight", False))
        if self.use_edge_weight:
            if self.use_edge_embedding:
                in_dim = self.edge_embed_dim if self.edge_embed_dim == self.hidden_size else self.hidden_size
            elif self.edge_reduce is not None:
                in_dim = self.hidden_size
            else:
                in_dim = self.edge_feat_size
            if in_dim and in_dim > 0:
                self.edge_weight_proj = nn.Sequential(
                    nn.Linear(in_dim, max(8, in_dim // 2)),
                    nn.ReLU(),
                    nn.Linear(max(8, in_dim // 2), 1),
                )
            else:
                self.edge_weight_proj = None
        else:
            self.edge_weight_proj = None

    def encode_nodes(self, graph, h: torch.Tensor, edge_feats: Optional[torch.Tensor]) -> torch.Tensor:
        # Compute optional edge weights
        eweight = None
        if self.use_edge_weight and self.edge_weight_proj is not None:
            if edge_feats is not None:
                feats = edge_feats  # [E, hidden_size] (or edge_embed_dim==hidden handled upstream)
            elif "feat" in graph.edata:
                feats = graph.edata["feat"].float() if not self.use_edge_embedding else None
                if feats is None:
                    raise ValueError("use_edge_embedding=True but edge embeddings were not materialized.")
            else:
                feats = None
            if feats is None:
                raise ValueError("use_edge_weight=True but no edge features available.")
            eweight = self.edge_weight_proj(feats).squeeze(-1)  # [E]

        for conv in self.layers:
            h = conv(graph, h, edge_weight=eweight)
            h = self.act(h)
            h = self.dropout(h)
        return h


class Net_SAGE(BaseGraphRegressor):
    """
    GraphSAGE:
    - Aggregates sampled neighbor features via Mean/Pool/LSTM aggregator.
    - Scales to large graphs; good inductive bias.

    Config:
    - sage_aggregator: 'mean' (default), 'pool', or 'lstm'
    """
    def __init__(self, config: Dict[str, Any]):
        super().__init__(config)
        aggregator = str(config.get("sage_aggregator", "mean")).lower()
        self.layers = nn.ModuleList([
            SAGEConv(self.hidden_size, self.hidden_size, aggregator_type=aggregator)
            for _ in range(self.num_layers)
        ])

    def encode_nodes(self, graph, h: torch.Tensor, edge_feats: Optional[torch.Tensor]) -> torch.Tensor:
        for conv in self.layers:
            h = conv(graph, h)
            h = self.act(h)
            h = self.dropout(h)
        return h


class Net_GAT(BaseGraphRegressor):
    """
    Graph Attention Network (GAT):
    - Learns attention weights over neighbors, capturing varying importance.
    - Multi-head attention stabilizes training.

    Config:
    - gat_num_heads (int): number of attention heads (typical 4-8)
    - hidden size is split across heads; ensure hidden_size % num_heads == 0
    """
    def __init__(self, config: Dict[str, Any]):
        super().__init__(config)
        self.num_heads = int(config.get("gat_num_heads", 8))
        if self.hidden_size % self.num_heads != 0:
            raise ValueError(f"hidden_size ({self.hidden_size}) must be divisible by gat_num_heads ({self.num_heads}).")
        out_feats = self.hidden_size // self.num_heads
        self.convs = nn.ModuleList([
            GATConv(self.hidden_size, out_feats, num_heads=self.num_heads, allow_zero_in_degree=True)
            for _ in range(self.num_layers)
        ])

    def encode_nodes(self, graph, h: torch.Tensor, edge_feats: Optional[torch.Tensor]) -> torch.Tensor:
        for conv in self.convs:
            h = conv(graph, h)         # [N, num_heads, out_feats]
            h = h.flatten(1)           # -> [N, hidden_size]
            h = self.act(h)
            h = self.dropout(h)
        return h


class Net_GIN(BaseGraphRegressor):
    """
    Graph Isomorphism Network (GIN):
    - Powerful for distinguishing graph structures; uses MLP per layer and sum aggregation.
    - Often benefits from more layers than GCN/GAT.

    Tip:
    - BatchNorm in MLPs can help stability; add if needed.
    """
    def __init__(self, config: Dict[str, Any]):
        super().__init__(config)
        self.convs = nn.ModuleList()
        for _ in range(self.num_layers):
            mlp = nn.Sequential(
                nn.Linear(self.hidden_size, self.hidden_size),
                self.act,
                nn.Linear(self.hidden_size, self.hidden_size),
            )
            self.convs.append(GINConv(mlp, aggregator_type='sum'))

    def encode_nodes(self, graph, h: torch.Tensor, edge_feats: Optional[torch.Tensor]) -> torch.Tensor:
        for conv in self.convs:
            h = conv(graph, h)
            h = self.act(h)
            h = self.dropout(h)
        return h


class Net_RGCN(BaseGraphRegressor):
    """
    Relational GCN (R-GCN):
    - Handles multiple edge relation types.
    - Uses basis decomposition to reduce parameter count for many relations.

    Config:
    - num_edge_types (int): number of relations
    - rgcn_num_bases (int): number of bases for decomposition (default 4-8)
    """
    def __init__(self, config: Dict[str, Any]):
        super().__init__(config)
        self.n_etypes = int(config["num_edge_types"])
        num_bases = int(config.get("rgcn_num_bases", 4))
        self.layers = nn.ModuleList([
            RelGraphConv(self.hidden_size, self.hidden_size, num_rels=self.n_etypes, regularizer="basis", num_bases=num_bases)
            for _ in range(self.num_layers)
        ])

    def encode_nodes(self, graph, h: torch.Tensor, edge_feats: Optional[torch.Tensor]) -> torch.Tensor:
        if "type" not in graph.edata:
            raise ValueError("RGCN requires graph.edata['type'] for edge relation ids.")
        etypes = graph.edata["type"].long()
        for conv in self.layers:
            h = conv(graph, h, etypes)
            h = self.act(h)
            h = self.dropout(h)
        return h


class Net_APPNP(BaseGraphRegressor):
    """
    APPNP:
    - Combines an MLP pre-transform with personalized PageRank-like propagation.
    - Mitigates oversmoothing with teleport probability alpha.

    Config:
    - appnp_k (int): number of propagation steps (default 10)
    - appnp_alpha (float): teleport probability, typically 0.1
    """
    def __init__(self, config: Dict[str, Any]):
        super().__init__(config)
        self.pre = nn.Sequential(
            nn.Linear(self.hidden_size, self.hidden_size),
            self.act,
            self.dropout,
        )
        k = int(config.get("appnp_k", 10))
        alpha = float(config.get("appnp_alpha", 0.1))
        self.appnp = APPNPConv(k, alpha)

    def encode_nodes(self, graph, h: torch.Tensor, edge_feats: Optional[torch.Tensor]) -> torch.Tensor:
        h0 = self.pre(h)
        h = self.appnp(graph, h0)
        return h


# ---------------------------
# Backbone Factory
# ---------------------------

def get_net(config: Dict[str, Any]) -> nn.Module:
    """
    Select a GNN architecture by name. Defaults to GAT.

    Practical guidance:
    - Start with GAT or GIN for expressive power.
    - Try GCN for speed/baseline.
    - Use R-GCN/GGNN when edge types matter.
    """
    arch = str(config.get("gnn_arch", "gat")).lower()
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
    raise ValueError(f"Unknown gnn_arch='{arch}'.")


# ---------------------------
# Main Advanced Model
# ---------------------------

class AdvancedGNNModel(Model):
    """
    High-level wrapper integrating:
    - GNN backbones + pooling + head
    - Training on batches of DGL graphs
    - Metrics and MAPE computation
    - Early stopping/restore best (delegated to base Model)
    - Fine-tuning with layer freezing

    Config dictionary keys (recommended defaults and ranges):
    - node_feat_size (int): raw node feature dim (required)
    - edge_feat_size (int, default=16): raw edge feature dim if used
    - num_edge_types (int, default=5): types for GGNN/RGCN
    - gnn_arch (str): 'gat'|'gcn'|'sage'|'gin'|'ggnn'|'rgcn'|'appnp'
    - gnn_h_size (int, default=128): hidden channels; try 64-256
    - num_layers (int, default=4): backbone depth; 2-6 common
    - activation (str, default='relu'): 'relu'|'gelu'|'tanh'|'leakyrelu'
    - dropout (float, default=0.1): 0.0-0.5
    - num_timesteps (int, default=8): GGNN propagation steps
    - gat_num_heads (int, default=8): GAT heads; ensure hidden divisible by heads
    - rgcn_num_bases (int, default=4): basis decomposition count
    - appnp_k (int, default=10), appnp_alpha (float, default=0.1): APPNP hyperparams

    Optimization/training:
    - learning_rate (float, default=1e-3)
    - batch_size (int, default=32)
    - num_epochs (int, default=500)
    - early_stopping (bool, default=True)
    - restore_best_weights (bool, default=True)
    - patience (int, default=50)

    Regression:
    - target_dim (int, default=2)
    - loss_name (str, default='mape'): 'mape'|'mse'|'huber'
    - regression_metrics (List[str], default=['mape','mae'])
    - primary_metric (str, default='mape')
    - mape_epsilon (float, default=1e-8)
    - huber_delta (float, default=1.0) if using Huber

    Fine-tuning:
    - fine_tune_lr (float, default=1e-4)
    - fine_tune_epochs (int, default=100)
    - fine_tune_patience (int, default=20)
    """

    def __init__(self, config: Optional[Dict[str, Any]] = None, num_classes: Optional[int] = None, num_types: Optional[int] = None):
        if not config:
            # Provide pedagogical defaults; tune per dataset
            config = {
                # Graph features
                "node_feat_size": num_types or 64,   # If unknown, 64 is a common embedding size
                "edge_feat_size": 16,
                "num_edge_types": 5,

                # Backbone
                "gnn_arch": "gat",
                "gnn_h_size": 128,
                "num_layers": 4,
                "activation": "relu",
                "dropout": 0.1,
                "num_timesteps": 8,     # GGNN only
                "gat_num_heads": 8,     # GAT only
                "rgcn_num_bases": 4,    # R-GCN only
                "appnp_k": 10,          # APPNP only
                "appnp_alpha": 0.1,     # APPNP only
                "use_edge_weight": False,  # GCN edge scalar weighting

                # Optimization
                "learning_rate": 1e-3,
                "batch_size": 32,
                "num_epochs": 500,
                "early_stopping": True,
                "restore_best_weights": True,
                "patience": 50,

                # Regression
                "target_dim": 2,
                "loss_name": "mape",
                "regression_metrics": ["mape", "mae", "rmse", "r2"],
                "primary_metric": "mape",
                "mape_epsilon": 1e-8,
                "huber_delta": 1.0,

                # Fine-tuning defaults
                "fine_tune_lr": 1e-4,
                "fine_tune_epochs": 100,
                "fine_tune_patience": 20,
            }
        super().__init__(config)

        # Validate metric names and set up primary metric
        self.allowed_metrics = {"mae", "mse", "rmse", "r2", "mape"}
        self.metrics_to_compute = [m.lower() for m in self.config.get("regression_metrics", ["mape", "mae"])]
        for m in self.metrics_to_compute:
            if m not in self.allowed_metrics:
                raise ValueError(f"Unsupported metric '{m}'. Allowed: {self.allowed_metrics}")
        self.primary_metric = self.config.get("primary_metric", "mape").lower()
        if self.primary_metric not in self.metrics_to_compute:
            self.metrics_to_compute.append(self.primary_metric)
        self.mape_eps = float(self.config.get("mape_epsilon", 1e-8))

        # Device
        self.device = torch.device("cuda" if torch.cuda.is_available() else "cpu")
        if torch.cuda.is_available():
            # cudnn.benchmark can speed up conv-like ops with fixed shapes
            torch.backends.cudnn.benchmark = True

        # Build model + optimizer
        self.model: nn.Module = get_net(self.config).to(self.device)
        self.opt = Adam(self.model.parameters(), lr=float(self.config["learning_rate"]))

        # Track best weights for restore
        self.best_epoch_weights: Optional[Dict[str, Any]] = None

        # Optional memory optimization flag (not implemented)
        self.gradient_checkpointing = False

    # ---------------------------
    # Data handling
    # ---------------------------

    def __process_data(self, dataset: Iterable[Dict[str, Any]]) -> List[Dict[str, Any]]:
        """
        Convert raw dataset items into a normalized dict structure.

        Assumed input per item:
        - item["x"] supports:
            - get_node_list() -> list of node ids (optional, not strictly necessary for DGL)
            - get_edge_list() -> list of edges as tuples. Supported forms:
                (src, etype, dst) OR (src, etype, dst, edge_feat_vector)
            - get_node_feats() -> 2D array/list [num_nodes, node_feat_size]
            - get_edge_feats() -> 2D array/list [num_edges, edge_feat_size] (optional if included in edge tuples)
        - item["y"] -> targets; can be scalar or list; we wrap into a list to match target_dim.

        Returns:
        - List of dicts with keys: nodes, edges, node_feats, edge_feats, label
        """
        processed = []
        for item in dataset:
            x = item["x"]
            y = item["y"]
            processed.append({
                "nodes": x.get_node_list(),
                "edges": x.get_edge_list(),           # each edge: (src, etype, dst) or (src, etype, dst, efeat)
                "node_feats": x.get_node_feats(),     # shape [N, node_feat_size]
                "edge_feats": x.get_edge_feats(),     # shape [E, edge_feat_size] (optional)
                "label": y if isinstance(y, list) else [y],
            })
        return processed

    def __build_dgl_graph_and_labels(self, batch_graphs: List[Dict[str, Any]]) -> Tuple[dgl.DGLGraph, torch.Tensor]:
        """
        Construct a batched DGL graph from multigraphs with comprehensive handling of:
        - Isolated nodes (specified via 'num_nodes' or inferred)
        - Parallel edges with distinct types/features
        - Missing features and inconsistent dimensions
        - Node/edge validation with detailed error messages
        
        Returns:
            batched_graph: Unified DGL graph batch
            labels: Tensor of shape [B, target_dim] on self.device
        """
        dgl_graphs: List[dgl.DGLGraph] = []
        labels: List[List[float]] = []

        node_feat_size = int(self.config.get("node_feat_size", 0))
        edge_feat_size = int(self.config.get("edge_feat_size", 0))
        use_node_embedding = bool(self.config.get("use_node_embedding", False))
        use_edge_embedding = bool(self.config.get("use_edge_embedding", False))

        for graph_idx, bg in enumerate(batch_graphs):
            if not bg.get("edges") and not bg.get("num_nodes"):
                g = dgl.graph(([], []), num_nodes=0)
                dgl_graphs.append(g)
                labels.append(bg["label"])
                continue

            num_nodes = self._determine_node_count(bg, graph_idx)

            # Node features
            node_feats = self._prepare_node_features(
                bg, num_nodes, node_feat_size, graph_idx,
                expect_int_id=use_node_embedding
            )

            # Edges
            src_ids, dst_ids, edge_types, edge_feats = [], [], [], []
            for edge_idx, edge in enumerate(bg["edges"]):
                if len(edge) not in {3, 4}:
                    raise ValueError(
                        f"Graph {graph_idx} edge {edge_idx}: Must be [src, type, dst] or [src, type, dst, feat]. Got {len(edge)}"
                    )
                src, etype, dst = edge[:3]
                if not (0 <= src < num_nodes and 0 <= dst < num_nodes):
                    raise ValueError(
                        f"Graph {graph_idx} edge {edge_idx}: Node index out of range (src={src}, dst={dst}, num_nodes={num_nodes})"
                    )
                # Edge feature as int id or float vector
                if len(edge) == 4:
                    efeat = edge[3]
                    if use_edge_embedding:
                        # Expect scalar int id
                        if isinstance(efeat, (list, tuple)):
                            raise ValueError(f"Graph {graph_idx} edge {edge_idx}: expected int id for edge feat, got list/tuple")
                        edge_feats.append(int(efeat))
                    else:
                        # Expect float vector
                        if edge_feat_size > 0 and len(efeat) != edge_feat_size:
                            raise ValueError(
                                f"Graph {graph_idx} edge {edge_idx}: Feature dim {len(efeat)} != configured {edge_feat_size}"
                            )
                        edge_feats.append(efeat)
                else:
                    if use_edge_embedding:
                        # If no explicit feat provided, set 0 id
                        edge_feats.append(0)
                    elif edge_feat_size > 0:
                        edge_feats.append([0.0] * edge_feat_size)

                src_ids.append(src)
                dst_ids.append(dst)
                edge_types.append(int(etype))

            # Build graph
            try:
                g = dgl.graph(
                    (torch.tensor(src_ids, dtype=torch.int64),
                     torch.tensor(dst_ids, dtype=torch.int64)),
                    num_nodes=num_nodes
                )
            except Exception as e:
                raise RuntimeError(f"Graph {graph_idx}: DGL construction failed: {str(e)}")

            # Attach edge type (for GGNN/RGCN)
            g.edata["type"] = torch.tensor(edge_types, dtype=torch.long)

            # Attach edge feats
            if len(edge_feats) > 0:
                if use_edge_embedding:
                    g.edata["feat"] = torch.tensor(edge_feats, dtype=torch.long)
                else:
                    g.edata["feat"] = torch.tensor(edge_feats, dtype=torch.float32)

            # Attach node feats
            if use_node_embedding:
                # Expect 1 int id per node
                g.ndata["feat"] = torch.tensor(node_feats, dtype=torch.long).view(-1)
            else:
                g.ndata["feat"] = torch.tensor(node_feats, dtype=torch.float32)

            dgl_graphs.append(g)
            labels.append(bg["label"])

        batched_graph = dgl.batch(dgl_graphs).to(self.device)
        return batched_graph, self._prepare_labels(labels)


    def _determine_node_count(self, graph_data: Dict, graph_idx: int) -> int:
        """Determine node count with priority: explicit > features > edges"""
        if "num_nodes" in graph_data:
            return int(graph_data["num_nodes"])

        if "node_feats" in graph_data:
            return len(graph_data["node_feats"])

        if graph_data.get("edges"):
            all_nodes = set()
            for edge in graph_data["edges"]:
                all_nodes.add(edge[0])
                all_nodes.add(edge[2])
            return max(all_nodes) + 1 if all_nodes else 0

        raise ValueError(
            f"Graph {graph_idx}: Cannot determine node count. Provide either 'num_nodes', 'node_feats', or edges."
        )

    def _prepare_node_features(self, graph_data: Dict, num_nodes: int, 
                               feat_size: int, graph_idx: int) -> List[List[float]]:

        features = graph_data.get("node_feats", [])
        
        # Case 1: No features needed
        if feat_size == 0:
            return features if features else []
        
        # Case 2: Features provided but dimensions mismatch
        if features:
            # Pad/truncate each feature vector
            processed = []
            for i, feat in enumerate(features):
                if len(feat) < feat_size:
                    # Pad with zeros
                    processed.append(feat + [0.0] * (feat_size - len(feat)))
                elif len(feat) > feat_size:
                    # Truncate to expected size
                    processed.append(feat[:feat_size])
                else:
                    processed.append(feat)
                    
            # Pad missing node features
            if len(processed) < num_nodes:
                default = [0.0] * feat_size
                processed.extend([default] * (num_nodes - len(processed)))
            elif len(processed) > num_nodes:
                processed = processed[:num_nodes]
                
            return processed
        
        # Case 3: No features provided - create zero vectors
        return [[0.0] * feat_size] * num_nodes

    def _prepare_labels(self, labels: list) -> torch.Tensor:
        """Convert labels to tensor with dimensional validation"""
        target_dim = int(self.config.get("target_dim", 1))
        label_tensor = []
        
        for i, label in enumerate(labels):
            # Ensure scalar labels become vectors
            if isinstance(label, (int, float)):
                label_vec = [float(label)]
            else:
                label_vec = label
                
            # Validate dimensions
            if len(label_vec) != target_dim:
                raise ValueError(
                    f"Label {i}: Dimension {len(label_vec)} "
                    f"≠ target_dim {target_dim}"
                )
                
            label_tensor.append(label_vec)
        
        return torch.tensor(label_tensor, dtype=torch.float32, device=self.device)

    # ---------------------------
    # Metrics
    # ---------------------------

    def _compute_metrics(self, preds: torch.Tensor, labels: torch.Tensor) -> Dict[str, float]:
        """
        Compute regression metrics on flat vectors.

        Notes:
        - MAPE is in percentage.
        - R2 can be negative when model is worse than predicting mean.
        """
        y_hat, y = preds.reshape(-1), labels.reshape(-1)
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
            ss_res = torch.sum(diff.pow(2))
            ss_tot = torch.sum((y - torch.mean(y)).pow(2))
            out["r2"] = (1 - (ss_res / ss_tot)).item() if ss_tot > 0 else 0.0

        if "mape" in self.metrics_to_compute:
            out["mape"] = (torch.mean(torch.abs(diff) / torch.clamp(torch.abs(y), min=self.mape_eps)) * 100.0).item()

        return out

    # ---------------------------
    # Training hooks expected by base Model
    # ---------------------------

    def _train_init(self, data_train: Iterable[Dict[str, Any]], data_valid: Iterable[Dict[str, Any]]):
        """
        Prepare data once at the start of training.
        """
        return self.__process_data(data_train), self.__process_data(data_valid)

    def _test_init(self):
        """
        Prepare the model for evaluation/prediction.
        """
        self.model.eval()

    def _train_with_batch(self, batch: List[Dict[str, Any]]):
        """
        One training step over a batch of graphs:
        - Build DGL batch
        - Forward + loss
        - Backward + optimizer step
        - Return (loss_value, primary_metric_value) for tracking
        """
        g, labels = self.__build_dgl_graph_and_labels(batch)
        self.model.train()
        self.opt.zero_grad()
        loss, preds = self.model(g, labels)
        loss.backward()
        self.opt.step()
        metrics = self._compute_metrics(preds, labels)
        return float(loss.item()), float(metrics[self.primary_metric])

    def _predict_with_batch(self, batch: List[Dict[str, Any]]) -> Tuple[float, torch.Tensor]:
        """
        Inference step on a batch:
        - Build DGL batch
        - Forward without grad
        - Return (primary_metric, predictions)
        """
        g, labels = self.__build_dgl_graph_and_labels(batch)
        self.model.eval()
        with torch.no_grad():
            loss, preds = self.model(g, labels)  # returning loss here keeps API consistent
        metrics = self._compute_metrics(preds, labels)
        return float(metrics[self.primary_metric]), preds

    def _predict_with_data(self, data: Iterable[Dict[str, Any]]) -> Tuple[List[List[float]], List[List[float]]]:
        """
        High-level predict function called by base class:
        - Processes data
        - Runs single batch prediction (if base class batches differently, adapt)
        - Returns y_true and predictions as Python lists
        """
        self._test_init()
        proc = self.__process_data(data)
        _, preds = self._predict_with_batch(proc)
        y_true = [item["label"] for item in proc]
        preds = preds.detach().cpu().numpy().tolist()
        return y_true, preds

    # ---------------------------
    # Weight management
    # ---------------------------

    def _backup_best_weights(self, epoch: int):
        """
        Save current best weights in-memory. Useful for early stopping.
        """
        # Move model params to CPU for lighter memory if saving to disk later
        self.best_epoch_weights = {
            "epoch": epoch,
            "model_state_dict": {k: v.detach().cpu() for k, v in self.model.state_dict().items()},
            "optimizer_state_dict": self.opt.state_dict(),
            "config": self.config,
        }

    def _restore_best_weights(self):
        """
        Restore previously saved best weights.
        """
        if self.best_epoch_weights:
            self.model.load_state_dict(self.best_epoch_weights["model_state_dict"])
            self.opt.load_state_dict(self.best_epoch_weights["optimizer_state_dict"])
            self.model.to(self.device)

    def save_weights_to_disk(self, path: str):
        """
        Persist best weights to disk with torch.save. Call after training.
        """
        if self.best_epoch_weights is None:
            # If no best snapshot saved, snapshot current state
            self._backup_best_weights(epoch=-1)
        torch.save(self.best_epoch_weights, path)

    def restore_weights_from_disk(self, path: str):
        """
        Load weights from disk and restore to model/optimizer.
        """
        self.best_epoch_weights = torch.load(path, map_location=self.device)
        self._restore_best_weights()

    # ---------------------------
    # Fine-tuning
    # ---------------------------

    def fine_tune(self, data_train, data_valid, num_frozen_layers: int, fine_tune_config: Optional[Dict[str, Any]] = None):
        """
        Fine-tune by freezing early layers and training the remaining parts:
        - Identify linear and GNN layers as "freezeable".
        - Freeze the first K layers (heuristic: stable low-level features).
        - Recreate optimizer with lower LR, train with smaller patience.

        Params:
        - num_frozen_layers: how many early layers to freeze (0 = train all)
        - fine_tune_config: dict with keys: learning_rate, num_epochs, patience

        Note:
        - Layer ordering across different backbones differs. We collect modules in registration order
          which generally reflects construction order. For precise control, define per-backbone layer lists.
        """
        if fine_tune_config is None:
            fine_tune_config = {
                "learning_rate": float(self.config.get("fine_tune_lr", 1e-4)),
                "num_epochs": int(self.config.get("fine_tune_epochs", 100)),
                "patience": int(self.config.get("fine_tune_patience", 20)),
            }

        # Identify freezeable modules: Linear and common DGL conv layers
        freeze_types = (nn.Linear, GraphConv, SAGEConv, GATConv, GINConv, RelGraphConv, GatedGraphConv)
        # Collect top-level modules in a flat list in registration order
        freezeable_layers = [m for m in self.model.modules() if isinstance(m, freeze_types)]

        # Freeze the first num_frozen_layers modules
        to_freeze = min(num_frozen_layers, len(freezeable_layers))
        for i in range(to_freeze):
            for p in freezeable_layers[i].parameters():
                p.requires_grad = False

        # Recreate optimizer with lower LR for remaining trainable params
        self.opt = Adam(filter(lambda p: p.requires_grad, self.model.parameters()),
                        lr=float(fine_tune_config["learning_rate"]))

        # Train using base training loop (delegated to parent class)
        train_summary, _ = self.train(
            data_train,
            data_valid,
            classification=False,
            num_epochs=fine_tune_config["num_epochs"],
            patience=fine_tune_config["patience"],
        )

        # Snapshot after fine-tuning
        self._backup_best_weights(epoch=-1)
        return train_summary

    # ---------------------------
    # Strategy utilities
    # ---------------------------
    def optimize_hyperparameters_naive(
        self, 
        data_train: List[dict], 
        data_valid: List[dict], 
        search_space: Dict[str, List[Any]], 
        num_trials: int, 
        metric: str = "mape",
        log_dir: str = "hp_logs"
    ) -> Dict[str, Any]:
        """
        Enhanced random search hyperparameter optimization with multi-metric logging.
        
        Features:
        - Tracks multiple regression metrics (MAPE, MAE, RMSE, R²)
        - Detailed trial logging to disk
        - Early stopping compatibility
        - Optionally reduced training for faster search
        
        Args:
            data_train: Training dataset
            data_valid: Validation dataset
            search_space: Dictionary of parameter -> candidate values
            num_trials: Number of trials to run
            metric: Primary optimization metric (mape, mae, rmse, r2)
            log_dir: Directory for saving trial results
            
        Returns:
            best_params: Best found hyperparameters
            trials_report: DataFrame with all trial results
            
        Search Space Example:
        {
            "learning_rate": [1e-4, 1e-3, 1e-2],
            "num_layers": [2, 3, 4, 5],
            "dropout": [0.0, 0.1, 0.3, 0.5],
            "gnn_arch": ["gat", "gcn", "gin"],
            "gnn_h_size": [64, 128, 256],
            "gat_num_heads": [4, 8],
            "activation": ["relu", "gelu"],
            "batch_size": [16, 32, 64],
            "patience": [20, 40]  # Early stopping patience
        }
        """
        # Validate metric choice
        metric = metric.lower()
        valid_metrics = ["mape", "mae", "rmse", "r2"]
        if metric not in valid_metrics:
            raise ValueError(f"Invalid metric '{metric}'. Use: {valid_metrics}")
        
        # Setup logging directory
        os.makedirs(log_dir, exist_ok=True)
        timestamp = int(time.time())
        session_id = f"rs_{timestamp}_{str(uuid.uuid4())[:8]}"
        
        # Reduce training epochs for faster search?
        fast_search_epochs = min(50, self.config.get("num_epochs", 100))
        
        # Initialize tracking
        best_score = float("inf")
        best_params = {}
        best_model = None
        trials = []
        
        for trial_idx in range(num_trials):
            # Sample hyperparameters
            trial_params = {}
            for param, values in search_space.items():
                # Handle numerical stability for float params
                if all(isinstance(v, float) for v in values) and len(values) > 1:
                    value = np.random.choice(values).item()
                    trial_params[param] = round(value, 8)
                else:
                    trial_params[param] = np.random.choice(values)
            
            # Configure for trial
            trial_config = deepcopy(self.config)
            trial_config.update(trial_params)
            
            # Reduce training time for exploration
            trial_config["num_epochs"] = fast_search_epochs
            
            try:
                # Train model
                model = AdvancedGNNModel(trial_config)
                model.train(data_train, data_valid, classification=False)
                
                # Evaluate with multiple metrics
                metrics = {}
                if "mape" in valid_metrics:
                    metrics["mape"] = model.compute_mape(data_valid)
                if "mae" in valid_metrics:
                    _, preds = model.predict(data_valid)
                    labels = [d["y"] for d in data_valid]
                    metrics["mae"] = mean_absolute_error(labels, preds)
                if "rmse" in valid_metrics:
                    metrics["rmse"] = mean_squared_error(labels, preds, squared=False)
                if "r2" in valid_metrics:
                    metrics["r2"] = r2_score(labels, preds)
                
                primary_score = metrics[metric]
                
                # Track best configuration
                if primary_score < best_score:
                    best_score = primary_score
                    best_params = trial_params
                    best_model = model
                
                # Save trial results
                trial_log = {
                    "trial_id": trial_idx,
                    "params": trial_params,
                    "primary_metric": metric,
                    "primary_score": primary_score,
                    "metrics": metrics,
                    "timestamp": time.time()
                }
                trials.append(trial_log)
                
                # Log to file
                trial_path = f"{log_dir}/{session_id}_trial_{trial_idx}.json"
                with open(trial_path, "w") as f:
                    json.dump(trial_log, f, indent=2)
                    
                print(f"Trial {trial_idx+1}/{num_trials} | {metric}: {primary_score:.4f} | Params: {trial_params}")
                
            except Exception as e:
                print(f"Trial {trial_idx} failed: {str(e)}")
                trial_log = {
                    "trial_id": trial_idx,
                    "params": trial_params,
                    "error": str(e),
                    "timestamp": time.time()
                }
                trials.append(trial_log)
        
        # Generate comprehensive report
        trials_report = pd.DataFrame(trials)
        
        # Save best model
        if best_model:
            best_model.save_weights_to_disk(f"{log_dir}/{session_id}_best_model.pt")
        
        print(f"\nBest trial: {metric} = {best_score:.4f}")
        print("Best parameters:")
        for k, v in best_params.items():
            print(f"  {k}: {v}")
        
        # Return both best params and full trial data
        return best_params, trials_report

    def optimize_hyperparameters(
        self,
        data_train: List[dict],
        data_valid: List[dict],
        search_space: Dict[str, Union[List[Any], Tuple]],
        num_trials: int,
        metric: str,
        log_dir: str = "optuna_studies",
        cv_folds: int = 3,
        timeout: int = None,
        pruning: bool = True,
        n_jobs: int = 1
    ) -> Tuple[Dict[str, Any], optuna.study.Study]:
        """
        Advanced hyperparameter optimization using Optuna with cross-validation,
        pruning, and comprehensive artifact logging.
        
        Features:
        - Bayesian optimization using TPE sampler
        - K-fold cross-validation
        - Per-fold pruning with optional patience
        - Full trial artifact logging
        - Distributed computing support
        - Configurable timeout for long-running studies
        
        Args:
            data_train: Full training dataset
            data_valid: Holdout validation set for final evaluation
            search_space: Dictionary defining parameter search distributions. Supports:
                - Categorical: ['gcn', 'gat', 'gin'] - Discrete choices
                - Uniform: (low, high) - Continuous uniform distribution
                - LogUniform: (low, high) - Log uniform distribution
                - IntUniform: (low, high) - Integer uniform distribution
            num_trials: Maximum number of trials to run
            metric: Target metric to optimize ('mape', 'mae', 'rmse', 'r2')
            log_dir: Directory for storing Optuna artifacts
            cv_folds: Number of cross-validation folds (>=2)
            timeout: Maximum optimization time in seconds
            pruning: Enable intermediate pruning during training
            n_jobs: Number of parallel jobs for trial execution
        
        Returns:
            best_params: Optimized hyperparameters
            study: Complete Optuna study object
            
        Search Space Example:
        search_space = {
            # Categorical choices (discrete values)
            "gnn_arch": ["gat", "gin", "gcn"],
            
            # Uniform float range (learning rate, dropout)
            "learning_rate": (1e-5, 1e-2),  # Uniform
            "dropout": (0.0, 0.5),
            
            # Log-uniform ranges for hyperparameters spanning orders of magnitude
            "weight_decay": (1e-7, 1e-3),  # Will be treated as log-uniform
            "batch_size": (32, 256),        # Will be converted to integers
            "patience": [10, 20, 30, 50],   # Explicit patience values
            
            # Conditional parameters (architecture-specific)
            "gat_num_heads": [4, 8, 16] if self.config.get("gnn_arch") == "gat" else [8]
        }
        """
        # Validate inputs
        if cv_folds < 2:
            raise ValueError("cv_folds must be >=2 for meaningful cross-validation")
        
        metric = metric.lower()
        valid_metrics = ["mape", "mae", "rmse", "r2"]
        if metric not in valid_metrics:
            raise ValueError(f"Invalid metric '{metric}'. Valid options: {valid_metrics}")
            
        # Create logging directory
        os.makedirs(log_dir, exist_ok=True)
        study_name = f"gnn_hpo_{int(time.time())}"
        storage_url = f"sqlite:///{log_dir}/{study_name}.db"
        
        # Create Optuna storage
        storage = optuna.storages.RDBStorage(storage_url, engine_kwargs={"connect_args": {"timeout": 30}})
        
        # Define objective function for Optuna
        def objective(trial: Trial) -> float:
            # Set up parameter sampling
            trial_params = {}
            
            # Sample parameters with proper distributions
            for param, space in search_space.items():
                # Categorical sampling
                if isinstance(space, list):
                    trial_params[param] = trial.suggest_categorical(param, space)
                    
                # Numeric distributions
                elif isinstance(space, tuple):
                    # Integer vs float detection
                    all_ints = all(isinstance(x, int) for x in space[:2])
                    
                    # Log-uniform detection (often for learning rates/decays)
                    log_scale = (space[0] > 0 and space[1] / space[0] > 100)
                    
                    if len(space) == 2:
                        if all_ints:
                            trial_params[param] = trial.suggest_int(param, space[0], space[1])
                        elif log_scale:
                            trial_params[param] = trial.suggest_float(
                                param, space[0], space[1], log=True
                            )
                        else:
                            trial_params[param] = trial.suggest_float(
                                param, space[0], space[1]
                            )
                    
                    # 3rd element provides stepping options
                    elif len(space) == 3:
                        if isinstance(space[2], int):  # Integer step
                            trial_params[param] = trial.suggest_int(
                                param, space[0], space[1], step=space[2]
                            )
                        else:  # Log scale marker
                            trial_params[param] = trial.suggest_float(
                                param, space[0], space[1], log=space[2]
                            )
            
            # Merge with base configuration
            trial_config = {**deepcopy(self.config), **trial_params}
            
            # Conditional parameter handling
            if "gnn_arch" in trial_params:
                # Remove incompatible parameters
                if trial_params["gnn_arch"] != "gat":
                    trial_config.pop("gat_num_heads", None)
                    
                # Handle architecture-specific defaults
                if trial_params["gnn_arch"] == "appnp":
                    trial_config.setdefault("appnp_k", 10)
            
            # Prepare cross-validation
            kf = KFold(n_splits=cv_folds, shuffle=True, random_state=42)
            fold_metrics = []
            artifact_dir = f"{log_dir}/{study_name}/trial_{trial.number}"
            os.makedirs(artifact_dir, exist_ok=True)
            
            for fold_idx, (train_idx, val_idx) in enumerate(kf.split(data_train)):
                fold_start = time.time()
                
                # Create fold datasets
                train_fold = [data_train[i] for i in train_idx]
                val_fold = [data_train[i] for i in val_idx]
                
                # Initialize model with trial parameters
                fold_model = AdvancedGNNModel(trial_config)
                
                # Configure callbacks
                callbacks = []
                if pruning:
                    # Pruning callback with fold-specific min_delta
                    pruning_cb = TorchPruningCallback(
                        trial=trial,
                        monitor=metric,
                        min_delta=0.005,
                        patience=3
                    )
                    callbacks.append(pruning_cb)
                
                # Train model
                fold_model.train(
                    train_fold,
                    val_fold,
                    classification=False,
                    callbacks=callbacks,
                    epochs=int(trial_config.get("num_epochs", 300))
                )
                
                # Evaluate on validation fold
                val_metrics = fold_model.evaluate(val_fold, metrics=valid_metrics)
                fold_metric = val_metrics[metric]
                fold_metrics.append(fold_metric)
                
                # Report intermediate result
                trial.report(fold_metric, fold_idx)
                
                # Handle pruning
                if trial.should_prune():
                    print(f"Trial {trial.number} pruned at fold {fold_idx}")
                    raise optuna.TrialPruned()
                
                # Save fold artifacts
                fold_model.save_weights_to_disk(
                    f"{artifact_dir}/fold_{fold_idx}_model.pt"
                )
                
                # Delete model to save memory
                del fold_model
                torch.cuda.empty_cache()
            
            # Calculate cross-validation statistics
            cv_mean = np.mean(fold_metrics)
            cv_std = np.std(fold_metrics)
            
            # Evaluate on holdout validation set
            holdout_model = AdvancedGNNModel(trial_config)
            holdout_model.train(data_train, data_valid, epochs=200)
            holdout_metrics = holdout_model.evaluate(data_valid, metrics=valid_metrics)
            holdout_metric = holdout_metrics[metric]
            
            # Save trial artifacts
            with open(f"{artifact_dir}/params.json", "w") as f:
                json.dump(trial_config, f, indent=2)
                
            metrics_df = pd.DataFrame({
                "fold": list(range(cv_folds)),
                metric: fold_metrics,
                "holdout_" + metric: [holdout_metric] * cv_folds
            })
            metrics_df.to_csv(f"{artifact_dir}/metrics.csv", index=False)
            
            # Add user attributes
            trial.set_user_attr("cv_mean", float(cv_mean))
            trial.set_user_attr("cv_std", float(cv_std))
            trial.set_user_attr("holdout_metric", float(holdout_metric))
            trial.set_user_attr("artifact_dir", artifact_dir)
            
            return cv_mean

        # Configure study
        sampler = optuna.samplers.TPESampler(
            n_startup_trials=max(10, int(0.3 * num_trials)),
            multivariate=True,
            group=True
        )
        
        study = optuna.create_study(
            study_name=study_name,
            storage=storage,
            sampler=sampler,
            direction="minimize" if metric != "r2" else "maximize",
            load_if_exists=True
        )
        
        # Optimize study
        study.optimize(
            objective,
            n_trials=num_trials,
            timeout=timeout,
            n_jobs=n_jobs,
            gc_after_trial=True
        )
        
        # Retrieve best trial
        if study.best_trial.state != optuna.trial.TrialState.COMPLETE:
            print("Warning: Best trial was pruned or failed. Using best partial result.")
            
        best_trial = study.best_trial
        best_params = best_trial.params
        
        # Print best results
        print(f"\n{'='*50}")
        print(f"Hyperparameter optimization completed")
        print(f"Best trial #{best_trial.number} - {metric}: {best_trial.value:.4f}")
        print(f"Holdout performance: {best_trial.user_attrs['holdout_metric']:.4f}")
        print("Best parameters:")
        for k, v in best_params.items():
            print(f"  {k}: {v}")
        print('='*50)
        
        # Save study artifacts
        study.trials_dataframe().to_csv(f"{log_dir}/{study_name}/trials.csv", index=False)
        joblib.dump(study, f"{log_dir}/{study_name}/study.pkl")
        
        return best_params, study

    def estimate_optimal_data_size(
        self, 
        data_train: List[dict], 
        data_valid: List[dict], 
        subsets: List[float], 
        metric: str = "mape",
        log_dir: str = "learning_curves",
        plot_curves: bool = True
    ) -> Tuple[int, Dict[str, Dict[float, float]]]:
        """
        Enhanced learning curve analysis with multiple metric support and visualization.
        
        Evaluates model performance on increasing fractions of training data to identify:
        - The point of diminishing returns (plateau)
        - Optimal data size for efficient training
        - Potential overfitting indicators
        
        Metrics Supported:
        - 'mape': Mean Absolute Percentage Error
        - 'mae': Mean Absolute Error
        - 'rmse': Root Mean Squared Error
        - 'r2': R² Coefficient of Determination
        
        Args:
            data_train: Full training dataset
            data_valid: Holdout validation set
            subsets: Fractions of training data to evaluate (e.g., [0.1, 0.3, 0.5, 0.7, 1.0])
            metric: Primary metric for determining optimal size
            log_dir: Directory to save results and plots
            plot_curves: Generate visualizations of learning curves
            
        Returns:
            optimal_size: Estimated optimal data size (number of samples)
            all_metrics: Dictionary containing all metrics at each fraction
            
        Example:
            >>> model.estimate_optimal_data_size(
                    train_data, valid_data,
                    subsets=[0.1, 0.2, 0.4, 0.6, 0.8, 1.0],
                    metric="mae"
                )
            (1200, {'mape': {0.1: 18.3, ...}, ...})
        """
        # Validate input fractions
        if not all(0 < frac <= 1 for frac in subsets):
            raise ValueError("Subset fractions must be between (0, 1]")
            
        # Validate metric choice
        metric = metric.lower()
        valid_metrics = ["mape", "mae", "rmse", "r2"]
        if metric not in valid_metrics:
            raise ValueError(f"Invalid metric '{metric}'. Valid options: {valid_metrics}")
        
        # Setup logging
        os.makedirs(log_dir, exist_ok=True)
        timestamp = int(time.time())
        all_metrics = {m: {} for m in valid_metrics}
        
        # Sort fractions for consistent progress
        sorted_subsets = sorted(subsets)
        results = []
        
        for fraction in sorted_subsets:
            # Create subset (stratified by label distribution for regression)
            n_samples = int(len(data_train) * fraction)
            subset, _ = train_test_split(
                data_train,
                train_size=fraction,
                shuffle=True,
                random_state=42,
                stratify=self._create_regression_strata(data_train)
            )
            
            # Train model on subset
            model = AdvancedGNNModel(deepcopy(self.config))
            model.train(subset, data_valid, classification=False)
            
            # Evaluate on validation
            predictions = model.predict(data_valid)[1]
            actuals = [d["y"] for d in data_valid]
            
            # Compute all metrics
            metrics = {
                "mape": mean_absolute_percentage_error(actuals, predictions),
                "mae": mean_absolute_error(actuals, predictions),
                "rmse": np.sqrt(mean_squared_error(actuals, predictions)),
                "r2": r2_score(actuals, predictions)
            }
            
            # Store results
            for m in valid_metrics:
                all_metrics[m][fraction] = metrics[m]
                
            results.append({
                "fraction": fraction,
                "samples": n_samples,
                "metrics": metrics
            })
            print(f"Fraction {fraction:.2f} ({n_samples} samples) | MAPE: {metrics['mape']:.2f} | MAE: {metrics['mae']:.2f}")
            
            # Save intermediate model state
            model.save_weights_to_disk(f"{log_dir}/model_{fraction:.2f}.pt")
        
        # Save full results
        with open(f"{log_dir}/learning_curve_{timestamp}.json", "w") as f:
            json.dump(results, f, indent=2)
        
        # Determine optimal fraction based on specified metric
        # For MAPE/MAE/RMSE: lower is better
        # For R²: higher is better
        if metric == "r2":
            best_fraction = max(all_metrics[metric], key=all_metrics[metric].get)
        else:
            best_fraction = min(all_metrics[metric], key=all_metrics[metric].get)
            
        optimal_size = int(len(data_train) * best_fraction)
        
        # Generate visualizations
        if plot_curves:
            self._plot_learning_curves(all_metrics, log_dir)
            
        print(f"Optimal data size: {optimal_size} samples (fraction: {best_fraction:.2f})")
        return optimal_size, all_metrics
    
    def _create_regression_strata(self, data: List[dict], bins: int = 10) -> List[int]:
        """Create stratification bins for regression labels"""
        values = np.array([d["y"] for d in data])
        percentiles = np.linspace(0, 100, bins + 1)
        bin_edges = np.percentile(values, percentiles)
        return np.digitize(values, bin_edges) - 1
        
    def plot_learning_curves(self, all_metrics: Dict[str, Dict[float, float]], 
                             save_dir: str = "learning_curves") -> None:
        """Visualize learning curve metrics"""
        fig, axs = plt.subplots(2, 2, figsize=(15, 10))
        timestamp = int(time.time())
        fractions = list(all_metrics["mape"].keys())
        
        # Formatting
        colors = ['b', 'g', 'r', 'm']
        metrics = ["mape", "mae", "rmse", "r2"]
        titles = ["MAPE (%)", "MAE", "RMSE", "R² Score"]
        y_labels = ["Percentage Error", "Absolute Error", "Squared Error", "Explained Variance"]
        
        for idx, metric in enumerate(metrics):
            ax = axs[idx//2, idx%2]
            values = [all_metrics[metric][frac] for frac in fractions]
            
            ax.plot(fractions, values, 'o-', color=colors[idx], linewidth=2, markersize=8)
            ax.set_title(f"Learning Curve ({titles[idx]})")
            ax.set_xlabel("Training Data Fraction")
            ax.set_ylabel(y_labels[idx])
            ax.grid(True, linestyle='--', alpha=0.7)
            
            # Special axis treatment for R²
            if metric == "r2":
                ax.set_ylim(bottom=min(0, min(values)*1.1), top=1.05)
                ax.axhline(y=0, color='k', linestyle='--', alpha=0.5)
            else:
                # Set y-min to 90% of min value for better visualization
                min_val = min(values)
                ax.set_ylim(bottom=min_val*0.9, top=max(values)*1.1)
                
            # Highlight best point for each metric
            if metric == "r2":
                best_idx = np.argmax(values)
                best_val = max(values)
            else:
                best_idx = np.argmin(values)
                best_val = min(values)
                
            ax.scatter(fractions[best_idx], best_val, 
                      s=200, c='gold', edgecolors='k', 
                      label=f'Best: {best_val:.3f}')
            ax.legend()
        
        plt.tight_layout()
        plt.savefig(f"{save_dir}/learning_curves_{timestamp}.png", dpi=300)
        plt.close()

    def evaluate_sample_quality(self, data, metrics: List[str]):
        """
        Heuristic sample quality assessment:
        - diversity: variance of labels (higher suggests broader coverage)
        - balance: KS-statistic vs. a Gaussian with mean/std of labels (lower is "more Gaussian-like")
        - outliers: fraction flagged by IsolationForest

        Caveats:
        - Substitute with domain-specific graph statistics (e.g., node/edge count distributions, motif counts).
        """
        report: Dict[str, float] = {}
        labels = [item["y"] if not isinstance(item["y"], list) else np.mean(item["y"]) for item in data]
        labels = np.asarray(labels, dtype=float)

        if 'diversity' in metrics:
            report['diversity'] = float(np.var(labels))

        if 'balance' in metrics:
            # Compare label distribution to a fitted normal; high statistic indicates distributional mismatch
            ref = np.random.normal(np.mean(labels), np.std(labels) + 1e-12, size=len(labels))
            report['balance'] = float(ks_2samp(labels, ref).statistic)

        if 'outliers' in metrics:
            iso = IsolationForest(n_estimators=200, contamination='auto', random_state=42)
            outliers = iso.fit_predict(labels.reshape(-1, 1))
            report['outliers'] = float(np.sum(outliers == -1) / len(labels))

        return report

    def compute_mape(self, data) -> float:
        """
        Compute MAPE (%) on a dataset using the model's predict() API.

        Tip:
        - If targets can be zero or near-zero, consider switching to MAE/MSE or adding epsilon.
        """
        y_true, y_pred = self.predict(data)
        y_true_flat = np.array(y_true, dtype=float).flatten()
        y_pred_flat = np.array(y_pred, dtype=float).flatten()
        return float(mean_absolute_percentage_error(y_true_flat, y_pred_flat) * 100.0)


    # ------------------------------
    # Strategies for MAPE Reduction
    # ------------------------------
    """
    ## 1. Usage workflow

    # Preprocessing pipeline
    
    model = AdvancedGNNModel(config)

    # 1. Remove target outliers
    clean_data = model.remove_target_outliers(raw_data, strategy="iqr")

    # 2. Augment training data
    augmented_train = model.augment_training_data(train_data)

    # 3. Train and detect label errors
    model.train(augmented_train, valid_data)
    suspect_indices = model.detect_label_errors(train_data)

    # 4. Review/relabel suspicious samples
    curated_train = [d for i, d in enumerate(train_data) if i not in suspect_indices]

    # 5. Final training
    model.train(curated_train, valid_data)

    ## 2.Why This Works: Mathematical Insight

    Cleaning outliers stabilizes the MAPE denominator (yi)
    Augmentation helps the model learn f(X+ϵ)≈y
    Label correction reduces ||yi - ŷi|| directly in the MAPE numerator
    
    ## 3. Typical MAPE Reduction:
    mermaid
        graph LR
        A[Raw Data MAPE 20%] --> B[Clean Outliers: 17%]
        B --> C[Augment Data: 15%]
        C --> D[Fix Labels: 12%]
    
    ## 4. When to Use
        When MAPE is significantly higher than MAE/RMSE
        When training validation curves diverge early
        When small actual values dominate your dataset
    """
    def remove_target_outliers(self, data: List[dict], strategy: str = "iqr", multiplier: float = 1.5) -> List[dict]:
        """
        Remove outliers from target variable (y) using:
        - IQR: Interquartile Range (default)
        - Z-score: Standard deviations from mean
        """
        y_values = np.array([d["y"] for d in data])
        
        if strategy == "iqr":
            q1, q3 = np.percentile(y_values, [25, 75])
            iqr = q3 - q1
            lower_bound = q1 - multiplier * iqr
            upper_bound = q3 + multiplier * iqr
        elif strategy == "zscore":
            z_scores = np.abs((y_values - np.mean(y_values)) / np.std(y_values))
            lower_bound, upper_bound = np.min(y_values), np.max(y_values)
            # Adjust bounds based on z-score threshold
            lower_bound = np.mean(y_values) - multiplier * np.std(y_values)
            upper_bound = np.mean(y_values) + multiplier * np.std(y_values)
        
        return [d for d in data if lower_bound <= d["y"] <= upper_bound]
    
    def augment_training_data(self, data: List[dict], noise_std: float = 0.05) -> List[dict]:
        """Add Gaussian noise to input features (not labels) to improve generalization"""
        augmented = []
        for sample in data:
            # Create noisy copy
            noisy_sample = deepcopy(sample)
            for key in ["node_feat", "edge_feat"]:  # Feature-specific augmentation
                if key in noisy_sample:
                    noisy_sample[key] = noisy_sample[key] + np.random.normal(
                        0, noise_std, noisy_sample[key].shape
                    )
            augmented.append(noisy_sample)
        return data + augmented  # Return original + augmented
    
    def detect_label_errors(self, data: List[dict], threshold: float = 2.5) -> List[int]:
        """Identify potential label errors using model residuals"""
        if not hasattr(self, "model"):
            raise RuntimeError("Train model first")
        
        residuals = []
        for d in data:
            pred = self.predict([d])[1][0]  # Get single prediction
            residuals.append(abs(pred - d["y"]))
        
        # Find residuals exceeding threshold standard deviations
        z_scores = np.abs((residuals - np.mean(residuals)) / np.std(residuals))
        return [i for i, z in enumerate(z_scores) if z > threshold]
