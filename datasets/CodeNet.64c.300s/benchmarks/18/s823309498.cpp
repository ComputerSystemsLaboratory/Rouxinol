#include<stdio.h>
int main(){
    int i=2,n,dp[31];
    dp[0]=dp[1]=1;
    dp[2]=2;
    while(++i<31)
        dp[i]=dp[i-1]+dp[i-2]+dp[i-3];
    while(scanf("%d",&n),n)
        printf("%d\n",dp[n]/(10*365)+1);
}