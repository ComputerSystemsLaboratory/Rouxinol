#include<bits/stdc++.h>

using namespace std;

typedef pair<int,int> P;
const int INF=1e9+10;
const int N=1e5+10;

struct edge
{
    int to,cost;
    edge(){}
    edge(int t,int c):to(t),cost(c){}
};

vector<edge> G[N];
int V,E,S;
int d[N];

void init(int n)
{
    for(int i=0;i<=n;i++) G[i].clear();
}

void Dijkstra(int s)
{
    fill(d,d+V,INF);
    d[s]=0;
    priority_queue<P,vector<P>,greater<P> > q;
    q.push(P(0,s));

    while(!q.empty())
    {
        P tmp=q.top();q.pop();
        int v=tmp.second;
        if(d[v]<tmp.first) continue;
        for(int i=0;i<G[v].size();i++)
        {
            edge &e=G[v][i];
            if(d[e.to]>d[v]+e.cost&&d[v]!=INF)
            {
                d[e.to]=d[v]+e.cost;
                q.push(P(d[e.to],e.to));
            }
        }
    }
}

int main()
{
    while(scanf("%d %d %d",&V,&E,&S)!=EOF)
    {
        init(V);
        for(int i=0;i<E;i++)
        {
            int s,t,c;
            scanf("%d %d %d",&s,&t,&c);
            G[s].push_back(edge(t,c));
        }
        Dijkstra(S);
        for(int i=0;i<V;i++)
        {
            if(d[i]==INF)
            {
                puts("INF");
                continue;
            }
            printf("%d\n",d[i]);
        }
    }


    return 0;
}

