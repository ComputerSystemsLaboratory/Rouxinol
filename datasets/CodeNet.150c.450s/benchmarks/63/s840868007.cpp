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
  int src, dst; Cost cst;
  Edge(int s, int d, Cost c) : src(s), dst(d), cst(c) {}
};
typedef vector<Edge>  Edges;
typedef vector<Edges> Graph;
typedef vector<Cost>  Array;
typedef vector<Array> Matrix;

int dx[8] = {0, 1, 0, -1, 1, -1, 1, -1};
int dy[8] = {1, 0, -1, 0, 1, -1, -1, 1};

vector<Cost> dijkstra(const Graph &g, int s) {
  const Cost inf = numeric_limits<Cost>::max() / 2;
  typedef tuple<Cost, int> State;
  priority_queue<State> q;
  vector<Cost> dist(g.size(), inf);
  dist[s] = 0; q.emplace(0, s);
  while (q.size()) {
    Cost c; int v;
    tie(c, v) = q.top(); q.pop(); c *= -1;
    if (dist[v] < c) continue;
    for (auto & e : g[v]) {
      if (dist[e.dst] > dist[v] + e.cst) {
        dist[e.dst] = dist[v] + e.cst;
        q.emplace(-dist[e.dst], e.dst);
      }
    }
  }
  return dist;
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

  vector<Cost> c = dijkstra(g, r);
  for (int i = 0; i < (int)c.size(); i++) {
    if (c[i] == numeric_limits<Cost>::max() / 2) cout << "INF" << endl;
    else cout << c[i] << endl;
  }
  return 0; 
}