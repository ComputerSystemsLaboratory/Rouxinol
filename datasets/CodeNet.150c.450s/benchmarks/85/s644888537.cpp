// -*- mode:c++; coding:utf-8; c-basic-offset:2; -*-
// ALDS1_10_B: Matrix Chain Multiplication

#include <algorithm>
#include <climits>
#include <cstdio>

using uint = unsigned int;

static uint matrix_chain_multiplication(const uint p[], const uint n)
{
  uint m[n][n];
  for (auto i = 0u; i < n; ++i) m[i][i] = 0u;

  for (auto d = 1u; d < n; ++d) {
    for (auto i = 0u, j = i+d; j < n; ++i, ++j) {
      auto min = UINT_MAX;
      for (auto k = i; k < j; ++k) {
        // min(Mi..j = (Mi..k) * (Mk+1..j)
        //           = (Mi..k) + (Mk+1..j) + p[i]*p[k+1]*p[j+1])
        auto cost = m[i][k] + m[k+1][j] + p[i]*p[k+1]*p[j+1];
        min = std::min(min, cost);
      }
      m[i][j] = min;
    }
  }
  return m[0][n-1];
}

int main()
{
  uint n;
  std::scanf("%u", &n);
  uint p[n+1];
  for (auto i = 0u; i < n; ++i) {
    std::scanf("%u %u", &p[i], &p[i+1]);
  }
  auto c = matrix_chain_multiplication(p, n);
  std::printf("%u\n", c);
}

// eof