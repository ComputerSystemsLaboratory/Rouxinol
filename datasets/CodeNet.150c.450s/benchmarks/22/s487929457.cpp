#include <cstdio>
#include <algorithm>
#include <vector>
#include <queue>

const int kMaxV = 100010;
const int kInf = 0x3F3F3F3F;

using namespace std;

struct Edge {
  int from;
  int to;
  int dist;

  Edge(int from, int to, int dist): from(from), to(to), dist(dist) {}
};

struct BellmanFord {
  int v, e;
  vector<Edge> edges;
  vector<int> g[kMaxV];
  int dist[kMaxV];
  int parent[kMaxV];
  bool has_negative_cycle;

  BellmanFord(int v): v(v) {}

  void AddEdge(int from, int to, int dist) {
    edges.emplace_back(from, to, dist);
    g[from].push_back(edges.size() - 1);
  }

  void Solve(int source) {
    queue<int> q;
    for (int i = 0; i < v; ++i) {
      dist[i] = kInf;
      q.push(i);
    }
    dist[source] = 0;
    for (int i = 0; i < v - 1; ++i) {
      for (auto e: edges) {
        if (dist[e.to] > dist[e.from] + e.dist && dist[e.from] != kInf) {
          dist[e.to] = dist[e.from] + e.dist;
          parent[e.to] = e.from;
        }
      }
    }
    has_negative_cycle = false;
    for (auto e: edges) {
      if (dist[e.to] > dist[e.from] + e.dist && dist[e.from] != kInf) {
        has_negative_cycle = true;
      }
    }
  }
};

int main() {
  int v, e, r;
  scanf("%d %d %d", &v, &e, &r);
  auto solver = new BellmanFord(v);
  for (int i = 0; i < e; ++i) {
    int s, t, d;
    scanf("%d %d %d", &s, &t, &d);
    solver->AddEdge(s, t, d);
  }
  solver->Solve(r);
  if (solver->has_negative_cycle) {
    printf("NEGATIVE CYCLE\n");
  } else {
    for (int i = 0; i < v; ++i) {
      if (solver->dist[i] == kInf) {
        printf("INF\n");
      } else {
        printf("%d\n", solver->dist[i]);
      }
    }
  }
}

