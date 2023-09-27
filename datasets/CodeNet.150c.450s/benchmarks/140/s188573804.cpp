#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#include <utility>
#include <queue>
#include <cmath>
#include <memory.h>

using namespace std;

typedef long long ll;

const ll MAXV = 1e4, INF = 1e5;
ll V;
// firstに頂点、secondにコストとした隣接リスト
vector<pair<ll, ll> > graph[MAXV];
ll used[MAXV]; // 頂点がTに含まれているかどうか

// 最小全域木のコストを返す
ll prim(){
  ll res = 0;
  // firstにmincost、secondにid
  priority_queue<pair<ll, ll>, vector<pair<ll, ll> >, greater<pair<ll, ll> > > PQ;
  PQ.push(make_pair(0, 0));
  while(!PQ.empty()){
    pair<ll, ll> p = PQ.top(); PQ.pop();
    ll v = p.second;
    if(used[v] == true) continue;
    used[v] = true;
    res += p.first;
    for(int i=0;i<graph[v].size();i++){
      ll to = graph[v][i].first;
      ll cost = graph[v][i].second;
      if(!used[to]) PQ.push(make_pair(cost, to));
    }
  }
  return res;
}

int main(){
  cin.tie(0);
  ios_base::sync_with_stdio(false);
  ll E; cin >> V >> E;
  for(int i=0;i<E;i++){
    int s, t, w; cin >> s >> t >> w;
    graph[s].push_back(make_pair(t, w));
    graph[t].push_back(make_pair(s, w));
  }
  cout << prim() << endl;
}
