#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll INF = (1LL << 60);

int main()
{
  int N, M;
  cin >> N >> M;
  vector<vector<ll>> dist(N, vector<ll>(N, INF));
  for (int i = 0; i < N; i++)
  {
    dist.at(i).at(i) = 0;
  }
  for (int i = 0; i < M; i++)
  {
    int s, t;
    ll d;
    cin >> s >> t >> d;
    dist.at(s).at(t) = d;
  }

  for (int k = 0; k < N; k++)
  {
    for (int i = 0; i < N; i++)
    {
      if (dist.at(i).at(k) == INF)
      {
        continue;
      }
      for (int j = 0; j < N; j++)
      {
        if (dist.at(k).at(j) == INF)
        {
          continue;
        }
        dist.at(i).at(j) = min(dist.at(i).at(j), dist.at(i).at(k) + dist.at(k).at(j));
      }
    }
  }

  bool negative_cycle = false;
  for (int i = 0; i < N; i++)
  {
    if (dist.at(i).at(i) < 0)
    {
      negative_cycle = true;
    }
  }

  if (negative_cycle)
  {
    cout << "NEGATIVE CYCLE" << endl;
    return 0;
  }

  for (int i = 0; i < N; i++)
  {
    for (int j = 0; j < N; j++)
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
