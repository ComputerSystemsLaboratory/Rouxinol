#include <iostream>
#include <vector>
using namespace std;

int n, m;
vector<int> g[100000];
int color[100000];

void dfs(int v, int id)
{
  if (color[v] != -1) return;
  color[v] = id;
  for (int i = 0; i < g[v].size(); i++) {
    dfs(g[v][i], id);
  }
}

signed main()
{
  int tmp1, tmp2;
  int q, s, t;

  cin >> n >> m;
  for (int i = 0; i < m; i++) {
    cin >> tmp1 >> tmp2;
    g[tmp1].push_back(tmp2);
    g[tmp2].push_back(tmp1);
  }

  fill(color, color + 100000, -1);

  int id = 1;
  for (int u = 0; u < n; u++) {
    dfs(u, id++);
  }

  cin >> q;
  for (int i = 0; i < q; i++) {
    cin >> s >> t;
    if (color[s] == color[t]) {
      cout << "yes" << endl;
    }
    else {
      cout << "no" << endl;
    }
  }

  return (0);
}