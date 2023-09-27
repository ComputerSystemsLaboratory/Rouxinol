#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <utility>
#include <tuple>
#include <queue>
#include <deque>
#include <map>
#include <set>
#include <cmath>
#include <iomanip>
#include <cassert>
#define REP(i, n) for (int i = 0; i < (n); ++i)
#define ALL(x) (x).begin(), (x).end()
#define SZ(x) (int)(x).size()
using namespace std;
using ll = long long;
constexpr int inf = 1001001001;
constexpr ll INF = 3003003003003003003;
template <typename T> bool chmin(T &a, const T &b) {if (a > b) {a = b; return 1;} return 0;}
template <typename T> bool chmax(T &a, const T &b) {if (a < b) {a = b; return 1;} return 0;}

struct Graph {
    struct Edge {int to; ll cost;};
    vector<vector<Edge>> G;
    Graph(int V): G(V) {}
    Graph(int V, int E, bool weighted = false, bool directed = false): G(V) {
        REP(i, E) {
            int u, v;
            ll c = 1;
            cin >> u >> v;
            if (weighted) cin >> c;
            // --u; --v;
            G[u].push_back(Edge{v, c});
            if (!directed) G[v].push_back(Edge{u, c});
        }
    }
    void AddEdge(int from, int to, ll cost = 1, bool directed = false) {
        G[from].push_back(Edge{to, cost});
        if (!directed) G[to].push_back(Edge{from, cost});
    }
    const vector<Edge> &operator[](int n) {
        return G[n];
    }
};

vector<ll> dijkstra(Graph &G, int s) {
    vector<ll> dist(SZ(G.G), INF);
    vector<bool> used(SZ(G.G), false);
    priority_queue<pair<ll, int>> pq;
    dist[s] = 0;
    pq.push(pair<ll, int>(0, s));
    while (!pq.empty()) {
        int v = pq.top().second;
        pq.pop();
        if (used[v]) continue;
        for (auto &e: G[v]) {
            if (chmin(dist[e.to], dist[v] + e.cost)) pq.push(pair<ll, int>(-dist[e.to], e.to));
        }
        used[v] = true;
    }
    return dist;
}

int main() {
    int v, e, r;
    cin >> v >> e >> r;
    Graph G(v, e, true, true);
    auto d = dijkstra(G, r);
    REP(i, v) {
        if (d[i] == INF) cout << "INF\n";
        else cout << d[i] << "\n";
    }
    return 0;
}

