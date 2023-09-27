#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (n); i++)
#define contains(v, t) (find(v.begin(), v.end(), t) != v.end())
#define MOD 1000000007
using ll = long long;
using ull = unsigned long long;

struct UnionFind {
  vector<int> par;
  vector<int> siz;

  UnionFind(int n) {
    par = vector<int>(n);
    siz = vector<int>(n, 1);
    rep(i, n) {
      par[i] = i;
    }
  }

  int root(int x) {
    if (par[x] == x) return x;
    return par[x] = root(par[x]);
  }

  bool same(int x, int y) {
    return root(x) == root(y);
  }

  void unite(int x, int y) {
    x = root(x);
    y = root(y);
    if (x == y) return;
    if (siz[x] < siz[y]) swap(x, y);
    siz[x] += siz[y];
    par[y] = x;
  }

int size(int x) {
    return siz[root(x)];
  }
};

int main() {
  int v, e; cin >> v >> e;
  UnionFind uf(v);
  vector<tuple<int, int, int>> vt;
  rep(i, e) {
    int s, t, w; cin >> s >> t >> w;
    vt.push_back(make_tuple(w, s, t));
  }
  sort(vt.begin(), vt.end());
  int ans = 0;
  for (tuple<int, int, int> t : vt) {
    if (!uf.same(get<1>(t), get<2>(t))) {
      uf.unite(get<1>(t), get<2>(t));
      ans += get<0>(t);
    }
  }
  cout << ans << endl;
}

