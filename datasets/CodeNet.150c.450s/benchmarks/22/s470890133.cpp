#include <cstdio>
#include <algorithm>
#include <vector>
#include <queue>

#define Emax 2000
#define Vmax 1000
#define Dmax (10000)
#define INF (1000000)

using namespace std;

typedef unsigned int uint;
typedef long long int llint_t;

struct Edge {
  int from, to, cost;
};

Edge edges[Emax];
static llint_t d[Vmax];
static int Vnum, Enum, r;

void bellman_ford() {
  fill_n(d, Vnum, INF);
  d[r] = 0;
  for (int i = 0; i < Vnum - 1; i++) {
    for (int j = 0; j < Enum; j++) {
      auto uv = edges[j];
      auto u = uv.from;
      auto v = uv.to;
      if (d[u] == INF) continue;
      d[v] = min(d[v], d[u] + uv.cost);
    }
  }
  for (int i = 0; i < Enum; i++) {
    auto uv = edges[i];
    if (d[uv.from] == INF) continue;
    if (d[uv.from] + uv.cost < d[uv.to]) {
      puts("NEGATIVE CYCLE");
      exit(0);
    }
  }
}

int main(int ac, char **av) {
  scanf("%d %d %d", &Vnum, &Enum, &r);

  for (int i = 0; i < Enum; i++) {
    int s, t, d;
    scanf("%d %d %d", &s, &t, &d);
    Edge e;
    e.from = s;
    e.to = t;
    e.cost = d;
    edges[i] = e;
  }

  bellman_ford();

  for (int i = 0; i < Vnum; i++) {
    if (d[i] == INF) {
      printf("INF\n");
    } else {
      printf("%d\n", d[i]);
    }
  }
  return 0;
}
