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

class Graph {
  protected:
    int vertex;

    Graph(int v) {
      vertex = v;
    }
};

struct Edge {
  int to;
  int cost;
};

class AdjacentListGraph : public Graph {
  protected:
    std::vector<std::vector<Edge> > list;
  public:
    AdjacentListGraph(int v): Graph(v) {
      list.resize(vertex);
    }

    virtual void push(int from, int to, int cost) = 0;
};

class SingleSourceGraph : public AdjacentListGraph {
  protected:
    int start;
    std::vector<long long> dist;
    std::vector<int> prev;

  public:
    long long inf = LLONG_MAX / 3;

    SingleSourceGraph(int v, int s);

    bool bellman_ford();

    std::vector<long long> get_dist();
    std::vector<int> get_path(int d);
};

SingleSourceGraph::SingleSourceGraph(int v, int s): AdjacentListGraph(v) {
  start = s;
  dist.resize(vertex);
  prev.resize(vertex);
  for (int i = 0; i < vertex; ++i) {
    dist[i] = inf;
    prev[i] = -1;
  }
  dist[start] = 0;
}

bool SingleSourceGraph::bellman_ford() {
  bool update = true;
  int cnt = 0;
  while (update) {
    cnt++;
    update = false;
    for (int i = 0; i < vertex; ++i) {
      for (int j = 0; j < (int)list[i].size(); ++j) {
        Edge e = list[i][j];
        if (dist[i] + e.cost < dist[e.to] && dist[i] != inf) {
          if (cnt >= vertex) return true;
          dist[e.to] = dist[i] + e.cost;
          prev[e.to] = i;
          update = true;
        }
      }
    }
  }
  return false;
}

std::vector<long long> SingleSourceGraph::get_dist() {
  return dist;
}

std::vector<int> SingleSourceGraph::get_path(int d) {
  std::vector<int> path;
  int v = d;
  while (v != start) {
    path.push_back(v);
    v = prev[v];
  }
  path.push_back(v);
  std::reverse(path.begin(), path.end());
  return path;
}

class SingleSourceDirectedGraph : public SingleSourceGraph {
  using SingleSourceGraph::SingleSourceGraph;

  public:
  void push(int from, int to, int cost) {
    Edge e;
    e.to = to;
    e.cost = cost;
    list[from].push_back(e);
  }
};

class SingleSourceUndirectedGraph : public SingleSourceGraph {
  using SingleSourceGraph::SingleSourceGraph;

  public:
  void push(int from, int to, int cost) {
    Edge e;
    e.to = to;
    e.cost = cost;
    list[from].push_back(e);

    e.to = from;
    list[to].push_back(e);
  }
};

int main(){
  
  int v;
  int e;
  int s;

  scanf("%d %d %d", &v, &e, &s);

  SingleSourceDirectedGraph g = SingleSourceDirectedGraph(v, s);

  int from, to, cost;

  for (int i = 0; i < e; i++) {
    scanf("%d %d %d", &from, &to, &cost);
    g.push(from, to, cost);
  }

  bool is_negative = g.bellman_ford();
  std::vector<long long> dist = g.get_dist();

  if (is_negative) printf("NEGATIVE CYCLE\n");
  else {
    for (long long d: dist) {
      if (d == g.inf) printf("INF\n");
      else printf("%lld\n", d);
    }
  }
}

