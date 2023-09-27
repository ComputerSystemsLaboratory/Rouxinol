#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>
// N 为邻接矩阵的大小
#define N 101
#define WHITE 0
#define GRAY 1
#define BLACK 2
#define INFTY 1 << 21

using namespace std;

int color[N], d[N], p[N], M[N][N];

void dijkstra (int s, int n) {
  for (int i = 0; i < n; i++) {
    color[i] = WHITE;
    d[i] = INFTY;
  }

  d[s] = 0;
  p[s] = -1;

  while (1) {
    int mincost = INFTY, u;

    for (int i = 0; i < n; i++) {
      if (color[i] != BLACK && d[i] < mincost) {
        mincost = d[i];
        u = i;
      }
    }

    if (mincost == INFTY)
      break;

    color[u] = BLACK;
    
    for (int v = 0; v < n; v++) {
      if (color[v] != BLACK && M[u][v] >= 0 && M[u][v] < INFTY) {

        if (d[u] + M[u][v] < d[v]) {
          d[v] = d[u] + M[u][v];
          p[v] = u;
          color[v] = GRAY;
        }        
      }
    }
  }
}

int main () {
  int n, u, v, degree, cost;
  
  cin >> n;

  for (int i = 0; i < n; i++)
    for (int j = 0; j < n; j++)
      M[i][j] = INFTY;

  for (int i = 0; i < n; i++) {
    cin >> u >> degree;
    
    for (int j = 0; j < degree; j++) {
      cin >> v >> cost;

      M[u][v] = cost;
    }
  }

  dijkstra(0, n);

  for (int i = 0; i < n; i++)
    cout << i << " " << d[i] << endl;

  return 0;
}
