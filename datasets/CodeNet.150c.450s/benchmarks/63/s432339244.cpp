#include<functional>
#include<queue>
#include<vector>

using Weight = long long;
using Vertex = int;
struct Edge {Vertex from, to; Weight weight;};
using Graph = std::vector<std::vector<Edge>>;

// ???????§???????????????? O(|E| + |V| log |V|)
// ????????????????????°????????????????????????
std::vector<Weight> Dijkstra(const Graph& G, Vertex s) {
  std::vector<Weight> d(G.size(), -1);
  std::priority_queue<Edge, std::vector<Edge>, std::function<bool(Edge,Edge)>> q([](Edge lhs, Edge rhs){return lhs.weight > rhs.weight;});
  q.push({s, s, 0});
  while(!q.empty()) {
    auto cur = q.top();
    q.pop();
    if(d[cur.to] != -1) continue;
    d[cur.to] = cur.weight;
    for(const auto& nex: G[cur.to]) if(d[nex.to] == -1) q.push({cur.to, nex.to, cur.weight + nex.weight});
  }
  return d;
}

#include<bits/stdc++.h>
using namespace std;

int main() {
  int V, E, r;
  cin >> V >> E >> r;
  Graph G(V);
  for(int i = 0; i < E; ++i) {
    Vertex s, t; Weight d;
    cin >> s >> t >> d;
    G[s].push_back({s, t, d});
  }
  for(const auto& d: Dijkstra(G, r)) {
    if(d == -1) cout << "INF" << endl;
    else        cout << d << endl;
  }
}