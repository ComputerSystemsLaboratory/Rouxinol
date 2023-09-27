#include<iostream>
#include<cstdio>
#include<cstring>
#include<cstdlib>
#include<cmath>
#include<cctype>
#include<queue>
#include<vector>
#include<algorithm>

using namespace std;
typedef long long LL;
#define N 2010
#define INF 0x3f3f3f

int n;
int maps[N][N];
int dist[N], vis[N];

void Init(int m)
{
    for(int i=0; i<=m; i++)
        for(int j=0; j<=m; j++)
        maps[i][j]=i==j ? 0 : INF;
}

void dij(int s, int m)
{
    for(int i=0; i<=m; i++)
        dist[i]=maps[s][i];
    memset(vis, 0, sizeof(vis));
    vis[s]=1;

    for(int i=0; i<=m; i++)
    {
        int Min=INF, index=-1;
        for(int j=0; j<=m; j++)
        {
            if(!vis[j]&&dist[j]<Min)
            {
                Min=dist[j];
                index=j;
            }
        }
        if(index==-1) continue;
        vis[index]=1;
        for(int j=0; j<=m; j++)
        {
            if(!vis[j]&&dist[j]>Min+maps[index][j])
                dist[j]=Min+maps[index][j];
        }
    }
}

int main()
{
    int a, b, c, Max, index, sum;
    while(scanf("%d", &n), n)
    {
        Init(1100);
        Max=-1;
        for(int i=1; i<=n; i++)
        {
            scanf("%d%d%d", &a, &b, &c);
            maps[a][b]=maps[b][a]=min(maps[a][b], c);
            Max=max(Max, a);
            Max=max(Max, b);
        }
        int s;
        sum=INF;
        for(int i=0; i<=Max; i++)
        {
            dij(i, Max);
            s=0;
            for(int j=0; j<=Max; j++)
                s+=dist[j];
            if(s<sum)
            {
                index=i;
                sum=s;
            }
        }
        printf("%d %d\n", index, sum);
    }
    return 0;
}