#include <cstdio>
#include <algorithm>
#include <vector>
#include <queue>

#define Emax 9900
#define Vmax 100
#define Dmax (10000000)
#define INF (100000000000L)

using namespace std;

typedef unsigned int uint;
typedef long long int llint_t;

struct Edge {
  int from, to, cost;
};

Edge edges[Emax];
static llint_t d[Vmax][Vmax];
static int Vnum, Enum;

void warshall_floyd() {
  for (int i = 0; i < Vnum; i++) {
    for (int j = 0; j < Vnum; j++) {
      d[i][j] = INF;
    }
    d[i][i] = 0;
  }
  
  for (int i = 0; i < Enum; i++) {
    auto e = edges[i];
    d[e.from][e.to] = e.cost;
  }

  for (int k = 0; k < Vnum; k++) {
    for (int i = 0; i < Vnum; i++) {
      for (int j = 0; j < Vnum; j++) {
        if (d[i][k] == INF || d[k][j] == INF) continue;
        if (d[i][j] > d[i][k] + d[k][j]) {
          d[i][j] = d[i][k] + d[k][j];
        }
      }
    }
  }

  for (int i = 0; i < Vnum; i++) {
    if (d[i][i] < 0) {
      puts("NEGATIVE CYCLE");
      exit(0);
    }
  }
}

int main(int ac, char **av) {
  scanf("%d %d", &Vnum, &Enum);

  for (int i = 0; i < Enum; i++) {
    int s, t, d;
    scanf("%d %d %d", &s, &t, &d);
    Edge e;
    e.from = s;
    e.to = t;
    e.cost = d;
    edges[i] = e;
  }

  warshall_floyd();

  for (int i = 0; i < Vnum; i++) {
    for (int j = 0; j < Vnum; j++) {
      if (d[i][j] == INF) {
        printf("INF");
      } else {
        printf("%d", d[i][j]);
      }
      if (j != Vnum - 1) {
        printf(" ");
      } else {
        printf("\n");
      }
    }
  }
  return 0;
}

