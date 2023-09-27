#include <iostream>
#include <algorithm>
#define MAX_N 101
#define MAX_W 10001
using namespace std;

int v[MAX_N], w[MAX_N];
int dp[MAX_N][MAX_W];

void solve(int N, int W) {
  for (int i = 1; i <= N; i++) {
    for (int j = 0; j <= W; j++) {
      if (j - w[i] < 0) dp[i][j] = dp[i - 1][j];
      else dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - w[i]] + v[i]);
    }
  }
  cout << dp[N][W] << endl;
}

void init() {
  for (int i = 0; i < MAX_N; i++) {
    v[i] = 0;
    w[i] = 0;
    for (int j = 0; j < MAX_W; j++) {
      dp[i][j] = 0;
    }
  }
}

int main() {
  init();
  int N, W;
  cin >> N >> W;
  for (int i = 1; i <= N; i++) {
    cin >> v[i] >> w[i];
  }

  solve(N, W);

  return 0;
}