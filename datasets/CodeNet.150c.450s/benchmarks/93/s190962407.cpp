///
// File:  alds1_6_c.cpp
// Author: ymiyamoto
//
// Created on Mon Oct  9 21:48:05 2017
//

#include <cstdint>
#include <iostream>
#include <vector>

using namespace std;

static vector<pair<char, uint32_t>> array;
static vector<pair<char, uint32_t>> array1;

static void merge(int32_t left, int32_t mid, int32_t right)
{
  vector<pair<char, uint32_t>> lefts;
  vector<pair<char, uint32_t>> rights;

  for (int32_t i = left; i < right; i++) {
    if (i < mid) {
      lefts.push_back(array1[i]);
    } else {
      rights.push_back(array1[i]);
    }
  }

  lefts.push_back({'-', UINT32_MAX});
  rights.push_back({'-', UINT32_MAX});

  uint32_t left_index = 0, right_index = 0;
  for (int32_t i = left; i < right; i++) {
    if (lefts[left_index].second <= rights[right_index].second) {
      array1[i] = lefts[left_index];
      left_index++;
    } else {
      array1[i] = rights[right_index];
      right_index++;
    }
  }
}

static void merge_sort(uint32_t left, uint32_t right)
{
  if (left + 1 < right) {
    uint32_t mid = (left + right) / 2;
    merge_sort(left, mid);
    merge_sort(mid, right);
    merge(left, mid, right);
  }
}

static uint32_t partition(int32_t left, int32_t right)
{
  uint32_t index = left;
  for (int32_t i = left; i < right; i++) {
    if (array[i].second <= array[right].second) {
      swap(array[i], array[index]);
      index++;
    }
  }

  swap(array[index], array[right]);

  return index;
}

static void quick_sort(int32_t left, int32_t right)
{
  if (left < right) {
    int32_t mid = partition(left, right);
    quick_sort(left, mid - 1);
    quick_sort(mid + 1, right);
  }
}

int32_t main()
{
  uint32_t n;
  cin >> n;

  for (uint32_t i = 0; i < n; i++) {
    char c;
    uint32_t val;
    cin >> c >> val;
    array.push_back({c, val});
    array1.push_back({c, val});
  }

  merge_sort(0, array.size());
  quick_sort(0, array.size() - 1);

  bool stable = true;
  for (uint32_t i = 0; i < array.size(); i++) {
    if (array[i].first != array1[i].first) {
      stable = false;
    }
  }

  if (stable) {
    cout << "Stable" << endl;
  } else {
    cout << "Not stable" << endl;
  }

  for (uint32_t i = 0; i < array.size(); i++) {
    cout << array[i].first << " " << array[i].second << endl;
  }

  return 0;
}