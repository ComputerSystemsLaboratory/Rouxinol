#include <iostream>
#include <vector>
using namespace std;
typedef long long ll;
#define MAX_N 100
#define LIMIT 20


int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int a[MAX_N];
  int n;

  cin >> n;
  for(int i=0;i<n;i++) {
    cin >> a[i];
  }
  // DP
  ll dp[n-1][LIMIT+1];
  for(int i=0;i<n-1;i++) {
    for(int j=0;j<=LIMIT;j++) {
      dp[i][j] = 0;
    }
  }
  dp[0][a[0]] = 1;
  for(int i=1;i<=n-2;i++) {
    for(int j=0;j<=LIMIT;j++) {
      if(j+a[i] <= LIMIT) dp[i][j] += dp[i-1][j+a[i]];
      if(j-a[i] >= 0) dp[i][j] += dp[i-1][j-a[i]];
    }
  }
  cout << dp[n-2][a[n-1]] << endl;
}