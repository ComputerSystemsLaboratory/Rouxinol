#include <bits/stdc++.h>
 
using namespace std;
typedef long long ll;
 
struct edge{
    ll des;
    ll w;
};
 
struct node{
    ll id;
    ll dp;
};
 
ll n,m;
vector <edge> adj[10007];
ll ans;
bool mark[10007];
ll Min[10007];
 
bool operator<(node a,node b)
{
    return a.dp>=b.dp;
}
 
void prim()
{
    fill(Min,Min+10007,1e10);
 
    priority_queue <node> q;
 
    node nd;
    nd.id=0;
    nd.dp=0;
    q.push(nd);
 
    for(int i=1;i<n;i++)
    {
        nd.id=i;
        nd.dp=1e8;
        q.push(nd);
    }
 
    while(q.size()>0)
    {
        nd=q.top();
        q.pop();
        ll u=nd.id;
 
        if(mark[u])
            continue;
 
        Min[u]=nd.dp;
        ans+=nd.dp;
        mark[u]=1;
 
        for(ll i=0;i<adj[u].size();i++)
        {
            ll v=adj[u][i].des;
            ll val=adj[u][i].w;
            if(Min[v]>val)
            {
                Min[v]=val;
                node nn;
                nn.id=v;
                nn.dp=val;
                q.push(nn);
            }
        }
    }
}
 
int main()
{
    cin>>n>>m;
    for(ll i=0;i<m;i++)
    {
        ll x,y;
        edge e;
        cin>>x>>y>>e.w;
        e.des=y;
        adj[x].push_back(e);
        e.des=x;
        adj[y].push_back(e);
    }
    prim();
    cout<<ans<<endl;
}