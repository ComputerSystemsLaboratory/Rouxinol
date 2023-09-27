#include <bits/stdc++.h>
#define rep(i,a,b) for(int i=int(a);i<int(b);++i)
#define SIZE 200005
#define INF 1000000005LL
//#define INF 1e18
#define MOD 1000000007

using namespace std;
typedef long long int ll;
typedef pair <int,int> P;

int n;
ll p[105];
ll dp[105][105];

int main(){

  cin >> n;
  rep(i,0,n){
    cin >> p[i] >> p[i+1];
  }

  fill(dp[0],dp[105],INF);
  rep(i,0,104){
    dp[i][i+1] = 0;
  }

  rep(k,2,n+1) rep(i,1,n+1){
    int j = i+k;
    if(j>=n+2)continue;
    rep(l,i,j-1) {
      dp[i][j] = min(dp[i][j],dp[i][l+1] + dp[l+1][j] + p[i-1]*p[l]*p[j-1]);
      //cout << i<<j<<k<<l << " " << dp[i][j] << endl;
    }
  }

  cout << dp[1][n+1] << endl;

  return 0;
}

