// -*- mode:c++; coding:utf-8; c-basic-offset:2; -*-
// ALDS1_1-D: Maximum Profit

#include <algorithm>
#include <iostream>

static int max_profit(int const rs[], const unsigned int n)
{
  auto r0 = rs[0], r1 = rs[1];

  auto cur_p = r1 - r0;
  auto max_p = cur_p;
  auto min_r = std::min(r0, r1);

  for (auto i = 2u; i < n; ++i) {
    const auto r = rs[i];
    cur_p = r - min_r;
    max_p = std::max(max_p, cur_p);
    min_r = std::min(min_r, r);
  }

  return max_p;
}

int main()
{
  unsigned int n;
  std::cin >> n;
  int rs[n];
  for (unsigned int i = 0; i < n; ++i) {
    std::cin >> rs[i];
  }

  const int max_p = max_profit(rs, n);
  std::cout << max_p << std::endl;
}

// eof