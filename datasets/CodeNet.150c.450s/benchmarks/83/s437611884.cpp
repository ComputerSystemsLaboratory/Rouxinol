#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef vector<vi> vvi;


#define INF 1e+9


int main(){


	  int N,W; cin >> N >> W;
	  int v[N+1],w[N+1];
	  for(int i=1; i<=N; i++) cin >> v[i] >> w[i];

	  vvi dp(N+1,vi(W+1,-INF));
	  dp[0][0] = 0;
	  for(int i=1; i<=N; i++){
			for(int j=0; j<=W; j++){
				  dp[i][j] = max(dp[i][j], dp[i-1][j]);
				  if(j-w[i] < 0) continue;
				  dp[i][j] = max(dp[i][j], dp[i-1][j-w[i]] + v[i]);
			}
	  }
	  int ans=0;
	  for(int i=0; i<=W; i++) ans = max(ans,dp[N][i]);
	  cout << ans << endl;
	  

}