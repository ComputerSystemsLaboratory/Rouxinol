#include <cstdio>
#include <algorithm>

using namespace std;

const long long INF = 1e12;
const int N_MAX = 100000;
int N;
int a[N_MAX+10];
long long dp[N_MAX+10] = {};

int main() {
  int i, j;
  scanf("%d", &N);
  for (i = 0; i < N; i++) {
    scanf("%d", &a[i]);
  }
  for (i = 0; i < N; i++) {
    dp[i] = INF;
  }
  for (i = 0; i < N; i++) {
    *lower_bound(dp, dp+N, a[i]) = a[i];
  }
  int ans = lower_bound(dp, dp+N, INF) - dp;
  //for (i = 0; i < N+1; i++) {
  //  for (j = 0; j < W+1; j++) {
  //    printf("%d ", dp[i][j]);
  // }
  //  printf("\n");
  // }
  printf("%d\n", ans);
  return 0;
}

