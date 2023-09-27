///
// File:  dpl_1_d.cpp
// Author: ymiyamoto
//
// Created on Thu Nov  2 08:05:56 2017
//

#include <algorithm>
#include <cstdint>
#include <iostream>
#include <vector>

using namespace std;

static vector<uint32_t> arr;
static vector<uint32_t> l;

int32_t main()
{
  uint32_t n;
  cin >> n;

  for (uint32_t i = 0; i < n; i++) {
    uint32_t val;
    cin >> val;
    arr.push_back(val);
  }

  l.push_back(arr[0]);
  for (uint32_t i = 1; i < arr.size(); i++) {
    if (l[l.size() - 1] < arr[i]) {
      l.push_back(arr[i]);
    } else {
      uint32_t at = lower_bound(l.begin(), l.end(), arr[i]) - l.begin();
      l[at] = arr[i];
    }
    // for (uint32_t i = 0; i < l.size(); i++) {
    //   cout << l[i] << " ";
    // }
    // cout << endl;
  }

  cout << l.size() << endl;

  return 0;
}