#include<iostream>
using namespace std;
#define REP(i,n) for(int i=0;i<(int)(n);i++)

const int NMAX = 120, WMAX = 10020;
int dp[NMAX][WMAX];
int w[NMAX], v[NMAX];

int main() {
  int N, W;
  cin >> N >> W;
  REP(i, N) {
    cin >> v[i+1] >> w[i+1];
  }

  for (int m = 0; m <= W; m++) {
    for (int i = 1; i <= N; i++) {
      if (m - w[i] >= 0)
        dp[i][m] = max(dp[i-1][m], dp[i-1][m-w[i]] + v[i]);
      else
        dp[i][m] = dp[i-1][m];
    }
  }

  cout << dp[N][W] << endl;
}