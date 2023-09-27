#include <vector>
#include <cstdio>
using namespace std;

const int MAX_V = 10;
const int MAX_E = 45;
const int INF = 100000000;

int dist[MAX_V][MAX_V];

int main() {
  while (true) {
    int n; scanf("%d", &n);
    if (n == 0) break;

    for (int i = 0; i < MAX_V; i++) {
      for (int j = 0; j < MAX_V; j++) dist[i][j] = (i == j ? 0 : INF);
    }

    int vnum = 0;
    for (int i = 0; i < n; i++) {
      int u, v, d; scanf("%d %d %d", &u, &v, &d);
      dist[u][v] = dist[v][u] = d;
      vnum = max(vnum, max(u, v) + 1);
    }

    // Warshall-Froyd
    for (int k = 0; k < vnum; k++) {
      for (int i = 0; i < vnum; i++) {
        for (int j = 0; j < vnum; j++) {
          dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);
        }
      }
    }

    int minV = -1;
    int minSum = INF;
    int ans = INF;
    for (int i = 0; i < vnum; i++) {
      int sum = 0;
      for (int j = 0; j < vnum; j++) {
        if (j != i) sum += dist[i][j];
      }
      if (sum < minSum) {
        minV = i;
        minSum = sum;
      }
    }
    printf("%d %d\n", minV, minSum);
  }
}