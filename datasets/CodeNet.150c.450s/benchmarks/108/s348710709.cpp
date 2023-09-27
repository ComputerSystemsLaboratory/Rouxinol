#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <vector>
#include <queue>
using namespace std;
const int INF=1<<21;
const int maxn=100+10;
int n;
vector<int> g[maxn];
int vis[maxn];
int d[maxn];
void bfs(int s)
{
    queue<int> que;
    que.push(s);
    vis[s]=1;
    d[s]=0;
    while(!que.empty())
    {
        int u=que.front();que.pop();
        for(int i=0;i<g[u].size();i++)
        {
            int v=g[u][i];
            if(!vis[v])
            {
                que.push(v);
                vis[v]=1;
                d[v]=min(d[v],d[u]+1);

            }
        }
    }
}
int main()
{
//    freopen("in.txt","r",stdin);
    scanf("%d",&n);
    int no,cnt,dd;
    for(int i=0;i<n;i++)
    {
        scanf("%d%d",&no,&cnt);
        for(int j=0;j<cnt;j++)
        {
            scanf("%d",&dd);
            g[no-1].push_back(dd-1);
        }
    }
    for(int i=0;i<n;i++) d[i]=INF;
    bfs(0);
    for(int i=0;i<n;i++)
    {
        printf("%d %d\n",i+1,d[i]==INF?-1:d[i]);
    }

    return 0;
}