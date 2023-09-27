///
// File:  alds1_12_b.cpp
// Author: ymiyamoto
//
// Created on Wed Oct 18 21:59:56 2017
//

#include <cstdint>
#include <iostream>

using namespace std;
#define SIZE 100
static int64_t graph[SIZE][SIZE];
static int64_t costs[SIZE];
static bool visited[SIZE];

static void dikstra(uint32_t n)
{
  costs[0] = 0;

  while (true) {
    int32_t min_index = -1;
    int64_t min_cost = INT32_MAX;

    for (uint32_t i = 0; i < n; i++) {
      if (!visited[i] && costs[i] < min_cost) {
        min_cost = costs[i];
        min_index = i;
      }
    }

    if (min_index == -1) break;

    visited[min_index] = true;

    for (uint32_t i = 0; i < n; i++) {
      if (graph[min_index][i] != -1) {
        if (costs[min_index] + graph[min_index][i] < costs[i]) {
          costs[i] = costs[min_index] + graph[min_index][i];
        }
      }
    }
  }
}

int32_t main()
{
  uint32_t n;
  cin >> n;

  for (uint32_t i = 0; i < n; i++) {
    for (uint32_t j = 0; j < n; j++) {
      graph[i][j] = -1;
    }
    costs[i] = INT32_MAX;
  }

  for (uint32_t i = 0; i < n; i++) {
    uint32_t id, k;
    cin >> id >> k;
    for (uint32_t j = 0; j < k; j++) {
      int64_t v, c;
      cin >> v >> c;
      graph[id][v] = c;
    }
  }

  dikstra(n);

  for (uint32_t i = 0; i < n; i++) {
    cout << i << " " << costs[i] << endl;
  }

  return 0;
}