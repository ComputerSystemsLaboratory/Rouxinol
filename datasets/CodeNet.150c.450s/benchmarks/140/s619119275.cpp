#include <bits/stdc++.h>

using namespace std;

#define int long long
#define PB push_back
#define PPB pop_back
typedef pair<int, int> pii;
static const int INF = 1LL<<61;
static const int MAX_N = 10005;

struct UF {
  int par[MAX_N], rank[MAX_N];

  void init(int n) {
    for (int i = 0; i < n; ++i) {
      par[i] = i;
      rank[i] = 0;
    }
  }

  int find(int x) {
    if (par[x] == x) return x;
    return par[x] = find(par[x]);
  }

  int same(int x, int y) {
    return find(x) == find(y);
  }

  void unite(int x, int y) {
    x = find(x);
    y = find(y);
    if (x == y) return;

    if (rank[x] < rank[y]) {
      par[x] = y;
    } else {
      par[y] = x;
      if (rank[x] == rank[y]) rank[x]++;
    }
  }
};

struct edge {
  int from, to, c;
  edge(){}
  edge(int p1, int p2, int p3) {
    from = p1;
    to = p2;
    c = p3;
  }

  const bool operator<(const edge &r) const {
    return c < r.c;
  }
};

UF uf;
edge E[100005];

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int v, e;
  cin >> v >> e;
  uf.init(v);

  for (int i = 0; i < e; ++i) {
    int s, t, w;
    cin >> s >> t >> w;
    E[i] = edge(s, t, w);
  }
  sort(E, E + e);

  int ans = 0;
  for (int i = 0; i < e; ++i) {
    if (uf.same(E[i].from, E[i].to)) continue;
    uf.unite(E[i].from, E[i].to);
    ans += E[i].c;
  }

  cout << ans << endl;

  return 0;
}