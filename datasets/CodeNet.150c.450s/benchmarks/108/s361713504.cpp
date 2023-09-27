///
// File:  alds1_11_c.cpp
// Author: ymiyamoto
//
// Created on Wed Oct 18 00:49:05 2017
//

#include <cstdint>
#include <iostream>
#include <queue>
#include <vector>

using namespace std;
static uint32_t graph[100][100];
static vector<int32_t> d(100, -1);
static queue<uint32_t> q;

static void bfs(uint32_t n)
{
  q.push(0);
  d[0] = 0;

  while (!q.empty()) {
    uint32_t index = q.front();
    q.pop();

    for (uint32_t i = 0; i < n; i++) {
      if (d[i] == -1 && graph[index][i] == 1) {
        q.push(i);
        d[i] = d[index] + 1;
      }
    }
  }
}

int32_t main()
{
  uint32_t n;
  cin >> n;

  for (uint32_t i = 0; i < n; i++) {
    uint32_t id, k;
    cin >> id >> k;
    for (uint32_t j = 0; j < k; j++) {
      uint32_t val;
      cin >> val;
      graph[id - 1][val - 1] = 1;
    }
  }

  bfs(n);

  for (uint32_t i = 0; i < n; i++) {
    cout << i + 1 << " " << d[i] << endl;
  }

  return 0;
}