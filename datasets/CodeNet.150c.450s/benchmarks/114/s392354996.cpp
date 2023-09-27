#include <bits/stdc++.h>
using namespace std;

int main() {

  int n;
  cin >> n;

  int INF = 10000;
  int graph[n][n];
  for(int i = 0; i < n; i++) {
    for(int j = 0; j < n; j++) {
      int v;
      cin >> v;
      if (v == -1) {
        graph[i][j] = INF;
      } else {
        graph[i][j] = v;
      }
    }
  }

  int answer = 0;

  vector<bool> visited(n);
  vector<int> cost(n);

  visited[0] = 1;

  for (int i = 0; i < n; i++) {
    cost[i] = graph[0][i];
  }

  while (1) {
    int v = -1;
    for (int i = 0; i < n; i++) {
      if (visited[i] || cost[i] < 0) {
        continue;
      }
      if (v < 0 || cost[i] < cost[v]) {
        v = i;
      }
    }
    if (v < 0) {
      break;
    }
    visited[v] = 1;
    answer += cost[v];
    for (int i = 0; i < n; i++) {
      if (graph[v][i] < 0) {
        continue;
      }
      if (cost[i] < 0 || graph[v][i] < cost[i]) {
        cost[i] = graph[v][i];
      }
    }
  }

  cout << answer << endl;

  return 0;
}
