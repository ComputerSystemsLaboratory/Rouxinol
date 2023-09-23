#include <iostream>

const int MAX_N = 100;

int main(void) {
  int Adj[MAX_N + 1][MAX_N + 1] = {0};
  
  int n = 0;

  std::cin >> n;

  for (int i = 1; i <= n; i++) {
    int u = 0;
    int k = 0;
    
    std::cin >> u;
    std::cin >> k;

    for (int j = 0; j < k; j++) {
      int v = 0;
      
      std::cin >> v;
      
      Adj[i][v] = 1;
      //      Adj[v][i] = 1;
    }
  }

  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n; j++) {
      std::cout << Adj[i][j];

      if (j < n) {
	std::cout << " ";
      } else {
	std::cout << std::endl;
      }
    }
  }

  return 0;
}