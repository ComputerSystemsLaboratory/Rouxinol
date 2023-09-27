#include <iostream>
static const int WHITE = 0;
static const int GRAY = 1;
static const int BLACK = 2;
static const int MAX = 2000;

int d[110], p[110];
int color[110];

int main() {
  int n;
  std::cin >> n;
  int G[110][110];

  for(int i=0; i<n; ++i) {
    for(int j=0; j<n; ++j) {
      int v;
      std::cin >> v;
      if(v != -1) {
        G[i][j] = v;
      } else {
        G[i][j] = MAX;
      }
    }
  }

  for(int i=0; i<n; ++i) {
    color[i] = WHITE;
    d[i] = MAX;
  }

  d[0] = 0;
  p[0] = 0;

  while(true) {
    int mini_cost = MAX;
    int u;
    // 最小の重みとなる辺を探している
    for(int i=0; i<n; ++i) {
      if(color[i] != BLACK && d[i] < mini_cost) {
        mini_cost = d[i];
        u = i;
      }
    }

    if(mini_cost == MAX) {
      break;
    }

    color[u] = BLACK;

    for(int v=0; v < n; ++v) {
      if(color[v] != BLACK && G[u][v] != MAX) {
        if(G[u][v] < d[v]) {
          d[v] = G[u][v];
          p[v] = u;
          color[v] = GRAY;
        }
      }
    }
  }

  int d_sum = 0;
  for(int i=0; i<n; ++i) {
    d_sum += d[i];
  } 

  std::cout << d_sum << std::endl;
}
