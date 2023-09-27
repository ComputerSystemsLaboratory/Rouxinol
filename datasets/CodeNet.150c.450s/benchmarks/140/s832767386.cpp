#include "bits/stdc++.h"
#define int long long
#define FOR(i, a, b) for (int i = (int)(a); i < (int)(b); i++)
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define ALL(obj) begin(obj), end(obj)
#define MAX(x) *max_element(ALL(x))
#define MIN(x) *min_element(ALL(x))
#define LOWER_BOUND(A, key) distance(A.begin(), lower_bound(ALL(A), key))
#define UPPER_BOUND(A, key) distance(A.begin(), upper_bound(ALL(A), key))

using namespace std;
using ll      = long long;
const int MOD = (int)(1e9 + 7);
const int INF = (int)(1e13 + 7);

int bpm(int x, unsigned int y) {
  if (x == 0) return 0;
  if (y == 0) return 1;
  int ans   = 1;
  int digit = (int)((log((double)y) / log((double)2) / 1 + 1));
  x %= MOD;
  for (unsigned int i = 0; i < digit; i++) {
    if (((y >> i) & 1u) == 1) ans = ans * x % MOD;
    x = x * x % MOD;
  }
  return ans;
}

class UnionFind {
public:
  vector<int> _par;
  vector<int> _size;
  UnionFind(int sz_) : _par(sz_), _size(sz_, 1LL) {
    for (int i = 0; i < sz_; i++) _par[i] += i;
  }
  void init(int sz_) {
    _par.resize(sz_);
    _size.assign(sz_, 1LL);
    for (int i = 0; i < sz_; i++) _par[i] = i;
  }
  int root(int x) {
    while (_par[x] != x) {
      x = _par[x] = _par[_par[x]];
    }
    return x;
  }
  bool unite(int x, int y) {
    x = root(x);
    y = root(y);
    if (x == y) return false;
    if (_size[x] < _size[y]) swap(x, y);
    _size[x] += _size[y];
    _par[y] = x;
    return true;
  }
  bool same(int x, int y) {
    return root(x) == root(y);
  }
  int size(int x) {
    return _size[root(x)];
  }
};
const int MAX_E = 500000; //change if you need.
int V, E;                 //assign!!
struct edge {
  int u, v, cost;
};
edge es[MAX_E];
bool comp(const edge &e1, const edge &e2) { return e1.cost < e2.cost; }
int kruskal() {
  sort(es, es + E, comp);
  UnionFind uf(V);
  int res = 0;
  for (int i = 0; i < E; i++) {
    edge e = es[i];
    if (!uf.same(e.u, e.v)) {
      uf.unite(e.u, e.v);
      res += e.cost;
    }
  }
  return res;
}

signed main() {
  cin >> V >> E;
  int s, t, cost;
  rep(i, E) {
    cin >> s >> t >> cost;
    es[i] = {s, t, cost};
  }
  int res = kruskal();
  cout << res << endl;
}

