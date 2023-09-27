#include<stdio.h>
int n;
int dp[30];
int main(){
    dp[0]=1;
    dp[1]=2;
    dp[2]=4;
    for(int i=3;i<30;i++){
        dp[i]=dp[i-3]+dp[i-2]+dp[i-1];
    }
    while(1){
        scanf("%d",&n);
        if(n==0) return 0;
        printf("%d\n",(int)((dp[n-1]+9)/10+364)/365);
    }
}