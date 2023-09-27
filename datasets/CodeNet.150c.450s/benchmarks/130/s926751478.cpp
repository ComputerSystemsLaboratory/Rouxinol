#include <bits/stdc++.h>

int main() {

  int A[128][128];
  int n, m;
  int V[128];
  int temp;

  std::cin >> n >> m;
  for(int i = 0; i < n; ++i) {
    for(int j = 0; j < m; ++j) {
      std::cin >> A[i][j];
    }
  }

  for(int i = 0; i < m; ++i) {
    std::cin >> V[i];
  }

  for(int i = 0; i < n; ++i) {
    temp = 0;
    for(int j = 0; j < m; ++j) {
      temp += A[i][j] * V[j];
    }
    std::cout << temp << std::endl;
  }
  
  return 0;
}