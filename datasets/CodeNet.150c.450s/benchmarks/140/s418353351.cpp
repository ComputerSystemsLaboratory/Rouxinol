#include<bits/stdc++.h>
using namespace std;
#define ll long long
pair< ll,pair<ll,ll> >edge[100010];
ll parent[10010];
ll root(ll x)
{
    if(parent[x]==x)
    {
        return x;
    }
    else
    {
        parent[x]=root(parent[x]);
        return parent[x];
    }
}
void un(ll a,ll b)
{
    a=root(a);
    b=root(b);
    parent[a]=parent[b];
}
ll kruskal(pair<ll,pair<ll,ll>>p[] , ll m )
{
    ll i,j,a,b,cost=0,c;
    for(i=0;i<m;i++)
    {
       a= p[i].second.first;
       b= p[i].second.second;
       c= p[i].first;
       if(root(a)!=root(b))
       {
           un(a,b);
           cost+=c;
       }
    }
    return cost;
}
void init()
{
    for(ll i=0;i<=10000;i++)
    {
        parent[i]=i;
    }
}
int main()
{
    ll n,m,i,j,a,b,c,ans=0; init();
    cin>>n>>m;
    for(i=0;i<m;i++)
    {
        cin>>a>>b>>c;
        edge[i]=make_pair(c,make_pair(a,b));
        edge[i]=make_pair(c,make_pair(b,a));
    }
    sort(edge,edge+m);
    ans=kruskal(edge,m);
    cout<<ans<<endl;
}

