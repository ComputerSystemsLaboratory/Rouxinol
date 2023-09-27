#include <bits/stdc++.h>

int n, m;
int c[32];
int dp[65536];

const int INF = (1 << 30);

int main() {
  scanf("%d %d", &n, &m);
  for(int i = 0; i < m; ++i) {
    scanf("%d", &c[i]);
  }
  for(int& I : dp) I = INF;

  dp[0] = 0;
  for(int i = 0; i < m; ++i) {
    for(int j = c[i]; j <= n; ++j) {
      dp[j] = std::min(dp[j], dp[j-c[i]] + 1);
    }
  }

  printf("%d\n", dp[n]);
  
  
  return 0;
}