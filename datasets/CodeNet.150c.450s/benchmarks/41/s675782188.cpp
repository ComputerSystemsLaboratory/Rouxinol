#include <algorithm>
#include <cstdio>
#include <iostream>
#include <string>
using namespace std;
static const int MAX = 100;
static const long long int INF = (1LL << 32);

void put(long long d) {
  if (d < INF)
    printf("%lld", d);
  else
    printf("INF");
}

int main() {
  long long D[MAX][MAX];
  int nv, nedge;
  cin >> nv >> nedge;
  for (int i = 0; i < nv; i++) {
    for (int j = 0; j < nv; j++) {
      D[i][j] = i == j ? 0 : INF;
    }
  }

  for (int i = 0; i < nedge; i++) {
    int s, t;
    long long d;
    scanf("%d %d %lld", &s, &t, &d);
    D[s][t] = d;
  }

  for (int k = 0; k < nv; k++) {
    for (int i = 0; i < nv; i++) {
      if (D[i][k] == INF) continue;
      for (int j = 0; j < nv; j++) {
        if (D[k][j] == INF) continue;
        D[i][j] = min(D[i][j], D[i][k] + D[k][j]);
      }
    }
  }
  for (int i = 0; i < nv; i++) {
    if (D[i][i] < 0) {
      printf("NEGATIVE CYCLE\n");
      return 0;
    }
  }

  for (int i = 0; i < nv; i++) {
    put(D[i][0]);
    for (int j = 1; j < nv; j++) {
      printf(" ");
      put(D[i][j]);
    }
    printf("\n");
  }
  return 0;
}