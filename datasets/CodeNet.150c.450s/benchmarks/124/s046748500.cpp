#include <bits/stdc++.h>
using namespace std;
static const int INF   = (1 << 21);
static const int WHITE = 0;
static const int GRAY  = 1;
static const int BLACK = 2;
static const int NIL   = -1;
static const int MAX   = 100;

int n;
vector<vector<int>> M(MAX, vector<int>(MAX, NIL));

void dijstra(int s) {
  vector<int> color(n, WHITE);
  vector<int> d(n, INF);
  vector<int> p(n);
  d[s] = 0;
  p[s] = NIL;

  while (true) {
    int u       = 0;
    int mincost = INF;
    for (int i = 0; i < n; i++) {
      if (color[i] != BLACK && d[i] < mincost) {
        mincost = d[i];
        u       = i;
      }
    }
    if (mincost == INF) { break; }

    color[u] = BLACK;

    for (int v = 0; v < n; v++) {
      if (color[v] != BLACK && M[u][v] != NIL) {
        if (d[u] + M[u][v] < d[v]) {
          d[v]     = d[u] + M[u][v];
          p[v]     = u;
          color[v] = GRAY;
        }
      }
    }
  }
  int res = 0;
  for (int i = 0; i < n; i++) {
    cout << i << " " << d[i] << endl;
  }
}

int main() {
  cin >> n;
  for (int i = 0; i < n; i++) {
    int id, k;
    cin >> id >> k;
    for (int j = 0; j < k * 2; j += 2) {
      int v, c;
      cin >> v >> c;
      M[id][v] = c;
    }
  }
  dijstra(0);
}
