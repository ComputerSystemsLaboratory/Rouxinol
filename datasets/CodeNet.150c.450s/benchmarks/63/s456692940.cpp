#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i = 0; i < (int)n; i++)
using ll = long long;
struct edge{int to; ll cost;};
using P = pair<ll,int>;
const ll INF = 1e17;

void dijkstra(int n, int s, vector<vector<edge>>& g, vector<ll>& d){
  priority_queue<P,vector<P>,greater<P>> que;
  rep(i,n) d[i] = INF;
  d[s] = 0;
  que.push(P(0,s));
  while(!que.empty()){
    P p = que.top();
    que.pop();
    int v = p.second;
    if(d[v] < p.first) continue;
    for(auto e : g[v]){
      if(d[e.to] > d[v] + e.cost){
        d[e.to] = d[v] + e.cost;
        que.push(P(d[e.to], e.to));
      }
    }
  }
}

int main(){
  int v, e, r;
  cin >> v >> e >> r;
  vector<vector<edge>> g(v);
  rep(i,e) {
    int s, t; ll d;
    cin >> s >> t >> d;
    g[s].push_back(edge{t,d});
  }
  vector<ll> d(v,INF);
  dijkstra(v,r,g,d);
  rep(i,v) cout << (d[i] == INF ? "INF" : to_string(d[i]))  << endl;
  return 0;
}
