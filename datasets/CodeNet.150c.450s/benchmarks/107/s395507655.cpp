#include<stdio.h>
#include<string>
#include<iostream>
using namespace std;
int main(){
  string x,y;
  const int INF=(1<<29);
  int a,b,i,j,dp[1010][1010];
  cin >> x >> y;
  a=x.size(),b=y.size();
  for(i=0;i<=a;i++){
    for(j=0;j<=b;j++){
      dp[i][j]=INF;
    }
  }
  for(i=0;i<=a;i++){
    dp[i][0]=i;
  }
  for(i=0;i<=b;i++){
    dp[0][i]=i;
  }
  for(i=1;i<=a;i++){
    for(j=1;j<=b;j++){
      if(dp[i][j]>dp[i-1][j]+1){
        dp[i][j]=dp[i-1][j]+1;
      }
      if(dp[i][j]>dp[i][j-1]+1){
        dp[i][j]=dp[i][j-1]+1;
      }
      if(x[i-1]==y[j-1]){
        if(dp[i][j]>dp[i-1][j-1]){
          dp[i][j]=dp[i-1][j-1];
        }
      }
      else{
        if(dp[i][j]>dp[i-1][j-1]+1){
          dp[i][j]=dp[i-1][j-1]+1;
        }
      }
    }
  }
  printf("%d\n",dp[a][b]);
  return 0;
}
