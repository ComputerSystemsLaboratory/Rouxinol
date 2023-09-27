#include<cstdio>
#include<algorithm>
using namespace std;
int n,W;
int v[100],w[100];
int dp[10001];
int main(){
    scanf("%d %d",&n,&W);
    for(int i=0;i<n;i++){
        scanf("%d %d",v+i,w+i);
    }
    fill(dp,dp+W+1,-1);
    dp[0]=0;
    for(int i=0;i<n;i++){
        for(int j=W;j>=0;j--){
            if(j-w[i]>=0&&dp[j-w[i]]>=0) dp[j]=max(dp[j-w[i]]+v[i],dp[j]);
        }
    }
    int res=0;
    for(int i=0;i<=W;i++){
        res=max(res,dp[i]);
    }
    printf("%d\n",res);
    return 0;
}