#include <bits/stdc++.h>
using namespace std;

template <typename T>
struct edge {
    int src, to;
    T cost;

    edge(int to, T cost) : src(-1), to(to), cost(cost) {}

    edge(int src, int to, T cost) : src(src), to(to), cost(cost) {}

    edge &operator=(const int &x) {
        to = x;
        return *this;
    }

    operator int() const { return to; }
};

template <typename T>
using Edges = vector<edge<T>>;
template <typename T>
using WeightedGraph = vector<Edges<T>>;
using UnWeightedGraph = vector<vector<int>>;
template <typename T>
using Matrix = vector<vector<T>>;

template <typename T>
vector<T> bellman_ford(Edges<T> &edges, int V, int s) {
    const auto INF = numeric_limits<T>::max();
    vector<T> dist(V, INF);
    dist[s] = 0;
    for (int i = 0; i < V - 1; i++) {
        for (auto &e : edges) {
            if (dist[e.src] == INF) continue;
            dist[e.to] = min(dist[e.to], dist[e.src] + e.cost);
        }
    }
    for (auto &e : edges) {
        if (dist[e.src] == INF) continue;
        if (dist[e.src] + e.cost < dist[e.to]) return vector<T>();
    }
    return dist;
}

int main() {
    const int64_t INF = numeric_limits<int64_t>::max();
    int V, E, r;
    cin >> V >> E >> r;
    Edges<int64_t> G;
    for (int i = 0; i < E; i++) {
        int s, t, d;
        cin >> s >> t >> d;
        G.emplace_back(s, t, d);
    }
    auto dist = bellman_ford(G, V, r);
    if (dist.empty()) {
        cout << "NEGATIVE CYCLE" << endl;
        return 0;
    }
    for (int i = 0; i < V; i++) {
        if (dist[i] == INF)
            cout << "INF" << endl;
        else
            cout << dist[i] << endl;
    }
}
