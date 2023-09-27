#include <bits/stdc++.h>
using namespace std;
const int MAXV = 1010;
const int MAXE = 2010;
const int64_t INF = (1LL << 62);
struct edge
{
  int from, to, cost;
};
edge es[MAXE];

vector<int64_t> d(MAXV, INF);
bool BellmanFord(int s, int V, int E)
{
  d[s] = 0;
  for (int i = 0; i < V; i++)
  {
    for (int j = 0; j < E; j++)
    {
      edge e = es[j];
      if (d[e.from] == INF)
        continue;
      if (d[e.to] > d[e.from] + e.cost)
      {
        d[e.to] = d[e.from] + e.cost;
        if (i == V - 1)
        {
          return false;
        }
      }
    }
  }
  return true;
}

int main()
{
  int V, E, r, v, u, c;
  cin >> V >> E >> r;
  for (int i = 0; i < E; i++)
  {
    cin >> v >> u >> c;
    es[i] = {v, u, c};
  }
  if (BellmanFord(r, V, E))
  {
    for (int i = 0; i < V; i++)
    {
      if (d[i] == INF)
        cout << "INF" << endl;
      else
        cout << d[i] << endl;
    }
  }
  else
  {
    cout << "NEGATIVE CYCLE" << endl;
  }
}
