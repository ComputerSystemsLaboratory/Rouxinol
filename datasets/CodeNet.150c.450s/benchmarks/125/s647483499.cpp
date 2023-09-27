#include <iostream>
using namespace std;

static const int N = 100;
static const int WHITE = 0;
static const int GRAY = 1;
static const int BLACK = 2;

int M[N][N] = {0}, color[N] = {0}, d[N], f[N], tt = 0, n;

void dfs_visit(int u) {
  int v;
  color[u] = GRAY;
  d[u] = ++tt;
  for (v = 0; v < n; v++) {
    if (M[u][v] == 0) continue;
    if (color[v] == WHITE) {
      dfs_visit(v);
    }
  }
  color[u] = BLACK;
  f[u] = ++tt;
}

void dfs() {
  int u;
  for (u = 0; u < n; u++) {
    if (color[u] == WHITE) {
      dfs_visit(u);
    }
  }

  for (u = 0; u < n; u++) {
    cout << u + 1 << " " << d[u] << " " << f[u] << endl;
  }
}

int main(void) {
  int u, v, k, i, j;

  cin >> n;
  for (i = 0; i < n; i++) {
    cin >> u >> k;
    u--;
    for (j = 0; j < k; j++) {
      cin >> v;
      v--;
      M[u][v] = 1;
    }
  }
  dfs();

  return 0;
}