#include <cstdio>
#include <cstring>
#include <iostream>

using namespace std;

const int INF = 0x3f3f3f3f;

int d[10][10];
int m;

void floyd() {
  for (int k = 0; k < m; ++k) {
    for (int i = 0; i < m; ++i) {
      for (int j = 0; j < m; ++j) {
        d[i][j] = min(d[i][j], d[i][k] + d[k][j]);
      }
    }
  }
}


int main() {
  int i, j, a, b, c, n;
  while (scanf("%d", &n) != EOF && n) {
    memset(d, 0x3f, sizeof(d));
    m = 0;
    while (n--) {
      scanf("%d%d%d", &a, &b, &c);
      d[a][b] = d[b][a] = c;
      m = max(m, max(a + 1, b + 1));
    }
    floyd();
    int ans, p, tmp;
    p = 0;
    ans = INF;
    for (i = 0; i < m; ++i) {
      tmp = 0;
      for (j = 0; j < m; ++j) {
        if (i == j) continue;
        tmp += d[i][j];
        if (tmp >= INF) break;
      }
      if (tmp < ans) {
        ans = tmp;
        p = i;
      }
    }
    printf("%d %d\n", p, ans);
  }
  return 0;
}