///
// File:  alds1_11_a.cpp
// Author: ymiyamoto
//
// Created on Wed Oct 18 00:12:34 2017
//

#include <cstdint>
#include <iostream>

using namespace std;

static uint32_t graph[100][100];

int32_t main()
{
  uint32_t n;
  cin >> n;

  for (uint32_t i = 0; i < n; i++) {
    uint32_t id, k;
    cin >> id >> k;
    for (uint32_t j = 0; j < k; j++) {
      uint32_t v;
      cin >> v;
      graph[id - 1][v - 1] = 1;
    }
  }

  for (uint32_t i = 0; i < n; i++) {
    for (uint32_t j = 0; j < n; j++) {
      if (j != 0) cout << " ";
      cout << graph[i][j];
    }
    cout << endl;
  }

  return 0;
}