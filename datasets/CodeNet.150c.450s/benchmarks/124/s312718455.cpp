#include<iostream>
#define INF 1<<30
using namespace std;
int main() {
  int n; cin >> n;
  int graph[100][100];
  for (int i = 0; i < n; ++i)
    for (int j = 0; j < n; ++j) graph[i][j] = INF;
  for (int i = 0; i < n; ++i) {
    int u, k, v; cin >> u >> k;
    for (int j = 0; j < k; ++j) {
      cin >> v;
      cin >> graph[u][v];
    }
  }
  int mincost[100], flag[100] = {};
  mincost[0] = 0;
  for (int i = 1; i < n; ++i) mincost[i] = INF;
  while (1) {
    int x = -1;
    for (int i = 0; i < n; ++i)
      if (!flag[i] && (x == -1 || mincost[x] > mincost[i])) x = i;
    if (x == -1) break;
    flag[x] = 1;
    for (int i = 0; i < n; ++i)
      if (mincost[i] > mincost[x]+graph[x][i]) mincost[i] = mincost[x]+graph[x][i];
  }
  for (int i = 0; i < n; ++i) cout << i << " " << mincost[i] << endl;
  return 0;
}

