#include <cstdint>
#include <cstdio>
#include <iostream>

using namespace std;

int main() {
  int n, m, l;
  int64_t A[100][100] = {0};                                                                                                                                              
  int64_t B[100][100] = {0};                                                                                                                                              

  cin >> n >> m >> l;

  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < m; ++j)
      cin >> A[i][j];
  }

  for (int i = 0; i < m; ++i) {
    for (int j = 0; j < l; ++j)
      cin >> B[i][j];
  }

  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < l; ++j) {
      int64_t c = 0;
      for (int k = 0; k < m; ++k)
        c += A[i][k] * B[k][j];

      if (j > 0)
        printf(" ");
      printf("%lld", c);
    }
    printf("\n");
  }

  return 0;
}