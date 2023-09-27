///
// File:  alds1_11_d.cpp
// Author: ymiyamoto
//
// Created on Wed Oct 18 01:18:32 2017
//

#include <cstdint>
#include <iostream>
#include <vector>

using namespace std;

#define SIZE 100000
static vector<uint32_t> graph[SIZE];
static vector<int32_t> colors(SIZE, -1);

static void dfs(uint32_t index, uint32_t color)
{
  colors[index] = color;

  for (uint32_t i = 0; i < graph[index].size(); i++) {
    uint32_t to = graph[index][i];
    if (colors[to] == -1) {
      dfs(to, color);
    }
  }
}

int32_t main()
{
  uint32_t n, m;
  cin >> n >> m;

  for (uint32_t i = 0; i < m; i++) {
    uint32_t from, to;
    cin >> from >> to;
    graph[from].push_back(to);
    graph[to].push_back(from);
  }

  for (uint32_t i = 0; i < n; i++) {
    if (colors[i] == -1) {
      dfs(i, i);
    }
  }

  uint32_t q;
  cin >> q;

  for (uint32_t i = 0; i < q; i++) {
    uint32_t from, to;
    cin >> from >> to;
    if (colors[from] == colors[to]) {
      cout << "yes" << endl;
    } else {
      cout << "no" << endl;
    }
  }

  return 0;
}