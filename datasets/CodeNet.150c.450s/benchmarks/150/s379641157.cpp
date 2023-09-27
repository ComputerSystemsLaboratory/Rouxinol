///
// File:  alds1_6_a.cpp
// Author: ymiyamoto
//
// Created on Tue Oct 10 23:31:16 2017
//

#include <cstdint>
#include <iostream>
#include <vector>

using namespace std;

static vector<uint32_t> array;
static vector<uint32_t> nums(2000000, 0);
static vector<uint32_t> out_array;
int32_t main()
{
  uint32_t n;
  cin >> n;

  for (uint32_t i = 0; i < n; i++) {
    uint32_t val;
    cin >> val;
    array.push_back(val);
    nums[val]++;
  }

  for (uint32_t i = 0; i < nums.size() - 1; i++) {
    nums[i + 1] += nums[i];
  }

  out_array.resize(array.size(), 0);
  for (int32_t i = array.size() - 1; i >= 0; i--) {
    out_array[nums[array[i]] - 1] = array[i];
    nums[array[i]]--;
  }

  for (uint32_t i = 0; i < out_array.size(); i++) {
    if (i != 0) cout << " ";
    cout << out_array[i];
  }
  cout << endl;

  return 0;
}