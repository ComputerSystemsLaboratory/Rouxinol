#include <iostream>
#include <algorithm>
#include <cstdio>
#include <vector>
#include <stack>
using namespace std;
#define maxn 105
const int WHITE = 0;
const int GRAY  = 1;
const int BLACK = 2;
int g[maxn][maxn];
int d[maxn],f[maxn];
stack<int> s;
int color[maxn];
int t,n;
void dfs_visit(int u)
{
    color[u]=GRAY;
    d[u]=++t;
    for(int v=1;v<=n;v++)
    {
        if(g[u][v]==0) continue;
        if(color[v]==WHITE)
            dfs_visit(v);
    }
    color[u]=BLACK;
    f[u]=++t;
}
void dfs()
{
    for(int u=1;u<=n;u++)
        color[u]=WHITE;
    for(int u=1;u<=n;u++)
    {
        if(color[u]==WHITE)
            dfs_visit(u);
    }
    for(int u=1;u<=n;u++)
        printf("%d %d %d\n",u,d[u],f[u]);
}
int main()
{
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        int u,k;
        scanf("%d%d",&u,&k);
        for(int j=1;j<=k;j++)
        {
            int v;
            scanf("%d",&v);
            g[u][v]=1;
        }
    }
    dfs();
    return 0;
}