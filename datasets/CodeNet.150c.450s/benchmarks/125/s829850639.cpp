#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <vector>

using namespace std;
const int maxn=100+10;
int n;
vector<int> g[maxn];
int s[maxn],e[maxn];
int vis[maxn];
int t=1;
void dfs(int u)
{
    vis[u]=1;
    s[u]=t++;
    for(int i=0;i<g[u].size();i++)
    {
        int v=g[u][i];
        if(!vis[v])
        {
            dfs(v);
        }
    }
    e[u]=t++;
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
    memset(vis,0,sizeof(vis));
    for(int i=0;i<n;i++)
    {
        if(!vis[i])   dfs(i);
    }
    for(int i=0;i<n;i++)
    {
        printf("%d %d %d\n",i+1,s[i],e[i]);
    }
    return 0;
}