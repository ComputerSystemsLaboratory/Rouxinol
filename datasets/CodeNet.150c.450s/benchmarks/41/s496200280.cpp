/**
 * All Pairs Shortest Paths (全点間最短パス)
 * 
 * O(|E||V| + |V|^2 log|V|)
 */


/**
 * Feasible Potential
 * 
 * O(|E||V|)
 */

#include <vector>
#include <algorithm>
using namespace std;

using Int = long long;
struct edge{
    int to;
    Int cost;
};

vector<Int> Potential(const vector<vector<edge>>& G){
    vector<Int> dist(G.size(),0);
    for(int i = 1;i < G.size();i++){
        for(int v = 0;v < G.size();v++){
            for(auto & e : G[v]){
                dist[e.to] = min(dist[e.to],dist[v] + e.cost);
            }
        }
    }
    for (int v = 0; v < G.size(); v++) {
      for (auto &e : G[v]) {
          if(dist[e.to] > dist[v] + e.cost){
              return vector<Int>();
          }
      }
    }
    return dist;
}


/**
 * Potential Dijkstra
 *
 * O(|E| + |V|log|V|)
 */

#include <functional>
#include <queue>
#include <set>
#include <vector>
using namespace std;

Int INF = 1LL << 40;
using Pii = pair<Int, int>;

vector<Int> Potential_Dijkstra(const vector<vector<edge>> &G, const vector<Int> &pot,int s) {
  vector<Int> dist(G.size(), INF);
  dist[s] = 0;
  priority_queue<Pii, vector<Pii>, greater<Pii>> que;
  que.emplace(dist[s], s);
  while (!que.empty()) {
    auto d = que.top().first;
    auto v = que.top().second;
    que.pop();
    if (dist[v] < d)
      continue;
    for (auto &e : G[v]) {
      Int co = e.cost + pot[v] - pot[e.to];
      if (dist[e.to] > d + co) {
        dist[e.to] = d + co;
        que.emplace(dist[e.to], e.to);
      }
    }
  }
  return dist;
}

vector<vector<Int>> AllPairsShortestPaths(const vector<vector<edge>> &G){
    vector<vector<Int>> res(G.size());
    auto pot = Potential(G);
    if(pot.empty()) return vector<vector<Int>>();
    for(int s = 0;s < G.size();s++){
        res[s] = Potential_Dijkstra(G,pot,s);
        for(int t = 0;t < G.size();t++){
          if(res[s][t] == INF) continue;
          res[s][t] += pot[t] - pot[s];
        }
    }
    return res;
}

#include <iostream>

int main(){
  int v,e;
  cin >> v >> e;
  vector<vector<edge>> G(v);

  for(int i = 0;i < e;i++){
    int s,t;
    Int d;
    cin >> s >> t >> d;
    G[s].push_back({t,d});
  }

  auto res = AllPairsShortestPaths(G);

  if(res.empty()){
    cout << "NEGATIVE CYCLE" << endl;
    return 0;
  }

  for(auto & d : res){
    for(int i = 0;i < G.size();i++){
      if(d[i] == INF) cout << "INF";
      else cout << d[i];
      cout << " \n"[i + 1 == G.size()];
    }
  }
}
