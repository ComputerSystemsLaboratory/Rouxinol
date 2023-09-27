#include <bits/stdc++.h>
using namespace std;
static const int WHITE = 0;
static const int GRAY  = 1;
static const int BLACK = 2;
static const int N     = 100;

int n, tt;
vector<vector<int>> M(N, vector<int>(N));
vector<int> color(N), d(N), f(N);

void dfs_visit(int u) {
  color[u] = GRAY;
  d[u]     = ++tt;
  for (int v = 0; v < n; v++) {
    if (M[u][v] == 0) continue;
    if (color[v] == WHITE) { dfs_visit(v); }
  }
  color[u] = BLACK;
  f[u]     = ++tt;
}

void dfs() {
  tt = 0;

  for (int u = 0; u < n; u++) {
    if (color[u] == WHITE) dfs_visit(u);
  }
  for (int u = 0; u < n; u++) {
    printf("%d %d %d\n", u + 1, d[u], f[u]);
  }
}

int main() {
  int u, v, k;
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> u >> k;
    u--;
    for (int j = 0; j < k; j++) {
      cin >> v;
      v--;
      M[u][v] = 1;
    }
  }

  dfs();
}
