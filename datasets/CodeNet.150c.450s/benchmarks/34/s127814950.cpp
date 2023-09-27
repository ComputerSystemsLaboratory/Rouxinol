#include <cstdio>
 
#define MAX 31
 
int main(){
  int dp[MAX] = {1,1,2};
 
  for(int i = 3 ; i < MAX ; i++){
    dp[i] = dp[i-1] + dp[i-2] + dp[i-3];
  }
 
  int n;
  while(scanf("%d" ,&n),n){
    printf("%d\n" ,dp[n]/3650+1);
  }
 
  return 0;
}