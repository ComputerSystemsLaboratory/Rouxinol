#include <stdio.h>

#define MAX_N 45

int main(){
  int N,i,dp[MAX_N] = {1,1};
  for(i = 2 ; i < MAX_N ; i++){
    dp[i] = dp[i-1] + dp[i-2];
  }
  scanf("%d",&N);
  printf("%d\n",dp[N]);
  return 0;
}