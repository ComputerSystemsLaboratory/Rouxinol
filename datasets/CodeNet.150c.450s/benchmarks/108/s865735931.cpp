#include<bits/stdc++.h>
using namespace std;
#define clr(a,b) memset(a,b,sizeof(a))
int n;
int v,k,ttm;
vector<int> graph[105];
int dis[105];//到其他点的距离
int vis[105];//纪律顶点是否被访问
void bfs(int u)
{
    queue<int> qu;
    qu.push(u);
    dis[u]=0;
    vis[u]=1;
    while(!qu.empty())
    {
        int v=qu.front();qu.pop();
        for(int i:graph[v])
        {
            if(dis[i]||i==1){continue;}
            qu.push(i);
            dis[i]=dis[v]+1;
        }
    }
}
int main()
{
    clr(vis,0);
    cin>>n;
    for(int i=0;i<n;++i)
    {
        cin>>v>>k;
        while(k--)
        {
            cin>>ttm;
            graph[v].push_back(ttm);//连接的点
        }
    }
    bfs(1);
     cout<<1<<" "<<dis[1]<<endl;
    for(int i=2;i<=n;++i)
    {
         cout<<i<<" "<<(dis[i]?dis[i]:-1)<<endl;
    }
    return 0;
}

