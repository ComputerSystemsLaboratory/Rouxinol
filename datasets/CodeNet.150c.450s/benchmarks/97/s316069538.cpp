///
// File:  1165.cpp
// Author: ymiyamoto
//
// Created on Mon Nov 13 01:16:40 2017
//

#include <array>
#include <cstdint>
#include <iostream>
#include <vector>

using namespace std;

int32_t main()
{
  while (true) {
    uint32_t N;
    cin >> N;
    if (N == 0) break;

    vector<pair<int32_t, int32_t>> poss;
    poss.push_back({100, 100});
    for (uint32_t i = 1; i < N; i++) {
      int32_t n, d;
      cin >> n >> d;
      pair<int32_t, int32_t> pos = poss[n];
      if (d == 0) {
        poss.push_back({pos.first, pos.second - 1});
      } else if (d == 1) {
        poss.push_back({pos.first + 1, pos.second});
      } else if (d == 2) {
        poss.push_back({pos.first, pos.second + 1});
      } else if (d == 3) {
        poss.push_back({pos.first - 1, pos.second});
      }
    }

    int32_t min_height = INT32_MAX;
    int32_t max_height = 0;
    int32_t min_width = INT32_MAX;
    int32_t max_width = 0;
    for (auto pos = poss.begin(); pos < poss.end(); pos++) {
      min_height = min(min_height, pos->first);
      max_height = max(max_height, pos->first);
      min_width = min(min_width, pos->second);
      max_width = max(max_width, pos->second);
    }
    cout << 1 + max_width - min_width << " " << 1 + max_height - min_height << endl;
  }

  return 0;
}