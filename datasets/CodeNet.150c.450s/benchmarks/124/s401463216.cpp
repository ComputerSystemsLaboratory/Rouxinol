#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using vi = vector<int>;
using vvi = vector<vi>;
using vll = vector<ll>;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define WHITE 0
#define VISITED 1
#define CANDIDATE 2

int dks(vvi &a, vi &d, vi &s, vi &p) {
  int total = 0, n = (int)a.size();
  while (true) {
    int min_cost = INT_MAX, u;
    rep(i, n) {
      if (s[i] != VISITED && d[i] < min_cost) {
        min_cost = d[i];
        u = i;
      }
    }

    if (min_cost == INT_MAX) break;

    s[u] = VISITED;
    if (p[u] != -1) total += a[p[u]][u];

    rep(v, n) {
      if (s[v] != VISITED && a[u][v] != -1) {
        if (d[u] + a[u][v] < d[v]) {
          d[v] = d[u] + a[u][v];
          p[v] = u;
          s[v] = CANDIDATE;
        }
      }
    }
  }
  
  return total;
}

int main() {
  int n;
  cin >> n;

  vvi g(n, vi(n, -1));
  rep(i, n) {
    int u, k;
    cin >> u >> k;

    rep(j, k) {
      int v, c;
      cin >> v >> c;

      g[u][v] = c;
    }
  }
  
  vi d(n, INT_MAX), s(n, WHITE), p(n, -1);
  d[0] = 0;
  
  dks(g, d, s, p);
  
  rep(i, n) printf("%d %d\n", i, d[i]);
}

