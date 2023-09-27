#include<bits/stdc++.h>
#define inf 2147483647
#define ll long long
using namespace std;
struct node{
    int u,v;
    ll cost;
}edge[500005];
ll dis[10005];
int n,m,s;
void init()
{
    for(int i=0;i<n;i++) dis[i]=(i==s?0:inf);
}
bool Bellman_Ford()
{
    init();
    bool flag=true;
    for(int i=0;i<n;i++)
    {
        flag=true;
        for(int j=0;j<m;j++)
        if(dis[edge[j].v]>dis[edge[j].u]+edge[j].cost&&dis[edge[j].u]!=inf)
        {
            dis[edge[j].v]=dis[edge[j].u]+edge[j].cost;
            flag=false;
        }
        if(flag) return true;
    }
    for(int j=0;j<m;j++)
    if(dis[edge[j].v]>dis[edge[j].u]+edge[j].cost&&dis[edge[j].u]!=inf) return false;
    return true;
}
int main()
{
    cin>>n>>m>>s;
    for(int i=0;i<m;i++) cin>>edge[i].u>>edge[i].v>>edge[i].cost;
    if(Bellman_Ford())
    for(int i=0;i<n;i++)
	if(dis[i]!=inf) cout<<dis[i]<<endl;
	else cout<<"INF"<<endl;
    else cout<<"NEGATIVE CYCLE"<<endl;
    return 0;
}
