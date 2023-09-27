#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
typedef long long int ll;
typedef pair<int, int> P;

const int MAX_N = 2000;
const ll INF = 1LL<<60;

int n, m, s, t;
bool nc;
vector<pair<P, ll>> G;
vector<ll> dist(MAX_N, INF);

void init()
{
  cin >> n >> m >> s;
  rep(i,m)
  {
    int a, b;
    ll c;
    cin >> a >> b >> c;
    G.emplace_back(pair<P, ll>(P(a, b), c));
  }
  nc = false;
  
  return;
}

void bf()
{
  dist[s] = 0;
  int cnt = 0;
  while(true)
  {
    if(cnt > n)
    {
      nc = true;
      break;
    }
    
    bool flg = false;
    rep(i,G.size())
    {
      int from = G[i].first.first, to = G[i].first.second, cost = G[i].second;
      if(dist[from] >= INF) continue;
      if(dist[from] + cost < dist[to])
      {
        dist[to] = dist[from] + cost;
        flg = true;
      }
    }
    if(flg == false) break;
    cnt++;
  }
  
  return;
}

void put()
{
  if(nc) cout << "NEGATIVE CYCLE" << endl;
  else rep(i,n) cout << ((dist[i] == INF)? "INF" : to_string(dist[i])) << "\n";
  return;
}

int main()
{
  init();
  bf();
  put();
  return 0;
}
