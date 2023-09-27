// -*- mode:c++; coding:utf-8; indent-tabs-mode:nil; -*-

#include <algorithm>
#include <iostream>

int max_profit(int const rs[], const unsigned int n) {
  int r0 = rs[0];
  int r1 = rs[1];
  int cur_p = r1 - r0;
  int max_p = cur_p;
  int min_r =  std::min(r0, r1);

  for (unsigned int i = 2; i < n; ++i) {
    const int r = rs[i];
    cur_p = r - min_r;
    max_p = std::max(max_p, cur_p);
    min_r = std::min(min_r, r);
  }

  return max_p;
}

int main(void) {
  unsigned int n;
  std::cin >> n;
  int* rp = new int[n];
  for (unsigned int i = 0; i < n; ++i) {
    std::cin >> rp[i];
  }

  const int max_p = max_profit(rp, n);
  std::cout << max_p << std::endl;

  delete rp;
  return 0;
}
// end