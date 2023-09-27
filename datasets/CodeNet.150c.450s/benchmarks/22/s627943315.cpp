#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i = 0; i < (int)n; i++)
using ll = long long;
struct edge{int from, to; ll cost;};
const ll INF = 1e17;

bool bellman_ford(int n, int s, vector<edge>& es, vector<ll>& d){
  rep(i,n) d[i] = INF;
  d[s] = 0;
  bool negative_loop = false;
  rep(i,n) {
    bool update = false;
    for(auto e : es) {
      if(d[e.from] != INF && d[e.to] > d[e.from] + e.cost){
        if(i == n-1) negative_loop = true;
        d[e.to] = d[e.from] + e.cost;
        update = true;
      }
    }
    if(!update) break;
  }
  return negative_loop;
}

int main(){
  int v, e, r;
  cin >> v >> e >> r;
  vector<edge> es;
  rep(i,e) {
    int s, t; ll dist;
    cin >> s >> t >> dist;
    es.push_back(edge{s,t,dist});
  }
  vector<ll> d(v);
  bool f = bellman_ford(v,r,es,d);
  if(f) cout << "NEGATIVE CYCLE" << endl;
  else rep(i,v) cout << (d[i] == INF ? "INF" : to_string(d[i])) << endl;
  return 0;
}
