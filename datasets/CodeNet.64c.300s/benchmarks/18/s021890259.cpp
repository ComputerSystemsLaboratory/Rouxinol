#include <stdio.h>
#include <math.h>

#define N 30

int main(void) {
  int n = 0;
  int dp[N + 1] = {0};

  scanf("%d", &n);

  dp[0] = 1;

  while (n != 0) {
    for (int i = 1; i <= n; i++) {
      if (i == 1) {
	dp[1] = dp[i - 1];
      } else if (i == 2) {
	dp[2] = dp[i - 1] + dp[i - 2];
      } else {
	dp[i] = dp[i - 3] + dp[i - 2] + dp[i - 1];
      }
    }

    int years = (int) ceil((dp[n] / 10.0) / 365.0);

    printf("%d\n", years);

    scanf("%d", &n);    
  }
}