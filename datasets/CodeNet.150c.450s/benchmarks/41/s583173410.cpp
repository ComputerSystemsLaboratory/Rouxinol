#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
typedef long long int ll;

const int MAX_N = 1000;
const ll INF = 1LL<<60;

int n, m;
vector<vector<ll>> dist(MAX_N, vector<ll>(MAX_N, INF));

void init()
{
  cin >> n >> m;
  rep(i,n) dist[i][i] = 0;
  rep(i,m)
  {
    int a, b;
    ll c;
    cin >> a >> b >> c;
    dist[a][b] = c;
  }
  return;
}

void wf()
{
  for(int i = 0; i < n; i++)
  {
    for(int j = 0; j < n; j++)
    {
      for(int k = 0; k < n; k++)
      {
        dist[j][k] = min(dist[j][k], dist[j][i] + dist[i][k]);
      }
    }
  }
}

void put()
{
  rep(i,n)
  {
    if(dist[i][i] < 0)
    {
      cout << "NEGATIVE CYCLE" << endl;
      return;
    }
  }
    
  rep(i,n)
  {
    rep(j,n)
    {
      if(dist[i][j] >= INF/2) cout << "INF";
      else cout << dist[i][j];
      cout << ((j == n-1)? "\n" : " ");
    }
  }
  return;
}

int main()
{
  init();
  wf();
  put();
  return 0;
}
