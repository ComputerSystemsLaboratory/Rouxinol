#include <bits/stdc++.h>
using namespace std;

long long kruskal(const vector<vector<pair<int, long long>>> &G) {
    using Edge = pair<long long, pair<int, int>>;
    struct UnionFind {
        vector<int> data; int sz;
        UnionFind(int sz) : data(sz, -1), sz(sz) { }
        bool unite(int x, int y) {
            if ((x = root(x)) == (y = root(y))) { return false; }
            if (data[x] > data[y]) { swap(x, y); }
            data[x] += data[y]; data[y] = x; sz--; return true;
        }
        int root(int x) { return data[x] < 0 ? x : data[x] = root(data[x]); }
        int size() { return sz; }
    };
    int N = G.size(); long long sum = 0;
    vector<Edge> edges;
    UnionFind uf(N);
    for (int u = 0; u < N; u++) for (auto v : G[u]) {
        edges.emplace_back(v.second, make_pair(u, v.first));
    }
    sort(edges.begin(), edges.end());
    for (auto e : edges) {
        int from, to; long long cost = e.first; tie(from, to) = e.second;
        if (uf.unite(from, to)) { sum += cost; }
        if (uf.size() == 1) break;
    }
    return sum;
}


int main() {
    int V, E;
    cin >> V >> E;
    vector<vector<pair<int, long long>>> G(V);
    for (int i = 0; i < E; i++) {
        int u, v;
        long long cost;
        cin >> u >> v >> cost;
        G[u].emplace_back(v, cost);
        G[v].emplace_back(u, cost);
    }
    
    long long sum = kruskal(G);
    cout << sum << endl;
    return 0;
}
