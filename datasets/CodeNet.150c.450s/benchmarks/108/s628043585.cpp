#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const int INF = 1e9;

int main()
{
  int n = 0;
  fscanf(stdin, "%d", &n);
  vector<vector<int> > mat(n + 5, vector<int>(n + 5, 0));
  for (int i = 0; i < n; ++i) {
    int v = -1, k = -1, u = -1;
    fscanf(stdin, "%d %d", &v, &k);
    for (int j = 0; j < k; ++j) {
      fscanf(stdin, "%d", &u);
      mat[v][u] = 1;
    }
  }
  vector<int> cost(n + 5, -1);
  queue<int> que;
  cost[1] = 0;
  que.push(1);
  while (!que.empty()) {
    int v = que.front(); que.pop();
    for (int u = 1; u <= n; ++u) {
      if (mat[v][u] && cost[u] == -1) {
        cost[u] = cost[v] + 1;
        que.push(u);
      }
    }
  }
  for (int i = 1; i <= n; ++i) {
    fprintf(stdout, "%d %d\n", i, cost[i]);
  }
  return 0;
}