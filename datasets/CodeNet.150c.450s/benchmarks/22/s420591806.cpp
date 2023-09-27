#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < n; i++)
#define FOR(i, m, n) for (int i = m; i < n; i++)
#define ll long long int
const int INF = 2147483647;

using namespace std;

struct edge
{
  int to, cost;
};
typedef std::vector<std::vector<edge>> graph;

// ここから
int d[1000] = {};

// 負経路が存在する場合はtrue,そうでない場合はfalseを返す
bool bellmanFord(const int s, const int size, const graph &g)
{
  REP(i, size)
  {
    d[i] = INF;
  }
  d[s] = 0;

  int counter = 0;
  while (true)
  {
    counter++;
    bool update = false;
    REP(i, g.size())
    {
      for (auto e : g[i])
      {
        if (d[i] != INF && d[e.to] > d[i] + e.cost)
        {
          d[e.to] = d[i] + e.cost;
          update = true;
        }
      }
    }
    if (!update)
      break;
    if (update && counter >= size)
    {
      return true;
    }
  }
  return false;
}
// ここまで

int main()
{
  int v, e, r;
  cin >> v >> e >> r;
  graph g(v);
  REP(i, e)
  {
    int s, t, d;
    cin >> s >> t >> d;
    g[s].push_back({t, d});
  }
  bool cycled = bellmanFord(r, v, g);
  if (cycled)
  {
    cout << "NEGATIVE CYCLE" << endl;
  }
  else
  {
    REP(i, v)
    {
      if (d[i] == INF)
      {
        cout << "INF" << endl;
      }
      else
      {
        cout << d[i] << endl;
      }
    }
  }
}

