#include<stdio.h>
#include<cstdio>
#include<algorithm>

using namespace std;

#define MAX_N 50005
#define MAX_C 10005
#define MAX_M 21

int dp[MAX_M][MAX_N];
int n,m;
int v[MAX_M];

int solve(int n,int m){
  //fill(dp[0],dp[0]+MAX_N+1,0);
  //printf("haitteru!");
  for(int i=0;i<=n;i++){
    dp[0][i]=0;
    dp[1][i]=i;
  }
  for(int i=0;i<=m;i++){
    dp[i][0]=0;
  }
  //printf("haitteru!");
  //printf("n=%d,m=%d\n",n,m);
  for(int i=2;i<=m;i++){
    for(int j=1;j<=n;j++){
      if(j<v[i]){
        dp[i][j]=dp[i-1][j];
        //printf("(%d,%d)=%d\n",i,j,dp[i][j]);
      }else{
        dp[i][j]=min(dp[i-1][j],dp[i][j-v[i]]+1);
        //printf("(%d,%d)=%d\n",i,j,dp[i][j]);
      }
    }
  }
  return dp[m][n];
}

int main()
{
  scanf("%d%d",&n,&m);
  for(int i=0;i<m;i++) scanf("%d",&v[i+1]);

  int res=solve(n,m);

  printf("%d\n",res);

  return 0;
}