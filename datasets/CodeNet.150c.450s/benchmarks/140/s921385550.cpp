//#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
#define rep(i, n) for(int i=0; i<n; ++i)
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
using namespace std;
using ll = int64_t;
using P = pair<int, int>;
using vs = vector<string>;
using vi = vector<int>;
using vvi = vector<vi>;

struct UnionFind {
    vector<int> par; // 親を指すvector,-par[親]は木のサイズ
    UnionFind(int n):par(n, -1) {} // uniteで親を埋め込んでいく必要あり
    int root(int x) { // 親をたどる&データの整理
        if(par[x] < 0) return x;
        return par[x] = root(par[x]);
    }
    bool unite(int x, int y) { // データの結合
        x = root(x);
        y = root(y);
        if(x == y) return false;
        if(par[x] > par[y]) swap(x, y);
        par[x] += par[y];
        par[y] = x;
        return true;
    }
    bool same(int x, int y) {return root(x) == root(y);} // 所属判定
    int size(int x) {return -par[root(x)];} // 木のサイズ
};


struct edge {
    int u, v;
    int64_t cost;
    edge(int u=0, int v=0, int64_t cost=0):u(u), v(v), cost(cost) {}
};

bool comp(const edge& e1, const edge& e2) {
    return e1.cost < e2.cost;
}

vector<edge> es; // 初期化の必要あり
//最小全域木
int64_t kruskal(int V) { // Vは頂点数
    int E = es.size();
    sort(es.begin(), es.end(), comp);
    UnionFind uft(V);
    int64_t res = 0;
    for(int i = 0; i < E; ++i) {
        edge e = es[i];
        if(!uft.same(e.u, e.v)) {
            uft.unite(e.u, e.v);
            res += e.cost;
        }
    }
    return res;
}

int main() {
    int v, e;
    cin >> v >> e;
    es.resize(e);
    rep(i, e) {
        int s, t;
        ll w;
        cin >> s >> t >> w;
        es[i] = edge(s, t, w);
    }
    cout << kruskal(v) << endl;
}
