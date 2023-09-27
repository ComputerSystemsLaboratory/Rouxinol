///
// File:  2015.cpp
// Author: ymiyamoto
//
// Created on Sat Dec  2 23:41:55 2017
//

#include <algorithm>
#include <cstdint>
#include <iostream>
#include <vector>

using namespace std;

int32_t main()
{
  while (true) {
    uint32_t N, M;
    cin >> N >> M;
    if (N == 0 && M == 0) break;

    vector<uint64_t> heights;
    heights.push_back(0);
    for (uint32_t i = 1; i <= N; i++) {
      uint32_t h;
      cin >> h;
      h += heights[i - 1];
      heights.push_back(h);
    }

    vector<uint64_t> widths;
    widths.push_back(0);
    for (uint32_t i = 1; i <= M; i++) {
      uint32_t w;
      cin >> w;
      w += widths[i - 1];
      widths.push_back(w);
    }

    vector<uint64_t> hs;
    for (uint32_t i = 0; i < heights.size(); i++) {
      for (uint32_t j = i + 1; j < heights.size(); j++) {
        hs.push_back(heights[j] - heights[i]);
      }
    }

    vector<uint64_t> ws;
    for (uint32_t i = 0; i < widths.size(); i++) {
      for (uint32_t j = i + 1; j < widths.size(); j++) {
        ws.push_back(widths[j] - widths[i]);
      }
    }

    sort(ws.begin(), ws.end());
    uint64_t count = 0;
    for (uint32_t i = 0; i < hs.size(); i++) {
      count += upper_bound(ws.begin(), ws.end(), hs[i]) - lower_bound(ws.begin(), ws.end(), hs[i]);
    }

    cout << count << endl;
  }

  return 0;
}