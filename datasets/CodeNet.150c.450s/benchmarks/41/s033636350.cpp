#include <bits/stdc++.h>
#define INF 10000000000
using namespace std;

//=============warshall_floyd============================
vector<vector<long long>>  warshall_floyd(long long V, vector<vector<long long>> d)
{
  for (long long k = 0; k < V; ++k)
  {
    for (long long i = 0; i < V; ++i)
    {
      for (long long j = 0; j < V; ++j)
      {
        if (d[i][k] == INF || d[k][j] == INF)
        {
          continue;
        }
        d[i][j] = min(d[i][j], d[i][k] + d[k][j]);
      }
    }
  }
  return d;
}
//=================================================

int main()
{
  long long V, E;
  cin >> V >> E;
  long long s, t, d;
  vector<vector<long long>> dist(V, vector<long long>(V, INF));
  for (long long i = 0; i < V; ++i)
  {
    dist.at(i).at(i) = 0;
  }
  for (long long i = 0; i < E; ++i)
  {
    cin >> s >> t >> d;
    dist.at(s).at(t) = d;
  }
  dist = warshall_floyd(V, dist);
  for (long long i = 0; i < V; ++i)
  {
    if (dist.at(i).at(i) < 0)
    {
      cout << "NEGATIVE CYCLE" << endl;
      return 0;
    }
  }
  for (long long i = 0; i < V; ++i)
  {
    for (long long j = 0; j < V; ++j)
    {
      if (j)
      {
        cout << " ";
      }
      if (dist.at(i).at(j) == INF)
      {
        cout << "INF";
      }
      else
      {
        cout << dist.at(i).at(j);
      }
    }
    cout << endl;
  }
}

