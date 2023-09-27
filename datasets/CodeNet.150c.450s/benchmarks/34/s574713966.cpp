#include <stdio.h>
const int N=31;
int main(){
    int n,dp[N];
    dp[0]=1;
    dp[1]=1;
    dp[2]=2;
    for(int i=3;i<N;i++)dp[i]=dp[i-1]+dp[i-2]+dp[i-3];
    while(true){
        scanf("%d",&n);
        if(n==0)return 0;
        printf("%d\n",(dp[n]+3649)/3650);
    }
}
