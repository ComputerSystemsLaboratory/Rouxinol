#include<stdio.h>

int n,i;
int dp[31];
int main(){
  dp[0]=1;
  dp[1]=1;
  dp[2]=2;
  dp[3]=4;
  for(i=4;i<=30;i++){
    dp[i]=dp[i-1]*2-dp[i-4];
  }
  
  while(1){
    scanf("%d",&n);
    if(n==0)break;
    printf("%d\n",(dp[n]+3649)/3650);
  }
  return 0;
}