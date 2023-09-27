///
// File:  grl_1_c.cpp
// Author: ymiyamoto
//
// Created on Thu Oct 19 23:14:36 2017
//

#include <cstdint>
#include <iostream>

using namespace std;

#define SIZE 100
#define INF INT32_MAX

static int64_t graph[SIZE][SIZE];

int32_t main()
{
  uint32_t V, E;
  cin >> V >> E;

  for (uint32_t i = 0; i < V; i++) {
    for (uint32_t j = 0; j < V; j++) {
      if (i == j)
        graph[i][j] = 0;
      else
        graph[i][j] = INF;
    }
  }

  for (uint32_t i = 0; i < E; i++) {
    int64_t s, t, d;
    cin >> s >> t >> d;
    graph[s][t] = d;
  }

  for (uint32_t k = 0; k < V; k++) {
    for (uint32_t i = 0; i < V; i++) {
      for (uint32_t j = 0; j < V; j++) {
        if (graph[i][k] == INF || graph[k][j] == INF) continue;
        if (graph[i][k] + graph[k][j] < graph[i][j]) {
          graph[i][j] = graph[i][k] + graph[k][j];
        }
      }
    }
  }

  for (uint32_t i = 0; i < V; i++) {
    if (graph[i][i] < 0) {
      cout << "NEGATIVE CYCLE" << endl;
      return 0;
    }
  }

  for (uint32_t i = 0; i < V; i++) {
    for (uint32_t j = 0; j < V; j++) {
      if (j != 0) cout << " ";
      if (graph[i][j] == INT32_MAX) {
        cout << "INF";
      } else {
        cout << graph[i][j];
      }
    }
    cout << endl;
  }

  return 0;
}