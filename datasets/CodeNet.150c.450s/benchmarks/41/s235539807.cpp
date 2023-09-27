#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;
typedef pair<int, int> P;
typedef pair<ll, ll> Pll;
typedef vector<int> Vi;
typedef tuple<int, int, int> T;
#define FOR(i,s,x) for(int i=s;i<(int)(x);i++)
#define REP(i,x) FOR(i,0,x)
#define ALL(c) c.begin(), c.end()
#define DUMP( x ) cerr << #x << " = " << ( x ) << endl

#define MAX_V 128
const ll INF = (ll)1e40;

// graph by adjacency list

struct Graph {
  int V;
  ll Adj[MAX_V][MAX_V];

  Graph(int V) : V(V) {
    for (int i = 0; i < V; i++) {
      std::fill(Adj[i], Adj[i] + V, INF);
      Adj[i][i] = 0;
    }
  }

  void add_edge(int src, int dst, ll weight) {
    Adj[src][dst] = weight;
  }
};

struct AllPairsShortestPath {
  Graph g;
  
  AllPairsShortestPath(const Graph &g) : g(g) { }

  void warshall_floyd() {
    for (int k = 0; k < g.V; k++) {
      for (int i = 0; i < g.V; i++) {
	for (int j = 0; j < g.V; j++) {
	  if (g.Adj[i][k] != INF && g.Adj[k][j] != INF)
	    g.Adj[i][j] = min(g.Adj[i][j], g.Adj[i][k] + g.Adj[k][j]);
	}
      }
    }
  }

  bool has_negative_loop() {
    for (int i = 0; i < g.V; i++) {
      if (g.Adj[i][i] < 0) return true;
    }
    return false;
  }
};
  
int main() {
  // use scanf in CodeForces!
  cin.tie(0);
  ios_base::sync_with_stdio(false);

  int V, E;
  cin >> V >> E;
  Graph g(V);
  REP(i, E) {
    int src, dst, weight;
    cin >> src >> dst >> weight;
    g.add_edge(src, dst, weight);
  }

  AllPairsShortestPath alsp(g);
  
  alsp.warshall_floyd();
  
  if (alsp.has_negative_loop()) {
    cout << "NEGATIVE CYCLE" << endl;
  } else {
    REP(i, V) {
      REP(j, V) {
	if (alsp.g.Adj[i][j] == INF) {
	  cout << "INF" << (j == V-1 ? '\n' : ' ');
	} else {
	  cout << alsp.g.Adj[i][j] << (j == V-1 ? '\n' : ' ');
	}
      }
    }
  }  
  return 0;
}