#include<bits/stdc++.h>

#define REP(i,s,n) for(int i=s;i<n;++i)
#define rep(i,n) REP(i,0,n)

using namespace std;

#define MAX_N 110
#define MAX_W 10100

int n,P[MAX_N],V[MAX_N], C;
int dp[MAX_N][MAX_W];

int main() {
  cin >> n >> C;
  rep(i,n) cin >> P[i] >> V[i];
  for(int i=1;i<=n;++i) {
    for(int sum_V=0;sum_V<=C;++sum_V) {
      if( sum_V-1 >= 0 ) {
        //dp[i][sum_V] = dp[i][sum_V-1];
      }
      dp[i][sum_V] = max(dp[i][sum_V],dp[i-1][sum_V]);
      if( sum_V-V[i-1] >= 0 ) {
        dp[i][sum_V] = max(dp[i][sum_V],
                           dp[i-1][sum_V-V[i-1]]+P[i-1]);
      }
    }
  }
  cout << dp[n][C] << endl;
  return 0;
}
 