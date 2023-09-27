#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>

using namespace std;
const int maxn=100+10;
const int INF=(1<<21);
int n;
int p[maxn];
int dp[maxn][maxn];
int main()
{
//    freopen("in.txt","r",stdin);
    scanf("%d",&n);
    for(int i=0; i<n; i++)
    {
        scanf("%d%d",&p[i],&p[i+1]);
    }

    for(int i=0; i<n; i++)
    {
        dp[i][i]=0;

    }
    for(int len=2;len<=n;len++)
    {
        for(int i=0;i<n-len+1;i++)
        {
            int j=i+len-1;
            dp[i][j]=INF;
            for(int k=i;k<j;k++)
            {
                dp[i][j]=min(dp[i][j],dp[i][k]+dp[k+1][j]+p[i]*p[k+1]*p[j+1]);
            }
        }
    }
    printf("%d\n",dp[0][n-1]);

    return 0;
}