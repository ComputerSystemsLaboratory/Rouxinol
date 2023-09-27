#include <iostream>
using namespace std;

const int MAX = 105;
const int WHITE = 0;
const int GRAY = 1;
const int BLACK = 2;
const int INFTY = (1 << 21);
int n, M[MAX][MAX];
int color[MAX];
int d[MAX];
int p[MAX];

void dijkstra(int root) {
  int u = -1;
  for (int i = 0; i < n; i++) {
    color[i] = WHITE;
    d[i] = INFTY;
    p[i] = -1;
  }

  color[root] = GRAY;
  d[root] = 0;

  while (true) {
    int min_cost = INFTY;
    for (int i = 0; i < n; i++) {
      if (color[i] != BLACK && d[i] < min_cost) {
        min_cost = d[i];
        u = i;
      }
    }

    if (min_cost == INFTY) {
      break;
    }

    color[u] = BLACK;

    for (int i = 0; i < n; i++) {
      if (color[i] != BLACK && d[i] > M[u][i] + d[u]) {
        d[i] = d[u] + M[u][i];
        p[i] = u;
        color[i] = GRAY;
      }
    }
  }
}

int main() {
  cin >> n;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      M[i][j] = INFTY;
    }
  }
  int k, s, t, c;
  for (int i = 0; i < n; i++) {
    cin >> s >> k;
    for (int j = 0; j < k; j++) {
      cin >> t >> c;
      M[s][t] = c;
    }
  }
  dijkstra(0);
  for (int i = 0; i < n; i++) {
    cout << i << " " << d[i] << endl;
  }
  return 0;
}

