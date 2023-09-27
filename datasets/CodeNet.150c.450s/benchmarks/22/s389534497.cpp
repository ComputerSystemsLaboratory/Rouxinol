#include <algorithm>
#include <iostream>
#include <vector>
#include <queue>
#include <tuple>
using namespace std;

template <typename T>
struct Edge { int src, dst; T cost;
    Edge(int dst, T cost) : src(-1), dst(dst), cost(cost) { }
    Edge(int src, int dst, T cost) : src(src), dst(dst), cost(cost) { }
};
template <typename T> using Edges = vector<Edge<T>>;
template <typename T> using WeightedGraph = vector<Edges<T>>;
template <typename T> using Matrix = vector<vector<T>>;

template <typename T>
vector<T>  bellman_ford(Edges<T> &edges, int V, int s) {
    const T INF = numeric_limits<T>::max();
    vector<T> dist(V, INF); dist[s] = 0;
    for (int _ = 0; _ < V - 1; _++) {
        for (auto &e: edges) if (dist[e.src] != INF) {
            dist[e.dst] = min(dist[e.dst], dist[e.src] + e.cost);
        }
    }
    for (auto &e: edges) if (dist[e.src] != INF) {
        if (dist[e.src] + e.cost < dist[e.dst]) return {};
    }
    return dist;
}

int main() {
    int V, E, r; cin >> V >> E >> r;
    const auto INF = numeric_limits<int>::max();
    Edges<int> es;
    while (E--) {
        int s, t, d; cin >> s >> t >> d;
        es.emplace_back(s, t, d);
    }
    auto dist = bellman_ford(es, V, r);
    if (dist.empty()) puts("NEGATIVE CYCLE");
    for (int d: dist) {
        if (d == INF) cout << "INF" << endl;
        else cout << d << endl;
    }
    return 0;
}
