///
// File:  1608.cpp
// Author: ymiyamoto
//
// Created on Fri Nov 10 22:59:44 2017
//

#include <algorithm>
#include <cstdint>
#include <iostream>
#include <vector>

using namespace std;

int32_t main()
{
  while (true) {
    uint32_t n;
    cin >> n;
    if (n == 0) break;

    vector<uint32_t> points;
    for (uint32_t i = 0; i < n; i++) {
      uint32_t val;
      cin >> val;
      points.push_back(val);
    }

    sort(points.begin(), points.end());

    uint32_t min_diff = UINT32_MAX;
    for (uint32_t i = 0; i < points.size() - 1; i++) {
      uint32_t diff = points[i + 1] - points[i];
      min_diff = min(min_diff, diff);
    }

    cout << min_diff << endl;
  }
  return 0;
}