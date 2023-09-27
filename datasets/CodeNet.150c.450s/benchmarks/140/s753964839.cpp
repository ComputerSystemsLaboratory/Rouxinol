#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;
using P = pair<int, int>;
const int INF = numeric_limits<int>::max();

struct UnionFind {
    vector<int> par;
    vector<int> rank;
    UnionFind(int n) {
        par.assign(n, 0);
        iota(par.begin(), par.end(), 0);
        rank.assign(n, 0);
    }
    int find(int x) {
        if (par[x] == x) {
            return x;
        }
        return par[x] = find(par[x]);
    }
    void unite(int x, int y) {
        x = find(x);
        y = find(y);
        if (x == y) return;
        if (rank[x] < rank[y]) {
            par[x] = y;
        } else {
            par[y] = x;
            if (rank[x] == rank[y]) {
                rank[x]++;
            }
        }
    }
};

struct edge {
    int from, to, cost;
};

int main()
{
    int nv, ne;
    cin >> nv >> ne;
    UnionFind uf(nv);
    vector<edge> es;
    rep(i, ne) {
        int u, v, c;
        cin >> u >> v >> c;
        es.push_back({u, v, c});
    }
    sort(es.begin(), es.end(), [](auto& a1, auto& a2) {
        return a1.cost < a2.cost;
    });
    int ans = 0;
    rep(i, ne) {
        edge e = es[i];
        if (uf.find(e.from) != uf.find(e.to)) {
            uf.unite(e.from, e.to);
            ans += e.cost;
        }
    }
    cout << ans << endl;
}
