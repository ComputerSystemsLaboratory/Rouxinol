///
// File:  alds1_6_b.cpp
// Author: ymiyamoto
//
// Created on Mon Oct  9 21:27:59 2017
//

#include <cstdint>
#include <iostream>
#include <vector>

using namespace std;
static vector<uint32_t> array;

static uint32_t partition(uint32_t p, uint32_t r)
{
  uint32_t index = 0;
  for (uint32_t i = p; i < r; i++) {
    if (array[i] <= array[r]) {
      swap(array[index], array[i]);
      index++;
    }
  }

  swap(array[index], array[r]);

  return index;
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

  uint32_t index = partition(0, array.size() - 1);
  for (uint32_t i = 0; i < array.size(); i++) {
    if (i != 0) cout << " ";
    if (i == index) {
      cout << "[" << array[i] << "]";
    } else {
      cout << array[i];
    }
  }

  cout << endl;

  return 0;
}