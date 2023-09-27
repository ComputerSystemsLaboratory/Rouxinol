#include <iostream>
static const int INFTY = (1<<20);
static const int MAX = 100;
static const int WHITE = 0;
static const int BLACK = 1;

int main() {
  int n;
  int M[110][110];
  int d[110];
  int visited[110];
  std::cin >> n;
  for(int i=0; i<n; ++i) {
    for(int j=0; j<n; ++j) {
      M[i][j] = INFTY;
    }
  }

  for(int i=0; i<n; ++i) {
    d[i] = INFTY;
    visited[i] = WHITE;
  }

  for(int i=0; i<n; ++i) {
    int u, k;
    std::cin >> u >> k;
    for(int j=0; j<k; ++j) {
      int c, v;
      std::cin >> v >> c;
      M[u][v] = c;
    }
  }

  d[0] = 0;

  while(true) {
    int minicost = INFTY;
    int u;

    for(int i=0; i<n; ++i) {
      if(visited[i] == WHITE && d[i] < minicost) {
        minicost = d[i];
        u = i;
      }
    }

    if(minicost == INFTY) break;
    visited[u] = BLACK;

    for(int v=0; v<n; ++v) {
      if(d[u] + M[u][v] < d[v]) {
        d[v] = d[u] + M[u][v];
      }
    }
  }

  for(int i=0; i<n; ++i) {
    std::cout << i << " " << d[i] << std::endl;
  }


}
