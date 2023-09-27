///
// File:  2197.cpp
// Author: ymiyamoto
//
// Created on Fri Nov 10 06:14:48 2017
//

#include <cstdint>
#include <iostream>

using namespace std;

int32_t main()
{
  while (true) {
    uint32_t N;
    cin >> N;
    if (N == 0) break;
    uint32_t count = 0;
    for (uint32_t i = 1; i < N; i++) {
      uint32_t cur = i;
      uint32_t num = cur;
      do {
        cur++;
        num += cur;
      } while (num < N);
      if (num == N) {
        count++;
      }
    }
    cout << count << endl;
  }

  return 0;
}