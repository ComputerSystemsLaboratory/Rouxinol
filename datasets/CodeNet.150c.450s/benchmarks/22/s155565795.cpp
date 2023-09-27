#include <vector>
#include <iostream>
#include <limits>

using namespace std;

struct edge {
    int from;
    int to;
    int weight;
};

int main() {
    const auto INF = numeric_limits<int>::max();

    int V, E, r;
    cin >> V >> E >> r;

    vector<edge> edges;
    for (int i = 0; i < E; ++i) {
        int s, t, d;
        cin >> s >> t >> d;

        edges.push_back(edge{s, t, d});
    }

    // Bellman-Ford algorithm
    vector<int> d(V, INF);
    d[r] = 0;
    for (auto i = 0; i < V; ++i) {
        for (auto& e : edges) {
            // cerr << ": " << e.from << " " << e.to << " " << e.weight << endl;
            if (d[e.from] != INF && d[e.from] + e.weight < d[e.to]) {
                d[e.to] = d[e.from] + e.weight;
            }
        }
    }
    for (auto& e : edges) {
        if (d[e.from] != INF && d[e.from] + e.weight < d[e.to]) {
            cout << "NEGATIVE CYCLE" << endl;
            return 0;
        }
    }

    for (auto x : d) {
        if (x == INF) {
            cout << "INF" << endl;
        } else {
            cout << x << endl;
        }
    }

    return 0;
}