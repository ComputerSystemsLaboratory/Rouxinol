#include <cstdio>
#include <cstring>
#include <iostream>
#include <algorithm>
using namespace std;

const int MAXN = 50000;
const int INF = 114514;

int main()
{
  int N, M;
  int coin[21];
  int dp[MAXN + 1];

  memset(dp, INF, sizeof(dp));
  dp[0] = 0;

  scanf("%d%d", &N, &M);
  for (int i = 0; i < M; i++) scanf("%d", &coin[i]);

  for (int i = 0; i < M; i++){
    for (int j = coin[i]; j <= N; j++){
      dp[j] = min(dp[j], dp[j - coin[i]] + 1);
    }
  }

  printf("%d\n", dp[N]);

  return (0);
}