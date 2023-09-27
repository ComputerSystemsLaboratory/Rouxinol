#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <vector>
#include <queue>
#include <cmath>
using namespace std;
const int maxn=100+10;
const int INF=1<<21;
int n;
int cost[maxn][maxn];
int mincost[maxn];
int vis[maxn];
void prim(int s)
{
    fill(mincost,mincost+n,INF);
    memset(vis,0,sizeof(vis));
    mincost[s]=0;
    int res=0;
    while(true)
    {
        int v=-1;
        for(int u=0; u<n; u++)
        {
            if(!vis[u]&&(v==-1||mincost[u]<mincost[v])) v=u;
        }
        if(v==-1) break;
        vis[v]=1;
        res+=mincost[v];
        for(int i=0; i<n; i++)
        {
            if(cost[v][i]!=-1)   mincost[i]=min(mincost[i],cost[v][i]);
        }

    }
    printf("%d\n",res);




}
int main()
{
//    freopen("in.txt","r",stdin);
    scanf("%d",&n);
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            scanf("%d",&cost[i][j]);
        }
    }
    prim(0);

    return 0;
}