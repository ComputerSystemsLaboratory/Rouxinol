#include <iostream>

int main() {
  int n;
  int m;

  std::cin >> n >> m;

  int *a = new int[n * m];
  int *b = new int[m];

  for(int i = 0; i < n; ++i) {
    for(int j = 0; j < m; ++j) {
      std::cin >> a[i * m + j];
    }
  }
  for(int i = 0; i < m; ++i) {
    std::cin >> b[i];
  }

  int *c = new int[n];
  for(int i = 0; i < n; ++i) {
    c[i] = 0;
    for(int j = 0; j < m; ++j) {
      c[i] += a[i * m + j] * b[j];
    }
    std::cout << c[i] << std::endl;
  }

  delete[] a;
  delete[] b;
  delete[] c;

  return 0;
}