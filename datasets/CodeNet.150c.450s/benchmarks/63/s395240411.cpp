#include <bits/stdc++.h>
using namespace std;

#define FOR(i,a,b) for(int i=(int)(a);i<(int)(b);i++)
#define RFOR(i,a,b) for(int i=(int)(b)-1;i>=(int)(a);i--)
#define REP(i,n) FOR(i,0,n)
#define RREP(i,n) RFOR(i,0,n)
#define LL long long
#define INF INT_MAX/3

const double EPS = 1e-14;
const double PI  = acos(-1.0);

struct Edge {
  int to;
  int cost;
};

class Graph {
  private:
    int vertex;
    std::vector<long long> dist;
    std::vector<int> prev;

  public:
    long long inf = LLONG_MAX / 3;
    std::vector<std::vector<Edge> > list;

    Graph(int v);

    
    virtual void push(int from, int to, int cost) = 0;

    void dijkstra(int s);

    std::vector<long long> get_dist();
    std::vector<int> get_path(int s, int d);
};

Graph::Graph(int v) {
  vertex = v;
  list.resize(vertex);
  dist.resize(vertex);
  prev.resize(vertex);
  for (int i = 0; i < vertex; ++i) {
    dist[i] = inf;
    prev[i] = -1;
  }
}

void Graph::dijkstra(int s) {
  dist[s] = 0;

  std::priority_queue<std::pair<int, int>, std::vector<std::pair<int, int> >, std::greater<std::pair<int, int> > > pq;
  pq.push(std::make_pair(0, s));

  while (!pq.empty()) {
    int cost = pq.top().first;
    int v = pq.top().second;
    pq.pop();

    for (int i = 0; i < (int)list[v].size(); ++i) {
      Edge e = list[v][i];
      if (cost + e.cost < dist[e.to] ) {
        prev[e.to] = v;
        dist[e.to] = cost + e.cost;
        pq.push(std::make_pair(dist[e.to], e.to));
      }
    }
  }
}

std::vector<long long> Graph::get_dist() {
  return dist;
}

class DirectedGraph : public Graph {
  using Graph::Graph;

  public:
    void push(int from, int to, int cost) {
      Edge e;
      e.to = to;
      e.cost = cost;
      list[from].push_back(e);
    }
};

int main() {
  
  int v;
  int e0;
  int s;

  scanf("%d %d %d", &v, &e0, &s);

  std::vector<std::vector<Edge> > vec(v);

  DirectedGraph g = DirectedGraph(v);

  int from, to, cost;

  for (int i = 0; i <  e0; i++) {
    scanf("%d %d %d", &from, &to, &cost);
    g.push(from, to, cost);
  }

  g.dijkstra(s);
  std::vector<long long> dist = g.get_dist();
  for (long long a: dist) {
    if (a == g.inf) printf("INF\n");
    else printf("%lld\n", a);
  }
}

