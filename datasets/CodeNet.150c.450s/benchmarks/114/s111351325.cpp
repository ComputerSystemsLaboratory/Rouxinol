#include <iostream>
using namespace std;

const int MAX = 105;
const int WHITE = 0;
const int GRAY = 1;
const int BLACK = 2;
const int INFTY = 1 << 21;
int n;
int m[MAX][MAX];
int color[MAX];
int d[MAX];
int p[MAX];

int prim() {
  for (int i = 0; i < n; i++) {
    d[i] = INFTY;
    p[i] = -1;
  }
  d[0] = 0;
  p[0] = -1;

  while (true) {
    int u {-1};
    int min_cost = INFTY;
    for (int i = 0; i < n; i++) {
      if (color[i] != BLACK && d[i] < min_cost) {
        min_cost = d[i];
        u = i;
      }
    }
    if (u == -1) break;
    color[u] = BLACK;
    for (int v = 0; v < n; v++) {
      if (color[v] != BLACK && m[u][v] < d[v]) {
        d[v] = m[u][v];
        p[v] = u;
        color[v] = GRAY;
      }
    }
  }

  int sum {0};
  for (int i = 0; i < n; i++) {
    if (p[i] != -1) sum += m[i][p[i]];
  }
  return sum;
}

int main() {
  cin >> n;

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      int e; cin >> e;
      m[i][j] = (e == -1) ? INFTY : e;
    }
  }
  cout << prim() << endl;
}

