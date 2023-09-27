#include<cstdio>
using namespace std;

const int N = 1000000;
int dp[2][N+1];

int main(){
  for(int i=0;i<=N;i++)dp[0][i] = dp[1][i] = N;
  dp[0][0] = dp[1][0] = 0;

  int val = 1;
  for(int i=1;val<=N;i++){
    for(int j=0;j+val<=N;j++){
      int nxt = j+val;
      if(dp[0][nxt]>dp[0][j])dp[0][nxt] = dp[0][j] + 1;
      if( (val&1) && (dp[1][nxt]>dp[1][j]))dp[1][nxt] = dp[1][j] + 1;
    }
    val *= (i+3), val /= i;
  }

  int n;
  while(scanf("%d",&n),n)printf("%d %d\n",dp[0][n],dp[1][n]);
}