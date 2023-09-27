#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

#define INF (INT_MAX/2)
using namespace std;

struct Edge {
  int src, dst, weight;
  Edge(int src, int dst, int weight) :
    src(src), dst(dst), weight(weight) { }
};

typedef vector<Edge> Edges;
typedef vector<Edges> Graph;

bool bellmanford(const Graph g, int s, vector<int> &dist) {
  int V = g.size();
  dist.assign(V, INF);
  dist[s] = 0;
  
  bool negative_cycle = false;
  for(int k = 0; k < V; k++) for(int i = 0; i < V; i++){
    if(dist[i] >= INF) continue;
    for(vector<Edge>::const_iterator e = g[i].begin(); e != g[i].end(); e++){
      if (dist[e->dst] > dist[e->src] + e->weight) {
        dist[e->dst] = dist[e->src] + e->weight;
        if (k == V - 1) {
          dist[e->dst] = -INF;
          negative_cycle = true;
        }
      }
    }
  }
  return !negative_cycle;
}

int main(){
  int V, E, r, s, t, w;
  cin >> V >> E >> r;
  Graph g(V);
  vector<int> dist;

  while(E--){
    cin >> s >> t >> w;
    g[s].push_back(Edge(s, t, w));
  }
  if(!bellmanford(g,r,dist)) cout << "NEGATIVE CYCLE" << endl;
  else{
    for(int i = 0; i < V; i++){
      if(dist[i] >= INF) cout << "INF" << endl;
      else cout << dist[i] << endl;
    }
  }
}