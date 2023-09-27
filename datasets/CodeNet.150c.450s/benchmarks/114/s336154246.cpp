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

int n;

int prim(vvi &g) {
  vi d(n, INT_MAX), s(n, WHITE), p(n, -1); 
  d[0] = 0;

  int total = 0;
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
    if (p[u] != -1) total += g[p[u]][u];

    rep(v, n) {
      if (s[v] != VISITED && g[u][v] != -1) {
        if (g[u][v] < d[v]) {
          d[v] = g[u][v];
          p[v] = u;
          s[v] = CANDIDATE;
        }
      }
    }
  }

  return total;
}

int main() {
  cin >> n;

  vvi g(n, vi(n, -1));
  rep(i, n) {
    rep(j, n) {
      int c;
      cin >> c;

      g[i][j] = c == -1 ? INT_MAX : c;
    }
  }
  
  int total = prim(g);
  cout << total << endl;
}

