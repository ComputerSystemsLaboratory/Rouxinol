#include<bits/stdc++.h>
using namespace std;

enum { maxn = 20, INF = 10000000000000LL };

typedef long long LL;
LL G[maxn][maxn];
int vis[maxn];
LL d[maxn][maxn];
int inq[maxn];
int m;

void spfa(int src)
{
    memset(inq, 0, sizeof inq);
    for(int i = 0; i < maxn; i++) d[src][i] = INF;
    d[src][src] = 0LL;
    queue< int > q;
    while(!q.empty()) q.pop();
    q.push(src);
    inq[src] = 1;
    while(!q.empty())
    {
        int u = q.front();
        q.pop();
        for(int i = 0; i < maxn; i++)
        {
            if(G[u][i] != -1)
            {
                if(d[src][u] + G[u][i] < d[src][i])
                {
                    d[src][i] = d[src][u] + G[u][i];
                    if(!inq[i])
                    {
                        inq[i] = 1;
                        q.push(i);
                    }
                }
            }
        }
        inq[u] = 0;
    }
}

int main()
{
    while(~scanf("%d", &m), m)
    {
        memset(vis, 0, sizeof(vis));
        memset(G, -1, sizeof(G));
        memset(d, 0, sizeof(d));
        for(int i = 0; i < m; i++)
        {
            int a, b;
            LL c;
            scanf("%d%d%lld", &a, &b, &c);
            G[a][b] = G[a][b] == -1? c : min(G[a][b], c);
            G[b][a] = G[b][a] == -1? c: min(c, G[b][a]);
            vis[a] = vis[b] = 1;
        }
        for(int i = 0; i < maxn; i++)
            if(vis[i])
                spfa(i);
        LL ans = INF;
        int pt = -1;
        for(int i = 0; i < maxn; i++)
        {
            LL sum = 0;
            if(vis[i])
            {
                for(int j = 0; j < maxn; j++)
                {
                    if(vis[j])
                    {
                        sum += d[i][j];
                    }
                }
                if(sum < ans)
                {
                    ans = sum;
                    pt = i;
                }
            }
        }
        printf("%d %lld\n", pt, ans);
    }
    return 0;
}
/*

6     
0 1 80
1 2 20
0 2 60
2 3 50
3 4 60
1 4 90
2
0 1 1
1 2 1
0


*/