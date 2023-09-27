#include <cstdio>
#include <algorithm>
#include <vector>
#include <queue>

#define Emax 500001
#define Vmax 100001
#define Dmax 1<<31

using namespace std;

typedef unsigned int uint;

struct Edge {
  int to, cost;
};

vector<Edge> edges[Vmax];
static uint d[Vmax + 1];
static int Vnum, Enum, r;
static bool visited[Vmax];

void dijkstra() {
  fill_n(d, Vnum + 1, Dmax);
  fill_n(visited, Vnum, false);
  d[r] = 0;
  for (int i = 0; i < Vnum; i++) {
    int u = Vnum;
    for (int j = 0; j < Vnum; j++) {
      if (!visited[j] && d[j] < d[u]) {
        u = j;
      }
    }
    if (u == Vnum) {
      break;
    }
    visited[u] = true;
    for (int j = 0; j < edges[u].size(); j++) {
      auto v = edges[u][j];
      d[v.to] = min(d[v.to], d[u] + v.cost);
    }
  }
}

void dijkstra_priority_queue() {
  auto c = [](int a, int b) {
    return d[a] > d[b];
  };
  priority_queue<int, vector<int>, decltype(c)> Q(c);

  fill_n(d, Vnum, Dmax);
  d[r] = 0;
  for (int i = 0; i < Vnum; i++) {
    Q.push(i);
  }
  while (!Q.empty()) {
    int u = Q.top();
    Q.pop();
    for (int i = 0; i < edges[u].size(); i++) {
      auto v = edges[u][i];
      auto alt = d[u] + v.cost;
      if (d[v.to] > alt) {
        d[v.to] = alt;
        Q.push(v.to);
      }
    }
  }
}

int main(int ac, char **av) {
  scanf("%d %d %d", &Vnum, &Enum, &r);

  for (int i = 0; i < Enum; i++) {
    int s, t, d;
    scanf("%d %d %d", &s, &t, &d);
    Edge e;
    e.to = t;
    e.cost = d;
    edges[s].push_back(e);
  }

  dijkstra_priority_queue();

  for (int i = 0; i < Vnum; i++) {
    if (d[i] == Dmax) {
      printf("INF\n");
    } else {
      printf("%d\n", d[i]);
    }
  }
  return 0;
}

