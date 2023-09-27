#include <bits/stdc++.h>
using namespace std;
static const int INF   = (1 << 21);
static const int WHITE = 0;
static const int GRAY  = 1;
static const int BLACK = 2;
static const int NIL   = -1;

int n;

void prim(vector<vector<int>> &A) {
  vector<int> color(n, WHITE);
  vector<int> d(n, INF);
  vector<int> p(n, 0);
  d[0] = 0;
  p[0] = -1;

  while (true) {
    int mincost = INF;
    int u       = -1;

    for (int i = 0; i < n; i++) {
      if (color[i] != BLACK && d[i] < mincost) {
        mincost = d[i];
        u       = i;
      }
    }
    if (mincost == INF) { break; }
    color[u] = BLACK;

    for (int v = 0; v < n; v++) {
      if (color[v] != BLACK && A[u][v] != -1) {
        if (A[u][v] < d[v]) {
          d[v]     = A[u][v];
          p[v]     = u;
          color[v] = GRAY;
        }
      }
    }
  }
  int res = 0;
  for (int i = 0; i < n; i++) {
    res += d[i];
  }
  cout << res << endl;
}

int main() {
  cin >> n;
  vector<vector<int>> A(n, vector<int>(n));

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cin >> A[i][j];
    }
  }
  prim(A);
}
