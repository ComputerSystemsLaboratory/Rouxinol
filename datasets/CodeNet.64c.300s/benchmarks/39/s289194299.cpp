#include <stdio.h>
#include <string.h>

int dp[51][5];

void init() {
  memset(dp, 0, sizeof(dp));
  dp[0][0] = 1;
  for (int i = 0; i <= 50; ++i) {
    for (int j = 1; j <= 4; ++j) {
      for (int t = 0; t < 10 && t <= i; ++t) {
        dp[i][j] += dp[i-t][j-1];
      }
    }
  }
}

int main() {
  //freopen("SumOf4Integers.in", "r", stdin);
  int n;
  init();
  while (scanf("%d", &n) == 1) {
    int result = dp[n][4];
    printf("%d\n", result);
  }
  return 0;
}