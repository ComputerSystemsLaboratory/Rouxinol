#include <bits/stdc++.h>

int main() {

  long n, m, l;
  long A[128][128];
  long B[128][128];
  long C[128][128];
  long temp;

  std::cin >> n >> m >> l;

  for(int i = 0; i < n; ++i) {
    for(int j = 0; j < m; ++j) {
      std::cin >> A[i][j];
    }
  }

  for(int i = 0; i < m; ++i) {
    for(int j = 0; j < l; ++j) {
      std::cin >> B[j][i];
    }
  }

  for(int i = 0; i < n; ++i) {
    for(int j = 0; j < l; ++j) {
      temp = 0;
      for(int k = 0; k < m; ++k) {
	temp += A[i][k] * B[j][k];
      }
      C[i][j] = temp;
    }
  }

  for(int i = 0; i < n; ++i) {
    for(int j = 0; j < l-1; ++j) {
      std::cout << C[i][j] << " ";
    }
    std::cout << C[i][l-1] << std::endl;
  }
  
  
  return 0;
}