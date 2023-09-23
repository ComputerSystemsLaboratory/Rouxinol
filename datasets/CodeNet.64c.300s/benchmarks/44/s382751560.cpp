#include <climits>
#include <cstdio>
#include <iostream>

const int INF = INT_MAX/10;

using namespace std;

const int V_MAX = 10;
const int E_MAX = 45;

typedef pair<int, int> P; // v, cost

int main() {
  int N;
  while (cin >> N) {
    int V = 0;
    int d[V_MAX][V_MAX];
    if (N == 0) break;
    for (int i = 0; i < V_MAX; i++) {
      for (int j = 0; j < V_MAX; j++) {
        if (i == j) d[i][j] = 0;
        else d[i][j] = INF;
      }
    }
    for (int i = 0; i < N; i++) {
      int a, b, c;
      cin >> a >> b >> c;
      d[a][b] = c;
      d[b][a] = c;
      V = max(V, a); V = max(V, b);
    }
    for (int k = 0; k <= V; k++) {
      for (int i = 0; i <= V; i++) {
        for (int j = 0; j <= V; j++) {
          d[i][j] = min(d[i][j], d[i][k] + d[k][j]);
        }
      }
    }
    int m = INF;
    int ans = -1;
    for (int i = 0; i <= V; i++) {
      int sum = 0;
      for (int j = 0; j <= V; j++) {
        if (i != j) {
          if (d[i][j] != INF) {
            sum += d[i][j];
          }
        }
      }
      if (sum < m) {
        m = sum;
        ans = i;
      }
    }
    printf("%d %d\n", ans, m);
  }

  return 0;
}