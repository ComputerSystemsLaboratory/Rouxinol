#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <algorithm>
//#include "../cxx-prettyprint/prettyprint.hpp"

std::vector<std::vector<int>> Adj;
std::unordered_set<int> nodes_unvisited;
std::unordered_map<int, int> node_component_map;

void mark_nodes(int node, int component_id) {
    node_component_map[node] = component_id;
    nodes_unvisited.erase(node);
    for (int& next : Adj[node]) {
        if (nodes_unvisited.find(next) != nodes_unvisited.end()) {
            mark_nodes(next, component_id);
        }
    }
}

int main() {
    int n, m;
    std::cin >> n >> m;

    Adj.assign(n, std::vector<int>());
    for (int i = 0; i < m; i++) {
        int s, t;
        std::cin >> s >> t;
        Adj[s].push_back(t);
        Adj[t].push_back(s);
    }

    for (int i = 0; i < n; i ++) {
        nodes_unvisited.insert(i);
    }

    int component_id = 0;
    while (!nodes_unvisited.empty()) {
        int start = *nodes_unvisited.begin();
        mark_nodes(start, component_id);
        component_id ++;
    }

    int q;
    std::cin >> q;
    for (int i = 0; i < q; i ++) {
        int s, t;
        std::cin >> s >> t;
        if (node_component_map[s] == node_component_map[t]) {
            std::cout << "yes" << std::endl;
        } else {
            std::cout << "no" << std::endl;
        }
    }
}

