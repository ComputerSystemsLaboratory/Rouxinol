///
// File:  1600.cpp
// Author: ymiyamoto
//
// Created on Fri Nov 10 22:43:01 2017
//

#include <algorithm>
#include <cstdint>
#include <iostream>
#include <vector>

using namespace std;

int32_t main()
{
  while (true) {
    uint32_t m, n_min, n_max;
    cin >> m >> n_min >> n_max;
    if (m == 0) break;

    vector<uint32_t> points;
    for (uint32_t i = 0; i < m; i++) {
      uint32_t P;
      cin >> P;
      points.push_back(P);
    }

    uint32_t max_gap = 0;
    uint32_t n = 0;
    for (uint32_t i = n_min; i <= n_max; i++) {
      uint32_t pass_point = points[i - 1];
      uint32_t fail_point = points[i];
      uint32_t gap = pass_point - fail_point;
      if (max_gap <= gap) {
        max_gap = gap;
        n = i;
      }
    }

    cout << n << endl;
  }

  return 0;
}