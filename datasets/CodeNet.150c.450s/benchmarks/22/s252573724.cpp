#include <bits/stdc++.h>
using namespace std;

int INF = 1e9;

struct Edge{
  int to, cost;

  Edge(int t, int c = 0): to(t), cost(c)
  {}
  bool operator>(const Edge& rhs) const{
	return cost > rhs.cost;
  }
  bool operator<(const Edge& rhs) const{
	return cost < rhs.cost;
  }

};
using Graph =  vector< vector<Edge> >;

// ????????°???????????¨???
void add_edge(Graph& graph, int u, int v, int cost = 0){
  graph[u].push_back(Edge(v,cost));
  graph[v].push_back(Edge(u,cost));
}

// precondition: d.size == V
// O(V*E)
// if graph has negative cycle, then return false, o.w. return true
bool BellmanFord(const Graph& G, vector<int>& d, int s){
  const int V = G.size();
  for(int i=0;i<V;++i)
	d[i] = INF;
  d[s] = 0;

  bool updated;
  for(int lp=0;lp<=V;++lp){
	updated = false;
	for(int i=0;i<V;++i){
	  for(const auto& e: G[i]){
		if(d[i] != INF && d[e.to] > d[i] + e.cost){
		  d[e.to] = d[i] + e.cost;
		  updated = true;
		}
	  }
	}
	if(!updated) break;
  }
  return !updated;
}


int main(){
  cin.tie(0);
  ios_base::sync_with_stdio(false);

  int V, E, R;
  cin >> V >> E >> R;
  Graph G(V);
  for(int i=0;i<E;++i){
	int s, t, d;
	cin >> s >> t >> d;
	G[s].emplace_back(t, d);
  }

  vector<int> dist(V);
  if(!BellmanFord(G, dist, R)){
	cout << "NEGATIVE CYCLE" << endl;
  }
  else{
	for(int i=0;i<V;++i)
	  if(dist[i] == INF) cout << "INF" << endl;
	  else cout << dist[i] << endl;
  }

  return 0;
}