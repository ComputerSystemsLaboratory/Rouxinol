///
// File:  alds1_11_b.cpp
// Author: ymiyamoto
//
// Created on Wed Oct 18 00:19:44 2017
//

#include <cstdint>
#include <iostream>

using namespace std;

static uint32_t n;
static uint32_t graph[100][100];
static uint32_t count = 0;
static uint32_t d[100];
static uint32_t f[100];

static void dfs(uint32_t index)
{
  count++;
  d[index] = count;
  for (uint32_t i = 0; i < n; i++) {
    if (d[i] == 0 && graph[index][i] == 1) {
      dfs(i);
    }
  }
  count++;
  f[index] = count;
}

int32_t main()
{
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
    if (d[i] == 0) {
      dfs(i);
    }
  }

  for (uint32_t i = 0; i < n; i++) {
    cout << i + 1 << " " << d[i] << " " << f[i] << endl;
  }

  return 0;
}