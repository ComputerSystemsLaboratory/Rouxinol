///
// File:  alds1_9_b.cpp
// Author: ymiyamoto
//
// Created on Sun Oct 15 23:11:24 2017
//

#include <cstdint>
#include <iostream>
#include <vector>

using namespace std;

static vector<int64_t> array;

void build_heap(int32_t index)
{
  int32_t left = index * 2;
  int32_t right = index * 2 + 1;

  int64_t max_index = index;
  if (left <= (int32_t)array.size()) {
    if (array[max_index - 1] < array[left - 1]) {
      max_index = left;
    }
  }
  if (right <= (int32_t)array.size()) {
    if (array[max_index - 1] < array[right - 1]) {
      max_index = right;
    }
  }

  if (max_index != index) {
    swap(array[index - 1], array[max_index - 1]);
    build_heap(max_index);
  }
}

void build_max_heap()
{
  for (int32_t i = array.size() / 2; i > 0; i--) {
    build_heap(i);
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

  build_max_heap();

  for (uint32_t i = 0; i < array.size(); i++) {
    cout << " " << array[i];
  }
  cout << endl;

  return 0;
}