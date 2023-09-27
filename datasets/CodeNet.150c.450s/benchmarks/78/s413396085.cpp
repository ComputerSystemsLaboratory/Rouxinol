#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;
int n;
int sum[222];

//int dp[1111111][222];
int dp[2][1111111];

/*
int solve(int s,int i,int f){
  //if(!s) return 0;
  if(i >= m) return s;
  if(dp[s][i])return dp[s][i];

  int ret = 1 << 28;
  if(!((sum[i] + 1) % f)){
    for(int j = 0;s - sum[i] * j >= 0 ; j++){
      ret = min(ret,solve(s - sum[i] * j,i + 1,f) + j);
    }
  }
  ret = min(ret,solve(s,i + 1,f));

  return dp[s][i] = ret;
}
*/
int solve(int s,int f){
  if(!s) return 0;
  if(dp[f-1][s]) return dp[f-1][s];

  int ret = 1 << 28;
  for(int i = 0; s >= sum[i]; i++){
    if(!((sum[i] + 1) % f)){
      ret = min(ret,solve(s - sum[i],f) + 1);
    }
  }
  return dp[f-1][s] = ret;
}

int main(void){
  sum[0] = 1;
  for(int i = 1; sum[i-1] <= 1000000; i++){
    sum[i] = sum[i-1] * (i + 3) / i;
  }
  for(int i = 1; i < 1000000; i++){
    solve(i,1);
    solve(i,2);
  }
  //puts("ok");
  while(1){
    scanf("%d",&n); if(!n) break;
    printf("%d %d\n",dp[0][n],dp[1][n]);
  }
}