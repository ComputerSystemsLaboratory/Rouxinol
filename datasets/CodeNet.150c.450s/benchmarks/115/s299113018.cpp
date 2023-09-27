// -*- mode:c++; coding:utf-8; c-basic-offset:2; -*-
// ALDS1_10_C: Longest Common Subsequence

#include <algorithm>
#include <cstdio>
#include <cstring>

static unsigned int lcs(const char* x, const char* y)
{
  auto m = static_cast<int>(std::strlen(x));
  auto n = static_cast<int>(std::strlen(y));
  unsigned int c[m+1][n+1]; // extend -1

  for (auto i = 0; i < m+1; ++i) c[i][0] = 0u;
  for (auto j = 1; j < n+1; ++j) c[0][j] = 0u;

  for (auto i = 0; i < m; ++i) {
    for (auto j = 0; j < n; ++j) {
      c[i+1][j+1] = (x[i] == y[j])
        ? c[i][j] + 1
        : std::max(c[i+1][j], c[i][j+1]);
    }
  }
  return c[m][n];
}

int main()
{
  unsigned int q;
  std::scanf("%u", &q);
  const unsigned int MAX_LEN = 1000;
  char x[MAX_LEN+1], y[MAX_LEN+1];
  for (auto i = 0u; i < q; ++i) {
    std::scanf("%1000s", x);
    std::scanf("%1000s", y);
    auto l = lcs(x, y);
    std::printf("%u\n", l);
  }
}

// eof