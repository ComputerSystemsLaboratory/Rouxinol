#include <iostream>

#define rep(i, n) for (int i = 0; i < (int)(n); ++i)

int main() {
  int n;
  std::cin >> n;
  int p[n + 1];
  for (int i = 1; i <= n; ++i) { std::cin >> p[i - 1] >> p[i]; }

  int c[n + 1][n + 1];
  for (int i = 1; i <= n; ++i) c[i][i] = 0;

  for (int l = 2; l <= n; ++l) {
    for (int i = 1; i <= n - l + 1; ++i) {
      int j = i + l - 1;
      c[i][j] = 1 << 21;
      for (int k = i; k < j; ++k) {
        c[i][j] =
            std::min(c[i][j], c[i][k] + c[k + 1][j] + p[i - 1] * p[k] * p[j]);
      }
    }
  }

  std::cout << c[1][n] << '\n';
  return 0;
}

