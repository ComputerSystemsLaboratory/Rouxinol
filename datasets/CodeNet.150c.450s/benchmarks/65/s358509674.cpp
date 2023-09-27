///
// File:  alds1_2_c.cpp
// Author: ymiyamoto
//
// Created on Wed Oct  4 01:32:07 2017
//

#include <cstdint>
#include <iostream>
#include <vector>

using namespace std;
static vector<pair<uint32_t, char>> array1;
static vector<pair<uint32_t, char>> array2;

static void bubble_sort()
{
  for (uint32_t i = 0; i < array1.size(); i++) {
    for (uint32_t j = array1.size() - 1; j > i; j--) {
      if (array1[j - 1].first > array1[j].first) {
        swap(array1[j - 1], array1[j]);
      }
    }
  }
}

static void selection_sort()
{
  for (uint32_t i = 0; i < array2.size(); i++) {
    uint32_t min_index = i;
    uint32_t min_val = array2[i].first;
    for (uint32_t j = i; j < array2.size(); j++) {
      if (array2[j].first < min_val) {
        min_index = j;
        min_val = array2[j].first;
      }
    }
    swap(array2[i], array2[min_index]);
  }
}

int32_t main()
{
  uint32_t N;
  cin >> N;
  for (uint32_t i = 0; i < N; i++) {
    char color;
    uint32_t num;
    cin >> color >> num;
    array1.push_back({num, color});
    array2.push_back({num, color});
  }

  bubble_sort();
  selection_sort();

  for (uint32_t i = 0; i < array1.size(); i++) {
    if (i != 0) cout << " ";
    cout << array1[i].second << array1[i].first;
  }

  cout << endl << "Stable" << endl;

  bool is_stable = true;
  for (uint32_t i = 0; i < array2.size(); i++) {
    if (i != 0) cout << " ";
    cout << array2[i].second << array2[i].first;

    if (array1[i].second != array2[i].second) {
      is_stable = false;
    }
  }

  if (is_stable) {
    cout << endl << "Stable" << endl;
  } else {
    cout << endl << "Not stable" << endl;
  }

  return 0;
}