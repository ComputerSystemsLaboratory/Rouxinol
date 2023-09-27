/* competitive programming circle traP */
/* template */
#include <stdio.h>

int main(){
  // initialize
  int dp[31];
  dp[0] = 1;
  dp[1] = 1;
  dp[2] = 2;
  for(int n=3;n<=30;n++){
    dp[n] = dp[n-1];
    dp[n] += dp[n-2];
    dp[n] += dp[n-3];
  }
  for(int n=0;n<=30;n++){
    dp[n] = (dp[n]+3650-1)/3650;
  }
  // in/out
  while(true){
    int n;
    scanf("%d",&n);
    if(n==0)break;
    printf("%d\n",dp[n]);
  }
  return 0;
}