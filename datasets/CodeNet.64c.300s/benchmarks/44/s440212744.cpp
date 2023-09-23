#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int N = 55;
const int M = 1000000007;

int n, m;
int a[N][N];

int main() {
  while (scanf("%d", &m), m) {
    memset(a, 0x3f, sizeof(a)); n = 0;
    for (int i = 0, u, v, w; i < m; i++) {
      scanf("%d%d%d", &u, &v, &w); a[u][v] = a[v][u] = w;
      n = max(n, max(u, v) + 1);
    }
    for (int k = 0; k < n; k++) {
      a[k][k] = 0;
      for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
          a[i][j] = min(a[i][j], a[i][k] + a[k][j]);
        }
      }
    }
    int ans = 0, mnd = 0x3f3f3f3f;
    for (int i = 0; i < n; i++) {
      int sum = 0;
      for (int j = 0; j < n; j++) { sum += a[i][j]; }
      if (mnd > sum) { ans = i; mnd = sum; }
    }
    printf("%d %d\n", ans, mnd);
  }
}