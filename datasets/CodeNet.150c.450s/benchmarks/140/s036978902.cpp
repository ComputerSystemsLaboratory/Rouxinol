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

class MST : public AdjacentListGraph {
  private:
    std::vector<long long> key;
    std::vector<int> prev;

  public:
    long long inf = LLONG_MAX / 3;

    MST(int v);

    void push(int from, int to, int cost);

    void prim(int root);
    int total_weight();
};

MST::MST(int v): AdjacentListGraph(v) {
  key.resize(vertex);
  prev.resize(vertex);
  for (int i = 0; i < vertex; ++i) {
    key[i] = inf;
    prev[i] = -1;
  }
}

void MST::prim(int root = 0) {
  key[root] = 0;

  std::priority_queue<std::pair<long long, int>, std::vector<std::pair<long long, int> >, std::greater<std::pair<long long, int> > > pq;

  std::vector<bool> done(vertex, false);

  pq.push(std::make_pair(key[root], root));

  while (!pq.empty()) {
    int v = pq.top().second;
    pq.pop();

    done[v] = true;

    for (int i = 0; i < (int)list[v].size(); ++i) {
      Edge e = list[v][i];
      if (!done[e.to] && e.cost < key[e.to]) {
        key[e.to] = e.cost;
        prev[e.to] = v;
        pq.push(std::make_pair(key[e.to], e.to));
      }
    }
  }
}

void MST::push(int from, int to, int cost) {
  Edge e;
  e.to = to;
  e.cost = cost;
  list[from].push_back(e);
  e.to = from;
  list[to].push_back(e);
}

int MST::total_weight() {
  int total = 0;
  for (long v: key) {
    total += v;
  }
  return total;
}

int main() {
  
  int v;
  int e;

  scanf("%d %d", &v, &e);

  MST g = MST(v);

  int from, to, cost;

  for (int i = 0; i <  e; i++) {
    scanf("%d %d %d", &from, &to, &cost);
    g.push(from, to, cost);
  }

  g.prim();
  int weight = g.total_weight();
  printf("%d\n", weight);
}

