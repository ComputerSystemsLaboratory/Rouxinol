#include<cstdio>
#include<algorithm>
using namespace std;
const int INF = 1000000000;

int n,m;
int c[20];
int dp[21][50001];

int main(){
  scanf("%d %d",&n,&m);
  for(int i=0;i<m;i++) scanf("%d",c+i);
  fill(dp[0],dp[0]+21*50001,INF);
  dp[0][0] = 0;
  for(int i=1;i<=m;i++){
    for(int j=0;j<=n;j++){
      if(j-c[i-1]>=0){
        dp[i][j] = min(dp[i][j-c[i-1]]+1,dp[i-1][j]);
      }else{
        dp[i][j] = dp[i-1][j];
      }
    }
  }
  printf("%d\n",dp[m][n]);
  return 0;
}