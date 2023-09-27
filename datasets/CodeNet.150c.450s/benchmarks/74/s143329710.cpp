#include <cstdio>
#include <algorithm>
using namespace std;

int main(){
    int i,j,n,m;
    scanf("%d %d",&n,&m);
    int dp[m+1][n+1];
    fill(dp[0],dp[m],1e9);
    int l[m+1];
    for(i=1;i<m+1;i++){
        scanf("%d",&l[i]);
    }
    sort(l,l+m+1);
    for(i=0;i<n+1;i++){
        dp[0][i]=1e9;
    }
    for(i=0;i<m+1;i++){
        dp[i][0]=0;
    }
    for(i=1;i<m+1;i++){
        for(j=1;j<n+1;j++){
            if(j-l[i]>=0){
                dp[i][j]=min(dp[i-1][j],dp[i][j-l[i]]+1);
            }
            else{
                dp[i][j]=dp[i-1][j];
            }
        }
    }
    int res=1e9;
    for(i=1;i<m+1;i++){
        res=min(res,dp[i][n]);
    }
    printf("%d\n",res);
    return 0;
}

