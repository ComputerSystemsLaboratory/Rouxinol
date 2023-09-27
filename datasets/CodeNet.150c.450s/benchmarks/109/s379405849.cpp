///
// File:  2013.cpp
// Author: ymiyamoto
//
// Created on Sun Nov 19 01:11:43 2017
//

#include <array>
#include <cstdint>
#include <iostream>

using namespace std;

int32_t main()
{
  while (true) {
    uint32_t n;
    cin >> n;
    if (n == 0) break;

    array<int32_t, 24 * 60 * 60> arr{0};
    for (uint32_t _ = 0; _ < n; _++) {
      uint32_t h, m, s;
      char __;
      cin >> h >> __ >> m >> __ >> s;
      arr[60 * 60 * h + m * 60 + s]++;
      cin >> h >> __ >> m >> __ >> s;
      arr[60 * 60 * h + m * 60 + s]--;
    }

    int32_t max_val = arr[0];
    for (uint32_t i = 0; i < arr.size() - 1; i++) {
      arr[i + 1] += arr[i];
      max_val = max(max_val, arr[i + 1]);
    }
    cout << max_val << endl;
  }
  return 0;
}