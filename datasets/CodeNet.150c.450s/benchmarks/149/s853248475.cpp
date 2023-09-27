#include <bits/stdc++.h>
using namespace std;

#define int long long
#define push_back PB
#define pop_back PPB
static const int MAX_N = 10005;

struct UF {
  int par[MAX_N], n;

  void init(int pn) {
    for (int i = 0; i < pn; ++i) {
      par[i] = i;
    }
  }

  int find(int x) {
    if (par[x] == x) return x;
    return par[x] = find(par[x]);
  }

  void unite(int x, int y) {
    x = find(x);
    y = find(y);
    if (x == y) return;

    par[x] = y;
  }

  bool same(int x, int y) {
    return find(x) == find(y);
  }
};

UF uf;

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int n, q;
  cin >> n >> q;
  uf.init(n);

  for (int i = 0; i < q; ++i) {
    int com, x, y;
    cin >> com >> x >> y;
    if (com) cout << uf.same(x, y) << endl;
    else uf.unite(x, y);
  }

  return 0;
}