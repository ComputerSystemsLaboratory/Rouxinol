#include<cstdio>
#include<algorithm>
#define INF 50001
using namespace std;
int dp[50001];
int c[200];
int main(){
    int n,m;
    scanf("%d %d",&n,&m);
    for(int i=0;i<m;i++) scanf("%d",c+i);
    fill(dp,dp+n+1,INF);
    for(int i=0;i*c[0]<=n;i++) dp[i*c[0]]=i;
    for(int i=1;i<m;i++){
        for(int j=0;j<=n;j++){
            if(j-c[i]>=0) dp[j]=min(dp[j-c[i]]+1,dp[j]);
        }
    }
    printf("%d\n",dp[n]);
    return 0;
}