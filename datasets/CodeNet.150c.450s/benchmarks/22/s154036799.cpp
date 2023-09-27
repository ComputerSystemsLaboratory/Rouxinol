#include <iostream>
#include <vector>
#include <limits>
#include <algorithm>

using namespace std;

struct Edge {
    int source, target, distance; 
};

int main()
{
    int n_vertices, n_edges, source_node;
    cin >> n_vertices >> n_edges >> source_node;
    vector< vector<Edge> > rev_adjlist(n_vertices); // indexed by target
    bool negative_cycle = false;
    
    for (int i = 0; i < n_edges; ++i) {
        int source, target, distance;
        cin >> source >> target >> distance;
        rev_adjlist[target].emplace_back(Edge{source, target, distance});
    }

    vector< vector<int> > shortest_paths(n_vertices + 1,
                                         vector<int>(n_vertices,
                                                     numeric_limits<int>::max()));
    shortest_paths[0][source_node] = 0;

    for (int i = 1; i <= n_vertices; ++i) {
        for (int v = 0; v < n_vertices; ++v) {
            int min_include_edge = numeric_limits<int>::max();
            for (auto edge : rev_adjlist[v]) {
                if (shortest_paths[i-1][edge.source] == numeric_limits<int>::max()) continue;
                int include_edge = shortest_paths[i-1][edge.source] + edge.distance;
                if (include_edge < min_include_edge) {
                    min_include_edge = include_edge;
                }
            }
            shortest_paths[i][v] =
                min(shortest_paths[i-1][v], min_include_edge);
        }
        if (i == n_vertices && shortest_paths[i] != shortest_paths[i-1])
            negative_cycle = true;
    }

    if (negative_cycle) {
        cout << "NEGATIVE CYCLE" << endl;
    } else {
        for (auto distance : shortest_paths[n_vertices-1]) {  
            if (distance == numeric_limits<int>::max()) {
                cout << "INF";
            } else {
                cout << distance;
            }
            cout << endl;
        }
    }
}

