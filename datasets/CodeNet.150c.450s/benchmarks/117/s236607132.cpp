///
// File:  alds1_5_b.cpp
// Author: ymiyamoto
//
// Created on Mon Oct  9 14:25:31 2017
//

#include <cstdint>
#include <iostream>
#include <vector>

using namespace std;

static vector<uint32_t> array;

static uint32_t merge(uint32_t left, uint32_t mid, uint32_t right)
{
  vector<uint32_t> lefts;
  vector<uint32_t> rights;
  for (uint32_t i = left; i < right; i++) {
    if (i < mid) {
      lefts.push_back(array[i]);
    } else {
      rights.push_back(array[i]);
    }
  }

  lefts.push_back(INT32_MAX);
  rights.push_back(INT32_MAX);

  uint32_t count = 0;
  uint32_t left_index = 0, right_index = 0;
  for (uint32_t i = left; i < right; i++) {
    count++;
    if (lefts[left_index] < rights[right_index]) {
      array[i] = lefts[left_index];
      left_index++;
    } else {
      array[i] = rights[right_index];
      right_index++;
    }
  }

  return count;
}

static uint32_t merge_sort(uint32_t left, uint32_t right)
{
  uint32_t count = 0;
  if (left + 1 < right) {
    uint32_t mid = (left + right) / 2;
    count += merge_sort(left, mid);
    count += merge_sort(mid, right);
    count += merge(left, mid, right);
  }

  return count;
}

int32_t main()
{
  uint32_t n;
  cin >> n;

  for (uint32_t i = 0; i < n; i++) {
    uint32_t val;
    cin >> val;
    array.push_back(val);
  }

  uint32_t count = merge_sort(0, array.size());

  for (uint32_t i = 0; i < array.size(); i++) {
    if (i != 0) cout << " ";
    cout << array[i];
  }
  cout << endl << count << endl;

  return 0;
}