#include <stdio.h>
#include <string.h>
#define rep(i, n) for(int i = 0; i < n; ++i)
#define repi(i, n) for(int i = 1; i < n; ++i)

int max(int a, int b) {
  return a > b ? a : b;
}

int main(void) {
  int n;
  scanf("%d", &n);
  rep(i, n) {
    char x[1500], y[1500];
    int h, w;
    scanf("%s", x);
    scanf("%s", y);
    h = strlen(x), w = strlen(y);
    int dp[h][w], len[w], maxs = 0;
    rep(j, h) rep(k, w) dp[j][k] = 0;
    rep(j, w) if(x[0] == y[j]) dp[0][j] = 1, maxs = 1;
    len[0] = 0;
    repi(j, w) len[j] = max(dp[0][j - 1], len[j - 1]);
    repi(j, h) {
      rep(k, w) if(x[j] == y[k]) {
        dp[j][k] = len[k] + 1;
        if(maxs < dp[j][k]) maxs = dp[j][k];
      }
      repi(k, w) len[k] = max(dp[j][k - 1], max(len[k], len[k - 1]));
      /*rep(k, w) printf("%d ", len[k]);
      printf("\n");*/
    }
    /*printf("\n");
    rep(j, h) {
      rep(k, w) printf("%d ", dp[j][k]);
      printf("\n");
    }*/
    printf("%d\n", maxs);
  }
  return 0;
}
