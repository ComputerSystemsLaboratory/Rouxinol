///
// File:  alds1_9_a.cpp
// Author: ymiyamoto
//
// Created on Sun Oct 15 22:39:25 2017
//

#include <cstdint>
#include <iostream>
#include <vector>

using namespace std;

#define NIL INT64_MAX

static vector<int64_t> array;

int64_t parent(uint32_t index)
{
  if (index == 1) return NIL;

  return array[index / 2 - 1];
}

int64_t left(uint32_t index)
{
  int32_t left_key = index * 2;
  if (left_key - 1 < (int32_t)array.size()) {
    return array[left_key - 1];
  } else {
    return NIL;
  }
}

int64_t right(uint32_t index)
{
  int32_t right_key = index * 2 + 1;
  if (right_key - 1 < (int32_t)array.size()) {
    return array[right_key - 1];
  } else {
    return NIL;
  }
}

int32_t main()
{
  uint32_t n;
  cin >> n;

  for (uint32_t i = 0; i < n; i++) {
    int64_t val;
    cin >> val;
    array.push_back(val);
  }

  for (uint32_t i = 1; i <= array.size(); i++) {
    cout << "node " << i << ": key = " << array[i - 1] << ", ";
    if (parent(i) != NIL) {
      cout << "parent key = " << parent(i) << ", ";
    }
    if (left(i) != NIL) {
      cout << "left key = " << left(i) << ", ";
    }
    if (right(i) != NIL) {
      cout << "right key = " << right(i) << ", ";
    }
    cout << endl;
  }

  return 0;
}