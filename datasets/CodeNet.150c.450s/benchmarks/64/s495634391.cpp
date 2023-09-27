// -*- mode:c++; coding:utf-8; c-basic-offset:2; -*-
// ALDS1_5-A: Exhaustive Search

#include <cstdio>
#include <numeric>

static bool solve(const int m, const int as[], const unsigned int n)
{
  if (m == 0) {
    return true;
  } else if (n == 0 || m < 0 || m > std::accumulate(as, as+n, 0)) {
    return false;
  } else {
    return solve(m-as[0], as+1, n-1) || solve(m, as+1, n-1);
  }
}

int main()
{
  unsigned int n;
  std::scanf("%d", &n);
  int as[n];
  for (auto i = 0u; i < n; ++i) {
    std::scanf("%d", &as[i]);
  }

  unsigned int q;
  std::scanf("%d", &q);
  for (auto i = 0u; i < q; ++i) {
    int m;
    std::scanf("%d", &m);
    auto is_solved = solve(m, as, n);
    std::printf("%s\n", is_solved ? "yes" : "no");
  }
}

// eof