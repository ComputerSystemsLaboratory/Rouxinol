#include <iostream>
#include <vector>
#include <unordered_map>
#include <set>
#include <queue>
//#include "../cxx-prettyprint/prettyprint.hpp"


int main() {
    int n;
    std::cin >> n;

    std::unordered_map<int, std::vector<int>> Adj(n);

    for (int i = 0; i < n; i ++) {
        int u, k;
        std::cin >> u >> k;
        std::vector<int> V(k);
        for (int& v : V) {
            std::cin >> v;
        }
        Adj[u] = V;
    }

    std::set<int> nodes_unvisited;
    std::unordered_map<int, int> distances;
    for (int i = 1; i <= n; i ++) {
        nodes_unvisited.insert(i);
        distances[i] = -1;
    }

    nodes_unvisited.erase(1);
    distances[1] = 0;
    std::queue<int> queue;
    queue.push(1);

    while (!queue.empty()) {
        int u = queue.front();
        queue.pop();
        for (int v : Adj[u]) {
            if (nodes_unvisited.find(v) != nodes_unvisited.end()) {
                nodes_unvisited.erase(v);
                distances[v] = distances[u] + 1;
                queue.push(v);
            }
        }
    }

    for (int i = 1; i <= n; i ++) {
        std::cout << i << " " << distances[i] << std::endl;
    }
}

