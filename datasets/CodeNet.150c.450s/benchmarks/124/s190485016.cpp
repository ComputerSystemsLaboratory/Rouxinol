#include <iostream>
#define MAX 100100
#define WHITE 0
#define BLACK 1

int main() {
  int n;
  std::cin >> n;
  int d[110];
  int color[110];

  int G[110][110];
  for(int i=0; i<n; ++i) {
    for(int j=0; j<n; ++j) G[i][j] = MAX;
  }

  for(int i=0; i<n; ++i) {
    d[i] = MAX;
    color[i] = WHITE;
  }

  for(int i=0; i<n; ++i) {
    int u, k;
    std::cin >> u >> k;
    for(int j=0; j<k; ++j) {
      int to, w;
      std::cin >> to >> w;
      G[u][to] = w;
    }
  }

  d[0] = 0;

  // colorも変更する?

  while(true) {
    int u;
    int minicost = MAX;

    // d[s]が最小になる点を選ぶ
    for(int i=0; i<n; ++i) {
      if(d[i] < minicost && color[i] != BLACK) {
        minicost = d[i];
        u = i;
      }
    }

    if(minicost == MAX) break;
    color[u] = BLACK;

    for(int v=0; v<n; ++v) {
      if(d[u] + G[u][v] < d[v]) {
        d[v] = d[u] + G[u][v];
        //p[u] = u;
      }
    }
  }

  for(int i=0; i<n; ++i) {
    std::cout << i << " " << d[i] << std::endl;
  }
}
