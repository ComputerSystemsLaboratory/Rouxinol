#include <iostream>
#include <queue>
using namespace std;

const int INF = 1001001001;
int n;
int v[100][100];
int d[100]; //?§??????????????????¢

void bfs(int s) //s????§????
{
  queue<int> q;
  q.push(s);
  for (int i = 0; i < n; i++) d[i] = INF;

  d[s] = 0;
  int u;
  while (!q.empty()) {
    u = q.front();
    q.pop();

    for (int i = 0; i < n; i++) {
      if (v[u][i] == 0) continue;
      if (d[i] != INF) continue;
      d[i] = d[u] + 1;
      q.push(i);
    }
  }

  for (int i = 0; i < n; i++) {
      cout << i + 1 << " " << ((d[i] == INF) ? -1 : d[i]) << endl;
  }
}

signed main()
{
  int u, k;

  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> u >> k;
    u--;
    for (int j = 0; j < k; j++) {
      int tmp;
      cin >> tmp;
      tmp--;
      v[i][tmp] = 1;
    }
  }

  bfs(0);

  return (0);
}