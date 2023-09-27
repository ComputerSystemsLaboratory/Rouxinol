/**
 * Moore-Bellman-Ford's Algorithm
 *
 * O(|V||E|)
 */

#include <vector>
using namespace std;

using Int = int;
Int INF = 1e9;
struct edge{
  int to;
  Int cost;
};
vector<Int> BellmanFord(const vector<vector<edge>>& G,int s){
  vector<Int> dist(G.size(),INF);
  dist[s] = 0;
  for(int i = 1;i < G.size();i++){
    for(int v = 0;v < G.size();v++){
      for(auto& e : G[v]){
        if(dist[v] == INF) continue;
        if(dist[e.to] > dist[v] + e.cost){
          dist[e.to] = dist[v] + e.cost;
        }
      }
    }
  }
  return dist;
}

vector<bool> NegativeCycle(const vector<vector<edge>>& G,vector<Int> dist){
  vector<bool> neg(G.size(),false);
  for(int i = 1;i < G.size();i++){
    for(int v = 0;v < G.size();v++){
      for(auto& e : G[v]){
        if(dist[v] == INF) continue;
        if(dist[e.to] > dist[v] + e.cost){
          neg[v] = true;
          dist[e.to] = dist[v] + e.cost;
        }
        neg[e.to] = neg[e.to] || neg[v];
      }
    }
  }
  return neg;
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
  auto dist = BellmanFord(G,r);
  auto neg = NegativeCycle(G,dist);

  for(int i = 0;i < v;i++){
    if(neg[i]){
      cout << "NEGATIVE CYCLE" << endl;
      return 0;
    }
  }

  for(int i = 0;i < v;i++){
    if(dist[i] == INF)
      cout << "INF" << endl;
    else
      cout << dist[i] << endl;
  }

  return 0;
}

