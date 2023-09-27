#include <iostream>
#include <algorithm>
using namespace std;

int N, C;
int V[101], W[101];
int dp[101][10001];

int maxValue() {
  for (int i = 0; i <= N; i++) dp[i][0] = 0;
  for (int j = 0; j <= C; j++) dp[0][j] = 0;
  
  for (int i = 1; i <= N; i++) {
    for (int j = 1; j <= C; j++) {
      if (j < W[i]) dp[i][j] = dp[i - 1][j];
      else dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - W[i]] + V[i]);
    }
  }
  
  return dp[N][C];
}

int main(void){
  cin >> N >> C;
  for (int i = 1; i <= N; i++) cin >> V[i] >> W[i];
  V[0] = W[0] = 0;

  cout << maxValue() << endl;

  return 0;
}