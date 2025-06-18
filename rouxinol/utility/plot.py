"""
Rouxinol an infrastructure to explore code generation and machine learning models.
Copyright (C) 2025 Anderson Faustino da Silva

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
import yaml
import numpy as np 
import matplotlib.pyplot as plt

from absl import logging

from scipy.stats import probplot  

from sklearn.metrics import silhouette_samples
from sklearn.metrics import silhouette_score 

from sklearn.manifold import TSNE
from sklearn.decomposition import PCA

from .tools import regression_metrics

# -------------------------------------------------
# Helper function: 2D|3D Projections (PCA, t-SNE)
# -------------------------------------------------
def reduce_dimension_and_plot(
    embeddings: np.ndarray, 
    cluster_labels: np.ndarray, 
    method: str, 
    output_dir: str, 
    output_filename: str, 
    type_plot: str="pdf", 
    type_proj: str="2D"
):  
    """  
    Reduces dimensions (using PCA or t-SNE) and plots with matplotlib.  
    - embeddings : original higher-dimensional data  
    - cluster_labels : cluster labels for coloring  
    - method     : 'pca' or 'tsne'  
    - output_dir : where to save the PNG file  
    - type_proj  : '2D' for 2D plots, '3D' for 3D plots   
    """  
    # Make sure the output dir exists  
    if not type_proj in ["2D", "3D"]:  
        logging.error("Unsupported projection. Choose '2D' or '3D'.")  
        sys.error(1)

    if not os.path.exists(output_dir):  
        os.makedirs(output_dir)  

    n_components = 2 if type_proj == "2D" else 3  

    if method.lower() == 'pca':  
        projector = PCA(n_components=n_components, random_state=42)  
        xlabel = "Principal Component 1"  
        ylabel = "Principal Component 2"  
        zlabel = "Principal Component 3"  
    elif method.lower() == 'tsne':  
        projector = TSNE(n_components=n_components, random_state=42, perplexity=5)   
        xlabel = "t-SNE 1"  
        ylabel = "t-SNE 2"   
        zlabel = "t-SNE 3"   
    else:  
        logging.error("Unsupported projection method. Choose 'pca' or 'tsne'.")  
        exit(1)

    reduced = projector.fit_transform(embeddings)   

    # Define marker styles  
    marker_styles = ['o', 's', '^', 'D', 'v', '<', '>', 'X', 'P', '*']   

    # Create a figure for 2D or 3D plots  
    if type_proj == "2D":  
        plt.figure(figsize=(5, 5))  
        for cluster in np.unique(cluster_labels):  
            # Get indices for the current cluster  
            indices = np.where(cluster_labels == cluster)  
            plt.scatter(  
                reduced[indices, 0],  
                reduced[indices, 1],  
                marker=marker_styles[cluster % len(marker_styles)],  # Cycle through marker styles  
                edgecolor='black',  
                alpha=0.8,  
                label=f'Cluster {cluster}'  # Optional: add a label for the legend  
            )  
        plt.xlabel(xlabel)  
        plt.ylabel(ylabel)
    elif type_proj == "3D":  
        fig = plt.figure(figsize=(6, 6))  
        ax = fig.add_subplot(111, projection='3d')  
        for cluster in np.unique(cluster_labels):  
            # Get indices for the current cluster  
            indices = np.where(cluster_labels == cluster)  
            ax.scatter(  
                reduced[indices, 0],  
                reduced[indices, 1],  
                reduced[indices, 2],  
                marker=marker_styles[cluster % len(marker_styles)],  # Cycle through marker styles  
                edgecolor='black',  
                alpha=0.8,  
                label=f'Cluster {cluster}'  # Optional: add a label for the legend  
            )  
        ax.set_xlabel(xlabel)  
        ax.set_ylabel(ylabel)  
        ax.set_zlabel(zlabel)  
    else:  
        logging.error("Unsupported projection. Choose '2D' or '3D'.")  
        exit(1)
    
    if type_proj == "2D":  
        plt.tight_layout()  
    elif type_proj == "3D":  
        plt.subplots_adjust(left=0.1, right=0.9, top=0.9, bottom=0.1)  

    plot_file = os.path.join(output_dir, f"{output_filename}.{type_plot}")  
    plt.savefig(plot_file, format=type_plot)  
    plt.close()   

    logging.info(f"Plot saved to {plot_file}")


# --------------------------------------------------------------
# Helper function: 2D|3D Projections (PCA, t-SNE) - 2 clustering
# --------------------------------------------------------------
def reduce_dimension_and_plot_2clusters(
    embeddings: np.ndarray, 
    cluster_labels: np.ndarray, 
    file_keys: list, 
    domain_map: dict, 
    method: str, 
    output_dir: str, 
    output_filename: str, 
    type_plot: str="pdf", 
    type_proj: str="2D"
):  
    """  
    Projects high-dimensional embeddings into 2D|3D and plots them, using:  
      - Color to indicate the *domain index* from a YAML mapping (domain_map).  
      - Marker shape to indicate the *cluster labels* (cluster_labels).  

    Args:  
        embeddings (np.ndarray): Array of shape (N, hidden_dim) with all embeddings.  
        file_keys (list): List of filenames corresponding to each row in 'embeddings'.  
        cluster_labels (np.ndarray): The cluster assignment (e.g., from K-Means) of each embedding.  
        domain_map (dict): A dictionary mapping 'filename' -> domain index (int).  
        method (str): Which 2D projection to use, e.g. 'pca' or 'tsne'.  
        output_dir (str): Where to save the resulting plot.  
        type_proj  : '2D' for 2D plots, '3D' for 3D plots  
    """   
    if type_proj not in ["2D", "3D"]:  
        logging.error("Unsupported projection. Choose '2D' or '3D'.")  
        exit(1)

    # Make sure the output dir exists  
    if not os.path.exists(output_dir):  
        os.makedirs(output_dir)  

    n_components = 2 if type_proj == "2D" else 3  

    # ----------------------------  
    # 1) Dimensionality reduction  
    # ----------------------------  
    if method.lower() == 'pca':  
        projector = PCA(n_components=n_components, random_state=42)  
        xlabel = "Principal Component 1"  
        ylabel = "Principal Component 2"  
        zlabel = "Principal Component 3" if type_proj == "3D" else None  
    elif method.lower() == 'tsne':  
        projector = TSNE(n_components=n_components, random_state=42, perplexity=5)   
        xlabel = "t-SNE 1"  
        ylabel = "t-SNE 2"  
        zlabel = "t-SNE 3" if type_proj == "3D" else None  
    else:  
        logging.error("Unsupported projection method. Choose 'pca' or 'tsne'.")  
        exit(1)

    reduced = projector.fit_transform(embeddings)

    # --------------------------------  
    # 2) Assign colors (domain index)  
    # --------------------------------  
    unique_domains = sorted(set(domain_map[f] for f in file_keys))  
    color_map = plt.get_cmap('tab10', len(unique_domains))  

    # -----------------------------------------  
    # 3) Assign shapes (marker) by cluster ID  
    # -----------------------------------------  
    marker_styles = ['o', 's', '^', 'D', 'v', '<', '>', 'X', 'P', '*']  
    
    # --------------------------------------------------------  
    # 4) Plot each point using domain-based color and cluster-based shape  
    # --------------------------------------------------------  
    if type_proj == "2D":
        fig = plt.figure(figsize=(5, 5)) 
        ax = plt.gca()  # Get current axis for 2D plot  
    elif type_proj == "3D":   
        fig = plt.figure(figsize=(6, 6)) 
        ax = fig.add_subplot(111, projection='3d')  # Create a 3D axis  

    for idx, fname in enumerate(file_keys):  
        # Convert domain index to a color:  
        domain_idx = domain_map[fname]  
        color = color_map(unique_domains.index(domain_idx))  
        
        # Convert cluster label to a marker symbol  
        cluster_label = cluster_labels[idx] % len(marker_styles)  
        marker = marker_styles[cluster_label]  

        if type_proj == "2D":   
            # Plot the point in 2D  
            ax.scatter(  
                reduced[idx, 0],  
                reduced[idx, 1],  
                c=[color],  
                marker=marker,  
                edgecolor='black',  
                alpha=0.8  
            )  
        else:   
            # Plot the point in 3D  
            ax.scatter(  
                reduced[idx, 0],  
                reduced[idx, 1],  
                reduced[idx, 2],  
                c=[color],  
                marker=marker,  
                edgecolor='black',  
                alpha=0.8  
            )      

    # Set labels for the axes  
    if type_proj == "2D":  
        ax.set_xlabel(xlabel)  
        ax.set_ylabel(ylabel)  
    elif type_proj == "3D":  
        ax.set_xlabel(xlabel)  
        ax.set_ylabel(ylabel)  
        ax.set_zlabel(zlabel)  

    # Save the plot  
    if type_proj == "2D":
        plt.tight_layout()
    elif type_proj == "3D":
        plt.subplots_adjust(left=0.1, right=0.9, top=0.9, bottom=0.1)

    plot_file = os.path.join(output_dir, f"{output_filename}.{type_plot}")  
    plt.savefig(plot_file, format=type_plot)  
    plt.close()  

    logging.info(f"Plot saved to {plot_file}")


# ---------------------------------------------
# Helper function: Silhouette Scores Projection
# ---------------------------------------------
def plot_silhouette_scores(
    X: np.ndarray, 
    cluster_labels: np.ndarray, 
    output_dir: str, 
    output_filename: str, 
    type_plot: str="pdf"
):  
    """  
    Plots the Silhouette Score for each point in a cluster.  
    
    Parameters:  
    - X : np.ndarray  
        Input data (features) that have been clustered.  
    - cluster_labels : np.ndarray  
        Cluster labels assigned to each point in X.  
    
    The function calculates the Silhouette Score for each point and generates a plot  
    that shows the distribution of scores, allowing visualization of the clustering quality.  
    """  
    # Calculate the average Silhouette Score 
    try: 
        silhouette_avg = silhouette_score(X, cluster_labels) 
    except:
        return
    
    # Calculate the Silhouette Score for each point  
    sample_silhouette_values = silhouette_samples(X, cluster_labels)  

    # Get the number of clusters  
    n_clusters = len(np.unique(cluster_labels))  

    # Create a plot  
    plt.figure(figsize=(5, 5))  
    
    # For each cluster, plot the Silhouette Scores  
    y_lower = 10  # Initial position for the plot  
    for i in range(n_clusters): 
        # Get the indices of the points in cluster i  
        cluster_i = sample_silhouette_values[cluster_labels == i]  
        
        # Sort the Silhouette Scores  
        cluster_i.sort()  
        
        # Calculate the upper position for the plot  
        size_i = cluster_i.shape[0]  
        y_upper = y_lower + size_i  
        
        # Fill the plot with the Silhouette Scores of cluster i  
        plt.fill_betweenx(np.arange(y_lower, y_upper), 0, cluster_i)  
        
        # Add text label for the cluster  
        plt.text(-0.05, (y_lower + y_upper) / 2, str(i))  
        
        # Update the lower position for the next cluster  
        y_lower = y_upper + 10  # Spacing between clusters  
    
    # Add reference line for the average Silhouette Score  
    plt.axvline(x=silhouette_avg, color="red", linestyle="--")  

    plt.xlabel("Score")  
    plt.ylabel("Cluster")  

    plt.yticks([])  
    plt.xlim([-0.1, 1])  
    plt.tight_layout()

    # Save the plot 
    plot_file = os.path.join(output_dir, f"{output_filename}.{type_plot}")

    plt.savefig(plot_file, format=type_plot)  
    plt.close()  

    logging.info(f"Plot saved to {plot_file}")


# ---------------------------------------------
# Helper function: Plot training history
# ---------------------------------------------
def plot_training_history(
    history: dict, 
    output_dir: str, 
    output_filename="history", 
    type_plot="pdf"
):  
    """  
    Plot the training and validation loss over epochs with different colors, add a reference line for the lowest loss,  
    and save the plot to a file.  

    Parameters:  
        history (dict): Dictionary containing training and validation loss history.  
                       Expected keys: "train_loss" and "val_loss".  
        output_dir (str): Folder where the plot will be saved.  
        output_filename (str): Name of the output file (without extension).  
        type_plot (str): File format for saving the plot (e.g., "pdf", "png", "svg"). Default is "pdf".  

    Returns:  
        None  
    """  
    # Extract training and validation loss from the history dictionary 
    train_loss = history["train_loss"]  
    val_loss = history["val_loss"]  

    # Create a list of epochs for the x-axis  
    epochs = range(1, len(train_loss) + 1)  

    # Find the epoch with the lowest validation loss  
    min_val_loss_epoch = epochs[val_loss.index(min(val_loss))]  
    min_val_loss_value = min(val_loss)  

    # Plot the training and validation loss with different colors  
    plt.figure(figsize=(5, 5))   
    plt.plot(epochs, train_loss, label="Training Loss", color="blue")  # Blue for training loss  
    plt.plot(epochs, val_loss, label="Validation Loss", color="orange")  # Orange for validation loss  

    # Add a reference line at the epoch with the lowest validation loss  
    plt.axvline(x=min_val_loss_epoch, color="red", linestyle="--", label=f"Lowest Val Loss (Epoch {min_val_loss_epoch})")  

    # Add labels, title, and legend  
    plt.xlabel("Epochs")  
    plt.ylabel("Loss")  
    #plt.title("Training and Validation Loss Over Epochs")  
    plt.legend()  
    #plt.grid(True)  
    plt.tight_layout() 

    # Ensure the output dir exists  
    os.makedirs(output_dir, exist_ok=True)  

    # Save the plot to the specified file  
    output_path = os.path.join(output_dir, f"{output_filename}.{type_plot}")

    plt.savefig(output_path, format=type_plot, bbox_inches="tight")  
    plt.close()  

    logging.info(f"Plot saved to {output_path}")  


def plot_predictions_scatter(  
    y_test,  
    predictions,  
    y_label,  
    metrics_to_show: list,  
    output_dir: str,  
    output_filename="predictions",  
    type_plot="pdf",  
    add_error_bars=False,  
    decimals=4  
):  
    """  
    Plots y_test and predictions as scatter points, sorted by y_test.  
    Supports single or multi-objective regression.   
    If multi-objective, one graph is created for each objective.  

    Parameters:  
        y_test (np.ndarray): True values (either 1D or 2D depending on single/multi-objective regression).  
        predictions (np.ndarray): Predicted values corresponding to y_test.  
        metrics (dict): Dictionary of metrics to display.  
        y_label (str or list): Label(s) for the Y-axis. If multi-objective, provide a list of labels.  
        metrics_to_show (list): List of metrics to display on the plot (e.g., ["RMSE", "MAE", "R2"]).  
        output_dir (str): Folder where the plot(s) will be saved.  
        output_filename (str): Name of the output file (without extension). Default is "predictions".  
        type_plot (str): Type of the output file (e.g., "pdf", "png", "jpg"). Default is "pdf".  
        add_error_bars (bool): Whether to add error bars to the predictions. Default is False.  
        decimals (int): The number of digits after the decimal point for metric values.  
    """  
    # Check if data is 1D or multi-dimensional  
    is_single_objective = y_test.ndim == 1 or y_test.shape[1] == 1  

    # Ensure y_test and predictions are 2D for uniformity  
    if is_single_objective:  
        y_test = y_test.flatten()  # Ensure 1D array  
        predictions = predictions.flatten()  # Ensure 1D array  
        y_test = y_test[:, None]  
        predictions = predictions[:, None]  

    # Ensure y_label is a list for multi-objective regression  
    if isinstance(y_label, str):  
        y_label = [y_label] * y_test.shape[1]  # Duplicate the label if single string is provided  

    if len(y_label) != y_test.shape[1]:
        logging.error(f"Y_label does not match y_test.shape") 
        return

    # Create one plot per objective dimension  
    for dim in range(y_test.shape[1]):  
        # Extract true and predicted values for the current dimension  
        y_test_dim = y_test[:, dim]  
        predictions_dim = predictions[:, dim]  

        metrics = regression_metrics(y_test_dim, predictions_dim)

        # Sort data by y_test for better visualization  
        sorted_indices = np.argsort(y_test_dim)  
        y_test_sorted = y_test_dim[sorted_indices]  
        predictions_sorted = predictions_dim[sorted_indices]  

        # Calculate prediction errors  
        errors = np.abs(y_test_sorted - predictions_sorted)  

        # Plot y_test and predictions as scatter points  
        plt.figure(figsize=(10, 6))  
        plt.scatter(  
            np.arange(len(y_test_sorted)),   
            y_test_sorted,   
            label="Real Values",   
            color="blue",   
            marker="o",   
            alpha=0.5,   
            s=40  
        )  
        plt.scatter(  
            np.arange(len(predictions_sorted)),   
            predictions_sorted,   
            label="Predictions",   
            color="red",   
            marker="o",   
            alpha=0.5,   
            s=40  
        )  

        # Add error bars to predictions, if enabled  
        if add_error_bars:  
            plt.errorbar(  
                np.arange(len(predictions_sorted)),  # X-axis (index)  
                predictions_sorted,                  # Y-axis (predictions)  
                yerr=errors,                         # Error in predictions  
                fmt="none",                          # No line between points  
                ecolor="gray",                       # Color of error bars  
                alpha=0.5,                           # Transparency of error bars  
                label="Prediction Error"  
            )  

        # Add metrics to the plot  
        metrics_text = "\n".join([  
            f"{metric}: {metrics[metric]:.{decimals}e}" if metric == "Shapiro" else f"{metric}: {metrics[metric]:.{decimals}f}"  
            for metric in metrics_to_show if metric in metrics  
        ])  
        plt.text(  
            0.95, 0.05, metrics_text, transform=plt.gca().transAxes,  
            fontsize=10, verticalalignment="bottom", horizontalalignment="right",  
            bbox=dict(boxstyle="round", facecolor="white", alpha=0.8)  
        )  

        # Customize the plot  
        plt.xlabel("Samples")  
        plt.ylabel(y_label[dim])  # Use the corresponding label for the current dimension  
        plt.legend()  
        plt.grid(True, linestyle="--", alpha=0.6)  
        plt.tight_layout()  

        # Ensure the output directory exists  
        os.makedirs(output_dir, exist_ok=True)  

        # Save the plot to the specified file  
        output_path = os.path.join(output_dir, f"{output_filename}_dim{dim + 1}.{type_plot}")  
        plt.savefig(output_path, format=type_plot, bbox_inches="tight")  
        plt.close()  

        logging.info(f"Plot for dimension {dim + 1} saved to {output_path}")  


def plot_residuals(  
    y_test,  
    y_pred,  
    output_dir: str = ".",  
    output_filename: str = "residuals",  
    type_plot="pdf"  
):  
    """  
    Plot residual diagnostics for single or multi-objective regression:  
    - Histogram, Q-Q plot, and residuals vs predictions plot.  

    Parameters:  
        y_test (np.ndarray): Array of true target (ground truth) values.  
        y_pred (np.ndarray): Array of predicted values from the model.  
        output_dir (str): Folder where the plots will be saved.  
        output_filename (str): Base name for output files (without extension). Default is "residuals".  
        type_plot (str): File format for saving the plot (e.g., "pdf", "png", "svg"). Default is "pdf".  

    Returns:  
        None  
    """  
    if not isinstance(y_test, np.ndarray) or not isinstance(y_pred, np.ndarray):  
        logging.error("y_test and y_pred must be provided as numpy arrays.")  
        return  

    # Check if the data is single or multi-objective  
    is_single_objective = y_test.ndim == 1 or y_test.shape[1] == 1  

    # Ensure y_test and y_pred are 2-dimensional for consistency  
    if is_single_objective:  
        y_test = y_test.flatten()  # Ensure 1D array  
        y_pred = y_pred.flatten()  # Ensure 1D array  
        y_test = y_test[:, None]  
        y_pred = y_pred[:, None]  

    # Ensure the output directory exists  
    os.makedirs(output_dir, exist_ok=True)  

    # Loop over each objective dimension  
    for dim in range(y_test.shape[1]):  
        # Extract true and predicted values for the current objective  
        y_test_dim = y_test[:, dim]  
        y_pred_dim = y_pred[:, dim]  

        # Calculate residuals  
        residuals = y_test_dim - y_pred_dim  

        ### Plot 1: Histogram of Residuals  
        plt.figure(figsize=(6, 4))  
        plt.hist(residuals, bins=30, edgecolor="k", color="blue", alpha=0.7)  
        plt.title(f"Histogram of Residuals")  
        plt.xlabel("Residuals")  
        plt.ylabel("Frequency")  
        output_path_hist = os.path.join(  
            output_dir, f"{output_filename}_dim{dim + 1}_histogram.{type_plot}"  
        )  
        plt.savefig(output_path_hist, format=type_plot, bbox_inches="tight")  
        plt.close()  
        logging.info(f"Histogram of Residuals for dimension {dim + 1} saved to {output_path_hist}")  

        ### Plot 2: Q-Q Plot  
        plt.figure(figsize=(6, 4))  
        probplot(residuals, dist="norm", plot=plt)  
        plt.gca().get_lines()[1].set_color("red")  # Set the reference line color to red  
        plt.title(f"Q-Q Plot of Residuals")  
        output_path_qq = os.path.join(  
            output_dir, f"{output_filename}_dim{dim + 1}_qqplot.{type_plot}"  
        )  
        plt.savefig(output_path_qq, format=type_plot, bbox_inches="tight")  
        plt.close()  
        logging.info(f"Q-Q Plot of Residuals for dimension {dim + 1} saved to {output_path_qq}")  

        ### Plot 3: Residuals vs Predictions  
        plt.figure(figsize=(6, 4))  
        plt.scatter(  
            y_pred_dim,  
            residuals,  
            alpha=0.5,  
            color="orange",  
            edgecolor="k"  
        )  
        plt.axhline(y=0, color="red", linestyle="--", linewidth=2)  
        plt.title(f"Residuals vs Predictions")  
        plt.xlabel("Predicted Values")  
        plt.ylabel("Residuals")  
        output_path_residuals = os.path.join(  
            output_dir, f"{output_filename}_dim{dim + 1}_residuals_vs_predictions.{type_plot}"  
        )  
        plt.savefig(output_path_residuals, format=type_plot, bbox_inches="tight")  
        plt.close()  
        logging.info(  
            f"Residuals vs Predictions plot for dimension {dim + 1} saved to {output_path_residuals}"  
        )      