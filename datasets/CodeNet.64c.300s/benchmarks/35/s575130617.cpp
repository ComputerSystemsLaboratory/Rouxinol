#include <iostream>

int main() {
  int n;
  int G[110][110];
  std::cin >> n;

  for(int i=0; i<n; ++i) {
    for(int j=0; j<n; ++j) G[i][j] = 0;
  }

  for(int i=0; i<n; ++i) {
    int u, k;
    std::cin >> u >> k;
    u--;
    for(int j=0; j<k; ++j) {
      int v;
      std::cin >> v;
      v--;
      G[u][v] = 1;
    }
  }

  for(int i=0; i<n; ++i) {
    for(int j=0; j<n; ++j) {
      if(j != n-1) std::cout << G[i][j] << " ";
      else std::cout << G[i][j];
    }
    std::cout << std::endl;
  }
}
