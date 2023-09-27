#include <iostream>
using namespace std;
#define MAX_N 100
#define MAX_W 10000

int main()
{
  int N, W;
  cin >> N >> W;
  int v[MAX_N+1], w[MAX_N+1];
  int dp[MAX_N+1][MAX_W+1];

  for(int i=0; i<N; ++i){
    cin >> v[i] >> w[i];
  }
  for(int i=0; i<N+1; ++i){
    for(int j=0; j<W+1; ++j){
      dp[i][j] = -1;
    }
  }

  for(int j=0; j<W+1; ++j)
    dp[N][j] = 0;

  for(int i=N-1; i>=0; --i){
    for(int j=0; j<=W; ++j){
      if(j < w[i])
	dp[i][j] = dp[i+1][j];
      else
	dp[i][j] = max(dp[i+1][j], dp[i+1][j-w[i]]+v[i]);
    }
  }

  cout << dp[0][W] << endl;
}