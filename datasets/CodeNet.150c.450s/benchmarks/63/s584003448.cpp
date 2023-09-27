/**
 * Dijkstra's Algorithm
 *
 * O(m + nlogn)
 */

#include <vector>
#include <queue>
#include <set>
using namespace std;

struct edge{
  int to;
  int cost;
};
int INF = 1 << 30;
using Pii = pair<int,int>;

vector<int> Dijkstra(const vector<vector<edge>>& G,int s){
  vector<int> dist(G.size(),INF);
  dist[s] = 0;
  priority_queue<Pii,vector<Pii>,greater<Pii>> que;
  que.emplace(dist[s],s);
  while(!que.empty()){
    auto d = que.top().first;
    auto v = que.top().second;
    que.pop();
    if(dist[v] < d) continue;
    for(auto & e : G[v]){
      if(dist[e.to] > d + e.cost){
        dist[e.to] = d + e.cost;
        que.emplace(dist[e.to],e.to);
      }
    }
  }
  return dist;
}

#include <iostream>

int main(){
  int v,e,r;
  cin >> v >> e >> r;
  vector<vector<edge>> G(v);
  for(int i = 0;i < e;i++){
    int s,t,d;
    cin >> s >> t >> d;
    G[s].push_back({t,d});
  }
  auto res = Dijkstra(G,r);
  for(auto i : res){
    if(i == INF) cout << "INF";
    else cout << i;
    cout << endl;
  }
}

