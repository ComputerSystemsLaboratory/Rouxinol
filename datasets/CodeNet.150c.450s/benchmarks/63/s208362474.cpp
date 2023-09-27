//https://onlinejudge.u-aizu.ac.jp/courses/library/5/GRL/1/GRL_1_A

#include <bits/stdc++.h>

using namespace std;


template<class Weight>
struct WeightedGraph {
    struct Edge {
        int to;
        int weight;
    };
    int n;
    vector<vector<Edge> > adj, rdj;

    explicit WeightedGraph(int n) : n(n), adj(n), rdj(n) {
    }

    void addEdge(int u, int v, Weight w) {
        adj[u].push_back({v, w});
        rdj[v].push_back({u, w}); // can be omitted for the standard dijkstra
    }
};

template<class Weight>
struct ShortestPath {
    WeightedGraph<Weight> g;

    explicit ShortestPath(WeightedGraph<Weight> g) : g(g), dist(g.n), prev(g.n) {
    }

    vector<Weight> dist;
    vector<int> prev;

    void solve(int s) {
        prev.assign(g.n, -1);
        dist.assign(g.n, -1);
        dist[s] = 0;

        using Node = pair<Weight, int>;
        priority_queue<Node, vector<Node>, greater<> > que;
        que.push({0, s});
        while (!que.empty()) {
            auto d = que.top().first;
            auto u = que.top().second;
            que.pop();
            if (dist[u] < d) continue;
            for (auto e: g.adj[u]) {
                auto v = e.to;
                auto w = e.weight;
                if (dist[v] >= 0 && dist[v] <= dist[u] + w) continue;
                dist[v] = dist[u] + w;
                prev[v] = u;
                que.push({dist[v], v});
            }
        }
    }

    int solve(int s, int t) {
        if (s == t) return dist[s] = 0;
        fill(dist.begin(), dist.end(), -1);
        dist[s] = 0;
        vector<Weight> drev(g.n, -1);
        drev[t] = 0;

        using Node = pair<Weight, int>;
        priority_queue<Node, vector<Node>, greater<> > qs, qt;
        qs.push({0, s});
        qt.push({0, t});
        int mu = -1;
        while (!qs.empty() && !qt.empty()) {
            if (mu >= 0 && qs.top().first + qt.top().first >= mu) break;
            if (qs.top().first <= qt.top().first) {
                auto d = qs.top().first;
                auto u = qs.top().second;
                qs.pop();
                if (dist[u] > d) continue;
                for (auto e: g.adj[u]) {
                    auto v = e.to;
                    auto w = e.weight;
                    if (dist[v] >= 0 && dist[v] <= dist[u] + w) continue;
                    dist[v] = dist[u] + w;
                    qs.push({dist[v], v});
                    if (drev[v] >= 0) {
                        auto nu = dist[v] + drev[v];
                        if (mu < 0 || mu > nu) mu = nu;
                    }
                }
            } else {
                auto d = qt.top().first;
                auto u = qt.top().second;
                qt.pop();
                if (drev[u] > d) continue;
                for (auto e: g.rdj[u]) {
                    auto v = e.to;
                    auto w = e.weight;
                    if (drev[v] >= 0 && drev[v] <= drev[u] + w) continue;
                    drev[v] = drev[u] + w;
                    qt.push({drev[v], v});
                    if (dist[v] >= 0) {
                        auto nu = dist[v] + drev[v];
                        if (mu < 0 || mu > nu) mu = nu;
                    }
                }
            }
        }
        return mu;
    }
};


int main() {
    int V, E, r;
    cin >> V >> E >> r;

    WeightedGraph<int> g(V);
    for (int i = 0; i < E; ++i) {
        int s, t, c;
        cin >> s >> t >> c;
        g.addEdge(s, t, c);
    }

    ShortestPath<int> solver(g);
    solver.solve(r);
    for (int i = 0; i < V; ++i) {
        if (solver.dist[i] != -1) {
            cout << solver.dist[i] << endl;
        } else {
            cout << "INF" << endl;
        }
    }

    return 0;
}

/*
 * Dijkstra
 */
