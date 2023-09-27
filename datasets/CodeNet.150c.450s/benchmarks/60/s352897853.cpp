// -*- mode:c++; coding:utf-8; c-basic-offset:2; -*-
// ALDS1_11_A: Graph

#include <cstdio>
#include <cstring>

int main()
{
  unsigned int n;
  std::scanf("%u", &n);

  int g[n][n];
  std::memset(g, 0, sizeof(g));

  unsigned int u, k, v;
  for (auto i = 0u; i < n; ++i) {
    std::scanf("%u %u", &u, &k);
    for (auto j = 0u; j < k; ++j) {
      std::scanf("%u", &v);
      g[u-1][v-1] = 1;
    }
  }

  for (auto i = 0u; i < n; ++i) {
    const char* sep = "";
    for (auto j = 0u; j < n; ++j) {
      std::printf("%s%d", sep, g[i][j]);
      sep = " ";
    }
    std::printf("\n");
  }
}

// eof