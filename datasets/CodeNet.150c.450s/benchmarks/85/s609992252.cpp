#include <iostream>
using namespace std;

template<typename T, typename U> void dmin(T &x, U y) { if(x > y) x = y; }

const int MAX_N = 100;
const int INF = 1001001001;

int main() {
  int n, r, c;
  int rc[MAX_N][2];
  cin >> n;
  for (int i=0; i<n; i++) {
    cin >> r >> c;
    rc[i][0] = r; rc[i][1] = c;
  }

  int dp[MAX_N][MAX_N];
  for (int i=0; i<n; i++) {
    for (int j=0; j<n; j++) {
      dp[i][j] = INF;
    }
    dp[i][i] = 0;
  }

  for (int l=2; l<=n; l++) {
    for (int i=0; i+l-1<n; i++) {
      for (int j=1; j<l; j++) {
        dmin(dp[i][i+l-1], dp[i][i+j-1] + rc[i][0]*rc[i+j-1][1]*rc[i+l-1][1] + dp[i+j][i+l-1]);
      }
    }
  }

  cout << dp[0][n-1] << endl;
  return 0;
}