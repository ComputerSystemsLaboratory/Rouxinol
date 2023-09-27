#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

struct node{
    int id;
    ll dp;
};

struct edge{
    int des;
    ll w;
};

int n,m;
vector <edge> adj[100007];
ll Min[100007];
bool mark[100007];

bool operator<(node a,node b)
{
        return a.dp>=b.dp;
}


void prim(int u)
{
    fill(Min,Min+100007,1e11);
    Min[u]=0;
    node nd;
    nd.id=u;
    nd.dp=0;

    priority_queue <node> q;
    q.push(nd);

    while(q.size()>0)
    {
        nd=q.top();
        q.pop();
        if(mark[nd.id])
            continue;
        mark[nd.id]=1;
        int u=nd.id;

        for(int i=0;i<adj[u].size();i++)
        {
            int v=adj[u][i].des;
            int val=adj[u][i].w;

            if(Min[v]<=val+nd.dp)
                continue;
            Min[v]=val+nd.dp;
            node nn;
            nn.id=v;
            nn.dp=val+nd.dp;
            q.push(nn);
        }
    }
}

int main()
{
    int u;
    cin>>n>>m>>u;
    for(int i=0;i<m;i++)
    {
        int x,y;
        edge e;
        cin>>x>>y>>e.w;
        e.des=y;
        adj[x].push_back(e);
    }
    prim(u);
    for(int i=0;i<n;i++)
        {
            if(Min[i]<1e11)
                cout<<Min[i]<<endl;
            else
                cout<<"INF"<<endl;
        }
}