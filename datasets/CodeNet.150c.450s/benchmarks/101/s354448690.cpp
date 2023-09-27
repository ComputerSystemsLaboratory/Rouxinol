#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
const double PI = acos(-1);
const ll MOD = 1000000007;
using Graph = vector<vector<int>>;

class UnionFind {
public:
  vector <ll> par;
  vector <ll> siz;
  UnionFind(ll sz_): par(sz_), siz(sz_, 1LL) {
    for (ll i = 0; i < sz_; ++i) par[i] = i;
  }
  void init(ll sz_) {
    par.resize(sz_);
    siz.assign(sz_, 1LL);
    for (ll i = 0; i < sz_; ++i) par[i] = i;
  }
  ll root(ll x) {
    while (par[x] != x) {
      x = par[x] = par[par[x]];
    }
    return x;
  }
  bool merge(ll x, ll y) {
    x = root(x);
    y = root(y);
    if (x == y) return false;
    if (siz[x] < siz[y]) swap(x, y);
    siz[x] += siz[y];
    par[y] = x;
    return true;
  }
  bool issame(ll x, ll y) {
    return root(x) == root(y);
  }
  ll size(ll x) {
    return siz[root(x)];
  }
};

int main() {
  int n,m; cin >> n >> m;
  UnionFind uf(n);
  rep(i,m) {
    int s,t; cin >> s >> t;
    uf.merge(s,t);
  }

  int q; cin >> q;
  vector<int> s(q),t(q);
  rep(i,q) cin >> s[i] >> t[i];
  rep(i,q) {
    if (uf.issame(s[i],t[i])) cout << "yes" << endl;
    else cout << "no" << endl;
  }
}
