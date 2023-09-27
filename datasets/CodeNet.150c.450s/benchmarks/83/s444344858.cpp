#include <bits/stdc++.h>
using namespace std;

#define INF 1e+9

int N,W;
int w[101],v[101];
int memo[110][11000];

int knapsack(int i, int j){
	  if(j < 0) return -INF; // ??????????¶?????????????
	  if(i == N) return 0;   // ????????????????????????
	  if(memo[i][j] != -1) return memo[i][j]; //???????¨??????????

	  int ans= 0;
	  ans = max(knapsack(i+1,j), knapsack(i+1, j-w[i]) + v[i]);

	  memo[i][j] = ans;
	  return ans;
}

int _knapsack(int i, int j){
	  if(j < 0) return -INF; // ??????????¶?????????????
	  if(i == N) return 0;   // ????????????????????????

	  int ans= 0;
	  ans = max(knapsack(i+1,j), knapsack(i+1, j-w[i]) + v[i]);

	  return ans;
}

int knapsack_loop(){

	  int dp[N+1][W+1];
	  for(int i=0; i<=N; i++)
			for(int j=0; j<=W; j++) dp[i][j] = -INF;

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
	  return ans;
}



int main(){
	  cin >> N >> W;
	  for(int i=0; i<N; i++) cin >> v[i+1] >> w[i+1];
	  memset(memo,-1,sizeof(memo));
	  cout << knapsack_loop() << endl;
}