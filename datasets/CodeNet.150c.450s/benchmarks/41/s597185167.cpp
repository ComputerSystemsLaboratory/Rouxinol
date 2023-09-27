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

class AllPairsGraph {
  private:
    int vertex;
  
  public:
    std::vector<std::vector<int> > prev;
    std::vector<std::vector<long long> > dist;

    long long inf = LLONG_MAX / 3;

    AllPairsGraph(int v);

    
    virtual void push(int from, int to, int cost) = 0;

    bool warshall_floyed();

    std::vector<std::vector<long long> > get_dist();
    std::vector<int> get_path(int s, int d);
};

AllPairsGraph::AllPairsGraph(int v) {
  vertex = v;
  dist.resize(vertex);
  prev.resize(vertex);
  for (int i = 0; i < vertex; ++i) {
    dist[i].resize(vertex);
    prev[i].resize(vertex);
    for (int j = 0; j < vertex; ++j) {
      dist[i][j] = inf;
      if (i == j) dist[i][j] = 0;
      prev[i][j] = -1;
    }
  }
}

bool AllPairsGraph::warshall_floyed() {
  bool has_neg_cycle = false;
  for (int j = 0; j < vertex; ++j) {
    for (int i = 0; i < vertex; ++i) {
      for (int k = 0; k < vertex; ++k) {
        if (dist[i][j] != inf && dist[j][k] != inf && dist[i][j] + dist[j][k] < dist[i][k]) {
          dist[i][k] = dist[i][j] + dist[j][k];
          prev[i][k] = prev[j][k];
        }
      }
    }
  }
  for (int i = 0; i < vertex; ++i) {
    if (dist[i][i] < 0) has_neg_cycle = true;
  }
  return has_neg_cycle;
}

std::vector<std::vector<long long> > AllPairsGraph::get_dist() {
  return dist;
}

std::vector<int> AllPairsGraph::get_path(int s, int d) {
  std::vector<int> path;
  int v = d;
  while (v != s) {
    path.push_back(v);
    v = prev[s][v];
    if (v == -1) {
      path.clear();
      return path;
    }
  } 
  path.push_back(v);
  std::reverse(path.begin(), path.end());
  return path;
}

class AllPairsDirectedGraph : public AllPairsGraph {
  using AllPairsGraph::AllPairsGraph;

  public:
    void push(int from, int to, int cost) {
      dist[from][to] = cost;
      prev[from][to] = from;
    }
};

class AllPairsUndirectedGraph : public AllPairsGraph {
  using AllPairsGraph::AllPairsGraph;

  public:
    void push(int from, int to, int cost) {
      dist[from][to] = cost;
      prev[from][to] = from;

      dist[to][from] = cost;
      prev[to][from] = to;
    }
};

int main() {
  
  int v;
  int e;

  scanf("%d %d", &v, &e);

  AllPairsDirectedGraph g = AllPairsDirectedGraph(v);

  int from, to, cost;

  for (int i = 0; i <  e; i++) {
    scanf("%d %d %d", &from, &to, &cost);
    g.push(from, to, cost);
  }

  bool flag = g.warshall_floyed();
  if (flag) printf("NEGATIVE CYCLE\n");
  else {
    std::vector<std::vector<long long> > dist = g.get_dist();
    for (int i = 0; i < v; ++i) {
      for (int j = 0; j < v; ++j) {
        if (dist[i][j] != g.inf) printf("%lld", dist[i][j]);
        else printf("INF");
        printf("%s", j == v - 1 ? "\n" : " ");
      }
    }
  }
}

