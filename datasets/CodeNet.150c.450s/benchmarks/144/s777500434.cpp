#include <cstdio>
#include <iostream>

using namespace std;

int main() {
  int n, m, l;
  cin >> n >> m >> l;

  long a[101][101], b[101][101];
  long c[101][101] = {0};

  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < m; ++j) {
      cin >> a[i][j];
    }
  }
  for (int i = 0; i < m; ++i) {
    for (int j = 0; j < l; ++j) {
      cin >> b[i][j];
    }
  }

  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < l; ++j) {
      for (int k = 0; k < m; ++k) {
        c[i][j] += a[i][k] * b[k][j];
      }
    }
  }

  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < l; ++j) {
      if (j > 0) printf(" ");
      printf("%ld", c[i][j]);
    }
    printf("\n");
  }
  return 0;
}