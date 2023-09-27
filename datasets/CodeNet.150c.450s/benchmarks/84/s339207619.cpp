///
// File:  alds1_5_d.cpp
// Author: ymiyamoto
//
// Created on Wed Oct 11 00:04:59 2017
//

#include <cstdint>
#include <iostream>
#include <vector>

using namespace std;

static vector<uint64_t> array;

static uint64_t merge(uint32_t left, uint32_t mid, uint32_t right)
{
  vector<uint64_t> lefts, rights;
  for (uint32_t i = left; i <= right; i++) {
    if (i <= mid) {
      lefts.push_back(array[i]);
    } else {
      rights.push_back(array[i]);
    }
  }

  lefts.push_back(UINT64_MAX);
  rights.push_back(UINT64_MAX);
  uint64_t count = 0;

  uint32_t left_index = 0;
  uint32_t right_index = 0;
  for (uint32_t i = left; i <= right; i++) {
    if (lefts[left_index] <= rights[right_index]) {
      array[i] = lefts[left_index];
      left_index++;
    } else {
      array[i] = rights[right_index];
      count += lefts.size() - 1 - left_index;
      right_index++;
    }
  }

  return count;
}

static uint64_t merge_sort(uint32_t left, uint32_t right)
{
  uint64_t count = 0;
  if (left < right) {
    uint32_t mid = (left + right) / 2;
    count += merge_sort(left, mid);
    count += merge_sort(mid + 1, right);
    count += merge(left, mid, right);
  }

  return count;
}

int32_t main()
{
  uint32_t n;
  cin >> n;

  for (uint32_t i = 0; i < n; i++) {
    uint64_t val;
    cin >> val;
    array.push_back(val);
  }

  uint64_t count = merge_sort(0, array.size() - 1);
  cout << count << endl;

  return 0;
}