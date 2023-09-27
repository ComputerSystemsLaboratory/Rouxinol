///
// File:  1192.cpp
// Author: ymiyamoto
//
// Created on Fri Nov 10 08:29:23 2017
//

#include <cstdint>
#include <iostream>

using namespace std;

int32_t main()
{
  while (true) {
    int32_t x, y, s;
    cin >> x >> y >> s;

    if (x == 0) break;
    // a * (100 + x) + b * (100 + x) = s * 100
    // max. a * (100 + x) / 100 + b * (100 + y) / 100
    int32_t max_val = 0;
    for (int32_t a = 1; a < s; a++) {
      for (int32_t b = 1; b < s; b++) {
        if (s == a * (100 + x) / 100 + b * (100 + x) / 100) {
          max_val = max(max_val, (a * (100 + y) / 100) + (b * (100 + y) / 100));
        }
      }
    }
    cout << max_val << endl;
  }

  return 0;
}