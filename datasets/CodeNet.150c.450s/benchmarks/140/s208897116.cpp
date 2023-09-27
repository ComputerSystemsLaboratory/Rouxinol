#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;
using edge = tuple<int, int, int>;  // w, s, t

struct unionFind {
  vector<int> d;  // 根： 木のサイズ x -1, それ以外： 親のID
  unionFind(int n = 0) : d(n, -1) {}
  int find(int x) {
    if (d[x] < 0) return x;
    return d[x] = find(d[x]);
  }
  bool unite(int x, int y) {
    // root化しておく
    x = find(x);
    y = find(y);
    if (x == y) return false;

    // x を y に unite
    // d[x] のほうが多きい（=サイズが小さい）場合はswap
    if (d[x] > d[y]) swap(x, y);
    d[x] += d[y];
    d[y] = x;
    return true;
  }
  bool same(int x, int y) { return find(x) == find(y); }
  int size(int x) { return -d[find(x)]; }
} uf;

const int MAX_N = 1e4;
vector<edge> G;
int V, E;

void kruskal() {
  ll ans = 0;
  uf = unionFind(V);
  uf.d = vector<int>(V);
  rep(i, V) uf.d[i] = -1;
  sort(G.begin(), G.end());
  for (edge e : G) {
    int w = get<0>(e), s = get<1>(e), t = get<2>(e);
    if (!uf.same(s, t)) {
      uf.unite(s, t);
      ans += w;
    }
  }
  cout << ans << endl;
}

int main() {
  cin >> V >> E;
  G = vector<edge>(E);
  rep(i, E) {
    int s, t, w;
    cin >> s >> t >> w;
    G[i] = edge(w, s, t);
  }
  kruskal();
  return 0;
}
