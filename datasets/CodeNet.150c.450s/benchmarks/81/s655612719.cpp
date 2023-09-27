#include<bits/stdc++.h>
using namespace std;
const int maxn = 10;
const int maxe = 100;
int ecnt;
struct Edge{
    int to;
    int val;
    int nxt;
}edge[maxe];
int node[maxn];
void init()
{
    memset(node,-1,sizeof node);
    ecnt = 0;
}
void addedge(int from,int to,int val)
{
    edge[ecnt].nxt = node[from];
    edge[ecnt].to = to;
    edge[ecnt].val = val;
    node[from] = ecnt++;
}
int d[maxn];
int V;  //结点数
const int INF = 0x3f3f3f3f;
bool bellman_ford(int s){ //返回true代表有负环
    for(int i=0;i<V;++i)    d[i]=INF;
    d[s]=0;
    bool update;int now;
    for(int i=0;i<V;++i){
        update=false;
        for(int j=0;j<V;++j){
            now=node[j];
            while(now!=-1)
            {
                Edge &e=edge[now];
                if(d[e.to]>d[j]+e.val)
                {
                    d[e.to]=d[j]+e.val;
                    update=true;
                }
                now=e.nxt;
            }
        }
        if(!update) return false;
    }
    return true;
}
bool vis[maxn];
int D[maxn];
int main()
{
    ios::sync_with_stdio(false);
    int m;
    V=10;
    while(cin>>m&&m)
    {
        init();
        int u,v,w;
        memset(vis,0,sizeof vis);
        while(m--)
        {
            cin>>u>>v>>w;
            addedge(u,v,w);
            addedge(v,u,w);
            vis[u]=vis[v]=true;
        }
        for(int i=0;i<10;++i)
        {
            if(!vis[i]) continue;
            D[i]=0;
            bellman_ford(i);
            for(int j=0;j<10;++j)
                if(vis[j])
                    D[i]+=d[j];
        }
        int sm=0;
        for(int i=1;i<10;++i)   if(vis[i]&&D[sm]>D[i])  sm=i;
        cout<<sm<<" "<<D[sm]<<endl;
    }
    return 0;
}

