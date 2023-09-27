#include <stdio.h>
const int N=110;
const int INF=1<<30;
int min(int a,int b){
    return a>b?b:a;
}
int main(){
    int n,dp[N][N],a[N];
    scanf("%d%d%d",&n,&a[0],&a[1]);
    for(int i=1;i<n;i++)scanf("%d%d",&a[i],&a[i+1]);
    for(int k=1;k<n;k++){
        for(int i=0;i<n-k;i++){
            dp[i][i+k]=INF;
            for(int j=i;j<i+k;j++)dp[i][i+k]=min(dp[i][i+k],dp[i][j]+dp[j+1][i+k]+a[i]*a[j+1]*a[i+k+1]);
        }
    }
    printf("%d\n",dp[0][n-1]);
}
