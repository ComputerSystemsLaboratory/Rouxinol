///
// File:  1160.cpp
// Author: ymiyamoto
//
// Created on Sun Nov 12 16:15:22 2017
//

#include <array>
#include <cstdint>
#include <iostream>

using namespace std;

void dfs(int32_t h, int32_t w, array<array<uint32_t, 50>, 50> &arr, int32_t i, int32_t j)
{
  arr[i][j] = 0;

  for (int32_t l = -1; l <= 1; l++) {
    for (int32_t k = -1; k <= 1; k++) {
      if (0 <= i + l && i + l < h && 0 <= j + k && j + k < w) {
        if (arr[i + l][k + j] == 1) {
          dfs(h, w, arr, i + l, k + j);
        }
      }
    }
  }
}

int32_t main()
{
  while (true) {
    uint32_t w, h;
    cin >> w >> h;
    if (w == 0) break;

    array<array<uint32_t, 50>, 50> arr;
    for (uint32_t i = 0; i < h; i++) {
      for (uint32_t j = 0; j < w; j++) {
        cin >> arr[i][j];
      }
    }

    uint32_t count = 0;
    for (uint32_t i = 0; i < h; i++) {
      for (uint32_t j = 0; j < w; j++) {
        if (arr[i][j] == 1) {
          count++;
          dfs(h, w, arr, i, j);
        }
      }
    }
    cout << count << endl;
  }

  return 0;
}