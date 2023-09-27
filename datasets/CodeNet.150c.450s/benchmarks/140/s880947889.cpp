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

class SingleSourceGraph {
  protected:
    int vertex;
    int start;
    std::vector<long long> dist;
    std::vector<int> prev;
    std::vector<std::vector<Edge> > list;

  public:
    long long inf = LLONG_MAX / 3;

    SingleSourceGraph(int v, int s);

    
    virtual void push(int from, int to, int cost) = 0;

    void dijkstra();
    bool bellman_ford();

    std::vector<long long> get_dist();
    std::vector<int> get_path(int d);
};

SingleSourceGraph::SingleSourceGraph(int v, int s) {
  vertex = v;
  start = s;
  list.resize(vertex);
  dist.resize(vertex);
  prev.resize(vertex);
  for (int i = 0; i < vertex; ++i) {
    dist[i] = inf;
    prev[i] = -1;
  }
  dist[start] = 0;
}

void SingleSourceGraph::dijkstra() {
  std::priority_queue<std::pair<int, int>, std::vector<std::pair<int, int> >, std::greater<std::pair<int, int> > > pq;
  pq.push(std::make_pair(0, start));

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
      e.cost = cost;
      list[to].push_back(e);
    }

    void prim();
};

void SingleSourceUndirectedGraph::prim() {
  std::priority_queue<std::pair<long long, int>, std::vector<std::pair<long long, int> >, std::greater<std::pair<long long, int> > > pq;

  std::vector<bool> done(vertex, false);

  pq.push(std::make_pair(dist[start], start));

  while (!pq.empty()) {
    int v = pq.top().second;
    pq.pop();

    done[v] = true;

    for (int i = 0; i < (int)list[v].size(); ++i) {
      Edge e = list[v][i];
      if (!done[e.to] && e.cost < dist[e.to]) {
        dist[e.to] = e.cost;
        prev[e.to] = v;
        pq.push(std::make_pair(dist[e.to], e.to));
      }
    }
  }
}

int main() {
  
  int v;
  int e;

  scanf("%d %d", &v, &e);

  SingleSourceUndirectedGraph g = SingleSourceUndirectedGraph(v, 0);

  int from, to, cost;

  for (int i = 0; i <  e; i++) {
    scanf("%d %d %d", &from, &to, &cost);
    g.push(from, to, cost);
  }

  g.prim();
  std::vector<long long> dist = g.get_dist();
  long long sum = 0;
  for (long long d: dist) sum += d;
  printf("%lld\n", sum);
}

