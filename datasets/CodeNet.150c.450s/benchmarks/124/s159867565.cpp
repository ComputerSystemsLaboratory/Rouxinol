// ALDS1_12_B: Single Shortest Path I
#include <iostream>
#include <vector>
#include <algorithm>
#define INF 1000000
#define NIL -1
using graph = std::vector<std::vector<int>>;
bool debug = false;

graph adjacency_matrix;
std::vector<bool> node_stat;
std::vector<int> next_node, minimum_cost;

void dijkstra(int vertex) {
    if (debug) std::cout << "dijkstra(" << vertex << ")\n";
    node_stat.at(vertex) = false;

    for (int i=0; i<adjacency_matrix.at(vertex).size(); i++) {
        int next_vertex = i, edge_weight = adjacency_matrix.at(vertex).at(next_vertex);
        if (edge_weight != -1) {
            int cost_to_next = minimum_cost.at(vertex) + edge_weight;
            if (cost_to_next < minimum_cost.at(next_vertex)) {
                if (debug) std::cout << vertex << " -> " << next_vertex << ": " << cost_to_next << "\n";
                minimum_cost.at(next_vertex) = cost_to_next;
                next_node.at(vertex) = next_vertex;
            }
        }
    }

    int min_weight = INF, next_vertex = NIL;
    for (int i=0; i<minimum_cost.size(); i++) {
        if (minimum_cost.at(i) < min_weight) {
            if (node_stat.at(i)) {
                if (debug) std::cout << "i = " << i << "\n";
                min_weight = minimum_cost.at(i);
                next_vertex = i;
            }   
        }
    }
    if (debug) std::cout << "min_weight = " << min_weight << ", next_vertex = " << next_vertex << "\n";
    if (next_vertex == NIL) {
        return;
    }
    dijkstra(next_vertex);
}

void init() {
    node_stat.assign(node_stat.size(), true);
    next_node.assign(next_node.size(), NIL);
    minimum_cost.assign(minimum_cost.size(), INF);
    minimum_cost.at(0) = 0;
}

int main() {
    int total_node_num; std::cin >> total_node_num;
    
    adjacency_matrix.resize(total_node_num);
    for (int i=0; i<adjacency_matrix.size(); i++) adjacency_matrix.at(i).assign(total_node_num, NIL);
    node_stat.resize(total_node_num);
    next_node.resize(total_node_num);
    minimum_cost.resize(total_node_num);
    
    for (int i=0; i<total_node_num; i++) {
        int vertex_num; std::cin >> vertex_num;
        int outdegree; std::cin >> outdegree;
        for (int j=0; j<outdegree; j++) {
            int next_vertex; std::cin >> next_vertex;
            std::cin >> adjacency_matrix.at(vertex_num).at(next_vertex);
        }
    }
    init();
    dijkstra(0);
    for (int i=0; i<minimum_cost.size(); i++) {
        std::cout << i << " " << minimum_cost.at(i) << "\n";
    }
}

