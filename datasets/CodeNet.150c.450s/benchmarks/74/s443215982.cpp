#include <iostream>
#include <algorithm>
#define MAX_M 20
#define MAX_N 50000
#define INF 1000000000
using namespace std;

int c[MAX_M + 1];
int dp[MAX_N + 1];

void solve(int n, int m) {
  dp[0] = 0;
  for (int i = 1; i <= m; i++) {
    for (int j = c[i]; j <= n; j++) {
      dp[j] = min(dp[j], dp[j - c[i]] + 1);
    }
  }
  cout << dp[n] << endl;
}

void init() {
  for (int i = 0; i < MAX_N + 1; i++) {
    dp[i] = INF;
  }
}

int main() {
  int n, m;
  cin >> n >> m;
  for (int i = 1; i <= m; i++) {
    cin >> c[i];
  }

  init();

  solve(n, m);
  
  return 0;
}