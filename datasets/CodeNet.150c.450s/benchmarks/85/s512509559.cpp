#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
int main(){
    int n=0;
    scanf("%d",&n);
    int A[101];
    int dp[101][101];
    int INF=1<<30;
    memset(dp,INF,sizeof(dp));
    memset(A,0,sizeof(A));
    for(int i=1;i<=n;i++){
        scanf("%d",&A[i-1]);
        scanf("%d",&A[i]);
    }
    for(int i=1;i<=n;i++){
        dp[i][i]=0;
    }
    for(int l=2;l<=n;l++){
        for(int i=1;i<=n-l+1;i++){
            int j=i+l-1;
            dp[i][j]=INF;
            for(int k=i;k<=j-1;k++){
                dp[i][j]=min(dp[i][j],dp[i][k]+dp[k+1][j]+A[i-1]*A[k]*A[j]);
            }
        }
    }
    printf("%d\n",dp[1][n]);
    return 0;
}

