#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;
#define INF (2e9)
const int maxv=1000+10;
const int maxe=2000+10;
int V,E,S;
struct Edge
{
    int from, to,cost;
};
int d[maxv];
Edge es[maxe];

bool bellman_ford(int s)
{
    for(int i=0; i<V; i++) d[i]=INF;
    bool bUpdate=true;
    d[s]=0;
    for(int j=0; j<V; j++)
    {
        for(int i=0; i<E; i++)
        {
            Edge &e=es[i];
            if(d[e.from]!=INF&&d[e.to]>d[e.from]+e.cost)
            {
                d[e.to]=d[e.from]+e.cost;
            }
        }
    }
    int cnt=0;
    for(int i=0;i<V;i++)
    {
        if(d[i]==INF) cnt++;
    }
    if(cnt==V-1) return false;
    bool flag=false;
    for(int i=0; i<E; i++)
    {
        Edge &e=es[i];
        if(d[e.from]!=INF&&d[e.to]>d[e.from]+e.cost)
        {
            flag=true;
            break;
        }
    }
    return flag;

}
int main()
{
//    freopen("in.txt","r",stdin);
    scanf("%d%d%d",&V,&E,&S);
    int u,v,dd;
    for(int i=0; i<E; i++)
    {
        scanf("%d%d%d",&u,&v,&dd);
        es[i].from=u;
        es[i].to=v;
        es[i].cost=dd;
    }
    if(bellman_ford(S))
    {
        printf("NEGATIVE CYCLE\n");
        return 0;
    }

    for(int i=0; i<V; i++)
    {
        if(d[i]!=INF)  printf("%d\n",d[i]);
        else printf("INF\n");


    }

    return 0;
}