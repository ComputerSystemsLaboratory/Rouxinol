///
// File:  alds1_4_d.cpp
// Author: ymiyamoto
//
// Created on Sat Oct  7 23:43:34 2017
//

#include <cstdint>
#include <iostream>
#include <vector>

using namespace std;

static vector<int64_t> array;

uint32_t packages(int64_t tracks, uint64_t P)
{
  size_t num = 0, weight = 0;
  for (uint32_t i = 0; i < tracks && num < array.size(); i++) {
    while (array[num] + weight <= P) {
      weight += array[num];
      num++;
      if (num == array.size()) return num;
    }
    weight = 0;
  }

  return num;
}

uint32_t binary_search(uint32_t k)
{
  uint64_t left = 0;
  uint64_t right = 100000 * 10000 + 1;
  while (left + 1 < right) {
    uint64_t mid = (left + right) / 2;
    uint32_t num = packages(k, mid);
    if (num >= array.size()) {
      right = mid;
    } else {
      left = mid;
    }
  }

  return right;
}

int32_t main()
{
  uint32_t n, k;
  cin >> n >> k;

  for (uint32_t i = 0; i < n; i++) {
    int64_t w;
    cin >> w;
    array.push_back(w);
  }

  cout << binary_search(k) << endl;

  return 0;
}