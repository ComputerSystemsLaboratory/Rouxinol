///
// File:  alds1_12_a.cpp
// Author: ymiyamoto
//
// Created on Wed Oct 18 01:40:49 2017
//

#include <cstdint>
#include <iostream>
#include <queue>
#include <vector>

using namespace std;

#define SIZE 100
struct route_t {
  int64_t weight;
  uint32_t index;

  bool operator<(const route_t w) const
  {
    return weight > w.weight;
  }
};

static int32_t graph[SIZE][SIZE];
static bool visited[SIZE];
static priority_queue<route_t> q;

static uint64_t prim(uint32_t n)
{
  uint64_t total = 0;
  q.push({0, 0});
  while (!q.empty()) {
    route_t r = q.top();
    q.pop();

    if (!visited[r.index]) {
      total += r.weight;
      for (uint32_t i = 0; i < n; i++) {
        if (graph[r.index][i] != -1) {
          q.push({graph[r.index][i], i});
        }
      }
      visited[r.index] = true;
    }
  }
  return total;
}

int32_t main()
{
  uint32_t n;
  cin >> n;
  for (uint32_t i = 0; i < n; i++) {
    for (uint32_t j = 0; j < n; j++) {
      cin >> graph[i][j];
    }
  }

  cout << prim(n) << endl;

  return 0;
}