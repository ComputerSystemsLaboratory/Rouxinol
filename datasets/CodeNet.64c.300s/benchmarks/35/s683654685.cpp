#include <stdio.h>
#define rep(i, n) for(int i = 0; i < n; ++i)

int main(void) {
  int n, i, j;
  scanf("%d", &n);
  char r[n][n];
  rep(i, n) rep(j, n) r[i][j] = 0;
  rep(i, n) {
    int u, k;
    scanf("%d%d", &u, &k);
    u--;
    rep(j, k) {
      int v;
      scanf("%d", &v);
      v--;
      r[u][v] = 1;
    }
  }
  rep(i, n) {
    rep(j, n - 1) printf("%d ", r[i][j]);
    printf("%d\n", r[i][n - 1]);
  }
  return 0;
}
