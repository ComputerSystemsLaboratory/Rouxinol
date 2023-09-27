#include <iostream>
#include <queue>

using namespace std;
static const int N = 100;
static const int INFTY = (1 << 21);

int M[N][N] = {0}, d[N], n;

void bfs() {
  int u, v;
  queue<int> q;
  for (u = 0; u < n; u++) {
    d[u] = INFTY;
  }
  d[0] = 0;
  q.push(0);
  while (!q.empty()) {
    u = q.front();
    q.pop();
    for (v = 0; v < n; v++) {
      if (M[u][v] == 0) continue;
      if (d[v] != INFTY) continue;
      d[v] = d[u] + 1;
      q.push(v);
    }
  }
  for (u = 0; u < n; u++) {
    cout << u + 1 << ' ' << ((d[u] == INFTY) ? (-1) : d[u]) << endl;
  }
}

int main() {
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

  bfs();

  return 0;
}