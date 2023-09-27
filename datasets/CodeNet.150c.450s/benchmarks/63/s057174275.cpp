#include <bits/stdc++.h>

using namespace std;

using Weight = long long;
struct Edge {
    int src, dst;
    Weight weight;
    Edge(int _s, int _d, Weight _w) : src(_s), dst(_d), weight(_w) {}
    Edge() {}
};
bool operator<(const Edge &e1, const Edge &e2) {
    return e1.weight > e2.weight;
}
using Graph = vector<vector<Edge>>;

void Dijkstra(const Graph &g, int s) {
    const int n = g.size();
    const Weight INF = numeric_limits<Weight>::max() / 8;
    vector<Weight> dist(n, INF);
    vector<int> prev(n, -1);

    dist[s] = 0;
    priority_queue<Edge> que;  // e < f <=> e.weight > f.weight

    for (que.push(Edge(-2, s, 0)); !que.empty(); ) {
        Edge e = que.top();  que.pop();
        if (prev[e.dst] != -1)
            continue;

        prev[e.dst] = e.src;
        for (auto f = g[e.dst].begin(); f != g[e.dst].end(); ++f) {
            if (dist[f->dst] > e.weight + f->weight) {
                dist[f->dst] = e.weight + f->weight;
                que.push(Edge(f->src, f->dst, e.weight + f->weight));
            }
        }
    }

    // Output
    for (int v = 0; v < n; ++v) {
        if (INF <= dist[v]) cout << "INF\n";
        else cout << dist[v] << '\n';
    }
}


int main() {
    cin.tie(0); ios::sync_with_stdio(false);

    int n, m, r, s, t, d;

    cin >> n >> m >> r;
    Graph g(n);
    for (int i = 0; i < m; ++i) {
        cin >> s >> t >> d;
        g[s].emplace_back(Edge(s, t, d));
    }

    Dijkstra(g, r);

    return 0;
}


