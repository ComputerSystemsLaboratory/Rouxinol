#include <stdio.h>
typedef long long ll;

int main(void) {
  ll i, j, k, n;
  scanf("%lld", &n);
  ll dp[n - 1][21], num[n];
  for(i = 0; i < n; ++i) scanf("%lld", &num[i]);
  for(i = 0; i < n - 1; ++i) for(j = 0; j < 21; ++j) dp[i][j] = 0;
  dp[0][num[0]] = 1;
  for(i = 1; i < n - 1; ++i) {
    for(j = 0; j < 21; ++j) {
      if(j + num[i] <= 20) dp[i][j + num[i]] += dp[i - 1][j];
      if(j - num[i] >= 0) dp[i][j - num[i]] += dp[i - 1][j];
    }
  }
  /*for(i = 0; i < n - 1; ++i) {
    for(j = 0; j < 21; ++j) printf("%lld ", dp[i][j]);
    printf("\n");
  }*/
  printf("%lld\n", dp[n - 2][num[n - 1]]);
  return 0;
}
