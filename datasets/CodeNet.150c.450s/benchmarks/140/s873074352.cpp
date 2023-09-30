#include <bits/stdc++.h>
using namespace std;
using ll = long long;

struct UnionFind {
  vector<int> data;
  UnionFind() {}
  UnionFind(int n) : data(n, -1) {}
  bool same(int x, int y) { return root(x) == root(y); }
  int root(int x) { return (data[x] < 0) ? x : data[x] = root(data[x]); }
  int rank(int x) { return -data[root(x)]; }
  bool unite(int x, int y) {
    x = root(x);
    y = root(y);
    if (x != y) {
      if (data[y] < data[x]) swap(x, y);
      data[x] += data[y];
      data[y] = x;
    }
    return x != y;
  }
};
template<typename T> struct Graph {
  struct Edge { int s, t; T cost; };
  int sz;
  vector<Edge> es;
  Graph(int n = 0) : sz(n) {}

  void addEdge(int u, int v, T w) {
    sz = max(sz, max(u, v) + 1);
    es.push_back({u, v, w});
  }
  T kruskal() {
    UnionFind uf(sz);
    sort(begin(es), end(es), [](Edge e1, Edge e2) {
      return e1.cost < e2.cost;
    });
    T res = 0;
    for (auto&& e : es) {
      if (uf.unite(e.s, e.t)) res += e.cost;
    }
    return res;
  }
};

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int n, m; cin >> n >> m;
  Graph<ll> g(n);
  for (int i = 0; i < m; ++i) {
    ll s, t, w; cin >> s >> t >> w;
    g.addEdge(s, t, w);
  }
  cout << g.kruskal() << endl;
  return 0;
}
