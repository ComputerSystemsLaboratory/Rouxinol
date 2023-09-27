#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll, ll> P;
#define REP(i, n) for (long long i = 0; i < (n); i++)
struct UnionFind {
    vector<int> parent, size;
    UnionFind(int n) {
        parent.resize(n, -1);
        size.resize(n, 1);
    }
    void unite(int x, int y) {
        if (same(x, y)) {
            return;
        }
        x = root(x);
        y = root(y);
        if (size[x] <= size[y]) {
            swap(x, y);
        }
        parent[y] = x;
        size[x] += size[y];
    }
    bool same(int x, int y) { return (root(x) == root(y)); }
    int root(int x) {
        while (parent[x] != -1) {
            x = parent[x];
        }
        return x;
    }
    int getsize(int x) { return size[root(x)]; }
};
vector<vector<P>> mst(vector<vector<P>> graph) {
    vector<pair<ll, P>> as;
    REP(i, graph.size()) {
        REP(j, graph[i].size()) { as.push_back({graph[i][j].second, {i, graph[i][j].first}}); }
    }
    sort(as.begin(), as.end());
    UnionFind uf(graph.size());
    vector<vector<P>> ans(graph.size());
    REP(i, as.size()) {
        if (!uf.same(as[i].second.first, as[i].second.second)) {
            ans[as[i].second.first].push_back({as[i].second.second, as[i].first});
            ans[as[i].second.second].push_back({as[i].second.first, as[i].first});
            uf.unite(as[i].second.second, as[i].second.first);
        }
    }
    return ans;
}
signed main() {
    int v, e;
    cin >> v >> e;
    vector<vector<P>> graph(v);
    vector<vector<P>> ans(v);
    REP(i, e) {
        ll s, t, w;
        cin >> s >> t >> w;
        graph[s].push_back({t, w});
        graph[t].push_back({s, w});
    }
    ans = mst(graph);
    ll sum = 0;
    REP(i, v) {
        REP(j, ans[i].size()) { sum += ans[i][j].second; }
    }
    cout << sum / 2 << endl;
}
