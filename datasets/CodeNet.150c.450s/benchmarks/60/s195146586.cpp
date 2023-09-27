#include<bits/stdc++.h>
using namespace std;
#define maxn 10005
int n,u,k;
int g[maxn][maxn];
int main()
{
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        int v;
        scanf("%d%d",&u,&k);
        for(int j=1;j<=k;j++)
        {
            scanf("%d",&v);
            g[u][v]=1;
        }
    }

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<n;j++)
        {
            printf("%d ",g[i][j]);
        }
        printf("%d\n",g[i][n]);
    }

    return 0;
}