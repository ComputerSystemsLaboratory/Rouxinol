#include <iostream>


void matrix_multiple(int A[100][100], int B[100][100],
                     int n, int m, int l, long int C[100][100]) {
  for (int i = 0; i < n; i ++) {
    for (int j = 0; j < l; j ++) {
      for (int k = 0; k < m; k ++) {
        C[i][j] += A[i][k] * B[k][j];
      }
    }
  }
}


int main() {
  int n, m, l;
  int A[100][100], B[100][100];
  long int C[100][100] = {0};
  char deli = ' ';

  std::cin >> n >> m >> l;
  for (int i = 0; i < n; i ++) {
    for (int j = 0; j < m; j ++) {
      std::cin >> A[i][j];
    }
  }

  for (int i = 0; i < m; i ++) {
    for (int j = 0; j < l; j ++) {
      std::cin >> B[i][j];
    }
  }

  matrix_multiple(A, B, n, m, l, C);

  for (int i = 0; i < n; i ++) {
    for (int j = 0; j < l - 1; j ++) {
      std::cout << C[i][j] << deli;
    }
    std::cout << C[i][l-1] << std::endl;
  }

  return 0;
}

