#include <bits/stdc++.h>
using namespace std;
static const long long INF = (1LL << 32);

int V, E;
vector<vector<long long> > D;

void init()
{
  D.resize(V, vector<long long>(V, INF));
  for (int i = 0; i < V; i++)
  {
    D.at(i).at(i) = 0;
  }
}

void solve()
{
  for (int k = 0; k < V; k++)
  {
    for (int i = 0; i < V; i++)
    {
      if (D.at(i).at(k) == INF)
      {
        continue;
      }
      for (int j = 0; j < V; j++)
      {
        if (D.at(k).at(j) == INF)
        {
          continue;
        }
        D.at(i).at(j) = min(D.at(i).at(j), D.at(i).at(k) + D.at(k).at(j));
      }
    }
  }
}

int main()
{
  cin >> V >> E;
  init();
  for (int i = 0; i < E; i++)
  {
    long long d;
    int s, t;
    cin >> s >> t >> d;
    D.at(s).at(t) = d;
  }
  solve();
  bool have_negative_cycle = false;
  for (int i = 0; i < V; i++)
  {
    if (D.at(i).at(i) < 0)
    {
      have_negative_cycle = true;
    }
  }
  if (have_negative_cycle)
  {
    cout << "NEGATIVE CYCLE" << endl;
  }
  else
  {
    for (int i = 0; i < V; i++)
    {
      for (int j = 0; j < V; j++)
      {
        if (j)
        {
          cout << " ";
        }
        long long d = D.at(i).at(j);
        if (d == INF)
        {
          cout << "INF";
        }
        else
        {
          cout << d;
        }
      }
      cout << endl;
    }
  }
}
