#include <stdio.h>
int main(){
    int dp[50010],n,m,temp;
    scanf("%d%d",&n,&m);
    dp[0]=0;
    for(int i=1;i<=n;i++)dp[i]=1<<30;
    while(m--){
        scanf("%d",&temp);
        for(int i=temp;i<=n;i++)if(dp[i-temp]<dp[i])dp[i]=dp[i-temp]+1;
    }
    printf("%d\n",dp[n]);
}