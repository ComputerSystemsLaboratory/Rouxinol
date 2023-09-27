// AOJ GRL_1_A: Shortest Path - Single Source Shortest Path
#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include <queue>

using namespace std;

using ll = long long;
using Pi = pair<int, int>;
using Pl = pair<ll, ll>;
using Ti = tuple<int, int, int>;
using Tl = tuple<ll, ll, ll>;

#define pb push_back
#define eb emplace_back
#define mp make_pair
#define mt make_tuple
#define F first
#define S second
#define Get(t, i) get<(i)>((t))
#define all(v) (v).begin(), (v).end()
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define reps(i, f, n) for(int i = (int)(f); i < (int)(n); i++)
#define each(a, b) for(auto a : b)

const int inf = 1 << 25;
const ll INF = 1LL << 55;

// Bellman-Ford algorithm: Single-source shoretest paths
struct edge {
  int from, to, weight;
  edge(){}
  edge(int from, int to, int weight):from(from), to(to), weight(weight){}
};

struct BellmanFord
{
  vector<edge> edges;
  vector<int> distance;
  BellmanFord(int V):distance(V, inf){}
  void add_edge(int from, int to, int weight)
  {
    edges.push_back(edge(from, to, weight));
  }
  bool shortest_path(int source)
  {
    distance[source] = 0;

    // if this graph doesn't have negative cycle,
    // the shortest path is found in |V|-1 times.
    for(int i = 0; i < (int)distance.size()-1; i++) {
      for(edge e : edges) {
	if(distance[e.from] != inf &&
	   distance[e.from] + e.weight < distance[e.to]) {
	  distance[e.to] = distance[e.from] + e.weight;
	}
      }
    }

    // check for negative-weight cycles
    for(edge e : edges) {
      if(distance[e.from] != inf &&
	 distance[e.from] + e.weight < distance[e.to]) {
	return true;
      }
    }
    return false;
  }
};

int main()
{
  int V, E, r; cin >> V >> E >> r;
  BellmanFord sssp(V);
  while(E--) {
    int s, t, d; cin >> s >> t >> d;
    sssp.add_edge(s, t, d);
  }
  if(sssp.shortest_path(r)) {
    cout << "NEGATIVE CYCLE" << endl;
    return 0;
  }
  for(int i = 0; i < V; i++) {
    if(sssp.distance[i] == inf) puts("INF");
    else cout << sssp.distance[i] << endl;
  }
  return 0;
}