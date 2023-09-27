#include <bits/stdc++.h>
using namespace std;
const int INF = (1 << 29);

int main()
{
  int n, m;
  cin >> n >> m;
  vector<vector<pair<int, int>>> adj(n);
  for (int i = 0; i < m; i++)
  {
    int s, t, w;
    cin >> s >> t >> w;
    adj.at(s).push_back({t, w});
    adj.at(t).push_back({s, w});
  }
  int cost = 0;
  vector<bool> color(n, false);
  vector<int> d(n, INF);
  d.at(0) = 0;
  while (1)
  {
    int mincost = INF, u;
    for (int i = 0; i < n; i++)
    {
      if (color.at(i))
      {
        continue;
      }
      if (d.at(i) < mincost)
      {
        mincost = d.at(i);
        u = i;
      }
    }
    if (mincost == INF)
    {
      break;
    }
    cost += mincost;
    color.at(u) = true;
    for (int i = 0; i < adj.at(u).size(); i++)
    {
      auto p = adj.at(u).at(i);
      if (color.at(p.first))
      {
        continue;
      }
      if (p.second < d.at(p.first))
      {
        d.at(p.first) = p.second;
      }
    }
  }
  cout << cost << endl;
}
