#include <bits/stdc++.h>
using namespace std;

#define INF (INT_MAX/2)
#define PI (2*acos(0.0))
#define EPS (1e-8)

#define REP(i,a,b) for(int i=(a); i<(b);++i)
#define rep(i,n) REP(i,0,n)

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;

typedef int Cost;
struct Edge {
  int src, dst; Cost cost;
  Edge(int s, int d, Cost c) : src(s), dst(d), cost(c) {}
};
typedef vector<Edge>  Edges;
typedef vector<Edges> Graph;
typedef vector<Cost>  Array;
typedef vector<Array> Matrix;

int dx[8] = {0, 1, 0, -1, 1, -1, 1, -1};
int dy[8] = {1, 0, -1, 0, 1, -1, -1, 1};

pair<vector<Cost>, bool> bellmanFord(const Graph &g, int s) {
  int n = g.size(); const Cost inf = numeric_limits<Cost>::max() / 2;
  Edges es;
  for (int i = 0; i < n; i++) for (auto & e : g[i]) es.emplace_back(e);
  vector<Cost> dist(n, inf); dist[s] = 0;
  bool neg_cycle = false;
  for (int i = 0; ; i++) {
    bool update = false;
    for (auto & e : es) {
      if (dist[e.src] != inf && dist[e.dst] > dist[e.src] + e.cost) {
        dist[e.dst] = dist[e.src] + e.cost;
        update = true;
      }
    }
    if (!update) break;
    if (i > n) { neg_cycle = true; break; }
  }
  return make_pair(dist, neg_cycle);
}

int main(void) {
  ios_base::sync_with_stdio(false); cin.tie(0);
  int v, e, r;
  int s, t, d;
  
  cin >> v >> e >> r;
  
  Graph g(v);
  for (int i = 0; i < e; i++) {
    cin >> s >> t >> d;
    g[s].push_back(Edge(s, t, d));
  }

  vector<Cost> c;
  bool neg_cycle;

  tie(c, neg_cycle) = bellmanFord(g, r);
  
  if (neg_cycle) { cout << "NEGATIVE CYCLE" << endl; return 0; }
  for (int i = 0; i < (int)c.size(); i++) {
    if (c[i] == numeric_limits<Cost>::max() / 2) cout << "INF" << endl;
    else cout << c[i] << endl;
  }
  return 0; 
}