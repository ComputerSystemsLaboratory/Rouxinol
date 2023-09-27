///
// File:  0008.cpp
// Author: ymiyamoto
//
// Created on Wed Nov  8 22:24:12 2017
//

#include <cstdint>
#include <iostream>

using namespace std;

int32_t main()
{
  while (true) {
    uint32_t n;
    cin >> n;
    if (cin.eof()) break;
    uint32_t count = 0;
    for (uint32_t a = 0; a < 10; a++) {
      for (uint32_t b = 0; b < 10; b++) {
        for (uint32_t c = 0; c < 10; c++) {
          for (uint32_t d = 0; d < 10; d++) {
            if (a + b + c + d == n) {
              count++;
            }
          }
        }
      }
    }
    cout << count << endl;
  }

  return 0;
}