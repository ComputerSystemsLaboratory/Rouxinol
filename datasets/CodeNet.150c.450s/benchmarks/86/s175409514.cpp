///
// File:  2018.cpp
// Author: ymiyamoto
//
// Created on Fri Nov 10 07:57:38 2017
//

#include <cstdint>
#include <iostream>
#include <vector>

using namespace std;

int32_t main()
{
  while (true) {
    uint32_t N, M, P;
    cin >> N >> M >> P;
    if (N == 0) break;

    vector<uint32_t> nums;
    uint32_t num = 0;
    for (uint32_t i = 0; i < N; i++) {
      uint32_t val;
      cin >> val;
      nums.push_back(val);
      num += val;
    }

    uint32_t total = num * 100 * (100 - P) / 100;
    if (nums[M - 1] == 0) {
      cout << 0;
    } else {
      cout << total / nums[M - 1];
    }
    cout << endl;
  }

  return 0;
}