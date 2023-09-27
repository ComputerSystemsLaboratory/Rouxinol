#include<bits/stdc++.h>

using namespace std;

const int INF=1e9+10;
const int N=1e5+10;

struct edge
{
    int to,cost;
    edge(int _to=0,int _cost=0):to(_to),cost(_cost){}
};

vector<edge> G[N];
int d[N];
int V,E,S;

void init(int n)
{
    for(int i=0;i<=n;i++)
    {
        G[i].clear();
    }
}
bool Bellman_Ford(int s)
{
    fill(d,d+V,INF);
    d[s]=0;

    for(int i=0;i<V;i++)
    {
        for(int j=0;j<V;j++)
        {
            for(int k=0;k<G[j].size();k++)
            {
                edge &e=G[j][k];
                if(d[e.to]>d[j]+e.cost&&d[j]!=INF)
                {
                    d[e.to]=d[j]+e.cost;
                    if(i==V-1) return true;
                }
            }
        }
    }
    return false;
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
        if(Bellman_Ford(S))
        {
            puts("NEGATIVE CYCLE");
            continue;
        }
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


    return  0;
}

