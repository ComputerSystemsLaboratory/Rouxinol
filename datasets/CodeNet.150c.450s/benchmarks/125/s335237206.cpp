#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const int INF = 1e9;

int d[105] = { -1 }, f[105] = { -1 };
int n = -1;
int mat[105][105] = { { 0 } };
int visited[105] = { 0 };

void dfs(int v, int& now)
{
  d[v] = now;
  visited[v] = 1;
  ++now;
  for (int u = 1; u <= n; ++u) {
    if (mat[v][u] && !visited[u]) {
      dfs(u, now);
    }
  }
  f[v] = now;
  ++now;
}

int main()
{
  fscanf(stdin, "%d", &n);
  for (int i = 0; i < n; ++i) {
    int u = -1, k = -1, v = -1;
    fscanf(stdin, "%d %d", &u, &k);
    for (int j = 0; j < k; ++j) {
      fscanf(stdin, "%d", &v);
      mat[u][v] = 1;
    }
  }
  int now = 1;
  for (int v = 1; v <= n; ++v) {
    if (!visited[v]) {
      dfs(v, now);
    }
  }
  for (int i = 0; i < n; ++i) {
    fprintf(stdout, "%d %d %d\n", i + 1, d[i + 1], f[i + 1]);
  }
  return 0;
}