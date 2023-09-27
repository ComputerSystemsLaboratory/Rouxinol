#include <iostream>

int main() {
  int n;
  int m;
  int l;
  std::cin >> n >> m >> l;

  long int *a = new long int[n * m];
  long int *b = new long int[m * l];
  long int *c = new long int[n * l];

  for(int i = 0; i < n; ++i) {
    for(int j = 0; j < m; ++j) {
      std::cin >> a[i * m + j];
    }
  }
  for(int i = 0; i < m; ++i) {
    for(int j = 0; j < l; ++j) {
      std::cin >> b[i * l + j];
    }
  }
  for(int i = 0; i < n; ++i) {
    for(int j = 0; j < l; ++j) {
      c[i * l + j] = 0;
    }
  }

  for(int i = 0; i < n; ++i) {
    for(int j = 0; j < m; ++j) {
      for(int k = 0; k < l; ++k) {
        c[i * l + k] += a[i * m + j] * b[j * l + k];
      }
    }
  }

  for(int i = 0; i < n; ++i) {
    for(int j = 0; j < l; ++j) {
      if(j == l - 1) {
        std::cout << c[i * l + j] << std::endl;
      }
      else {
        std::cout << c[i * l + j] << " ";
      }
    }
  }

  delete[] a;
  delete[] b;
  delete[] c;

  return 0;
}