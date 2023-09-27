#include <iostream>

int main() {
  long n, m, l, nm[100][100], ml[100][100], c[100][100] = {};
  std::cin >> n >> m >> l;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      std::cin >> nm[i][j];
    }
  }
  for (int i = 0; i < m; i++) {
    for (int j = 0; j < l; j++) {
      std::cin >> ml[i][j];
    }
  }
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      for (int k = 0; k < l; k++) {
        c[i][k] += nm[i][j] * ml[j][k];
      }
    }
  }
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < l; j++) {
      std::cout << (j == 0 ? "" : " ") << c[i][j];
    }
    std::cout << "\n";
  }
  return 0;
}

