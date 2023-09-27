#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
typedef pair<int, int> P;

// Kruskal法
//   証明: http://drken1215.hatenablog.com/entry/20121223/1356230697

class UnionFind {
    vector<int> par;
    int n;
public:
    UnionFind(int sz) : par(sz, -1) {}
    int find(int x) {
        if (par[x] < 0) return x;
        return par[x] = find(par[x]);
    }
    bool unite(int x, int y) {
        x = find(x); y = find(y);
        if (x == y) return false;
        if (par[x] > par[y]) swap(x, y);
        par[x] += par[y];
        par[y] = x;
        return true;
    }
    bool same(int x, int y) { return find(x) == find(y); }
    int size(int x) { return -par[find(x)]; }
};

int kruskal(vector<vector<P>> &edge) {
    int n = edge.size();
    typedef pair<int, P> PP;
    vector<PP> weights;
    for (int i = 0; i < n; i++) {
        for (auto &e : edge[i]) weights.push_back({e.second, {i, e.first}});
    }
    sort(weights.begin(), weights.end());
    UnionFind uf(n);
    int ret = 0;
    for (auto &w : weights) {
        int from = w.second.first;
        int to = w.second.second;
        if (uf.unite(from, to)) ret += w.first;
    }
    return ret;
};


// verified
//   http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=GRL_2_A&lang=jp
void AOJ_GRL_2_A() {
    int V, E;
    cin >> V >> E;
    vector<vector<P>> edge(V);
    for (int i = 0; i < E; i++) {
        int s, t, w;
        cin >> s >> t >> w;
        edge[s].push_back({t, w});
    }
    cout << kruskal(edge) << endl;
}

int main() {
    AOJ_GRL_2_A();
    return 0;
}
