#include <stdio.h>
#include <string.h>

int dp[20][55][20];

int cnt_sum(int n, int s, int x){
  if(n < 0 || s < 0){
    return 0;
  }
  if(dp[n][s][x] != -1){
    return dp[n][s][x];
  }
  if(n == 0 && s == 0){
    return (1);
  }
  if(x>9){
    return (0);
  }
   
  return dp[n][s][x] = (cnt_sum(n-1, s-x, x+1) + cnt_sum(n, s, x+1));
}
int main(){
  int n, s;
  memset(dp,-1,sizeof(dp));
  while(1){
    scanf("%d %d", &n, &s);
    if(n == 0 && s == 0){
      break;
    }
    if(n >= 11 || s >= 46) printf("0\n");
    else printf("%d\n", cnt_sum(n, s, 0));
  }
  return 0;
}