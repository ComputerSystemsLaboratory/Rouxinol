#include <bits/stdc++.h>

bool c[128][128];

int main(void) {

  int n;
  int u;
  int k;
  int v;

  std::cin >> n;
  for(int i = 1; i <= n; ++i) {
    std::cin >> u >> k;
    for(int j = 1; j <= k; ++j) {
      std::cin >> v;
      c[u][v] = true;
    }
  }

  for(int i = 1; i <= n; ++i) {
    for(int j = 1; j <= n-1; ++j) {
      if( c[i][j] ) {
        std::cout << "1 ";
      }
      else {
        std::cout << "0 ";
      }
    }
    if( c[i][n] ) {
      std::cout << "1" << std::endl;
    }
    else {
      std::cout << "0" << std::endl;
    }
  }

  return 0;
}