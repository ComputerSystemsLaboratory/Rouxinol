#include <bits/stdc++.h>

int main() {

  int A[128][128];
  int r, c;
  int temp;

  std::cin >> r >> c;
  for(int i = 0; i < r; ++i) {
    for(int j = 0; j < c; ++j) {
      std::cin >> A[i][j];
    }
  }

  for(int i = 0; i < r; ++i) {
    temp = 0;
    for(int j = 0; j < c; ++j) {
      temp += A[i][j];
    }
    A[i][c] = temp;
  }

  for(int i = 0; i <= c; ++i) {
    temp = 0;
    for(int j = 0; j < r; ++j) {
      temp += A[j][i];
    }
    A[r][i] = temp;
  }

  for(int i = 0; i <= r; ++i) {
    for(int j = 0; j < c; ++j) {
      std::cout << A[i][j] << " ";
    }
    std::cout << A[i][c] << std::endl;
  }
  
  return 0;
}