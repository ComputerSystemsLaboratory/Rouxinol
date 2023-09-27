#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;
#define INF (2e9)
const int maxv=100000+10;
const int maxe=500000+10;
int V,E,S;
struct Edge{int from, to,cost;};
int d[maxv];
Edge es[maxe];

void bellman_ford(int s)
{
    for(int i=0;i<V;i++) d[i]=INF;
    bool bUpdate=true;
    d[s]=0;
    while(true)
    {
        bUpdate=false;
        for(int i=0;i<E;i++)
        {
            Edge &e=es[i];
            if(d[e.from]!=INF&&d[e.to]>d[e.from]+e.cost)
            {
                d[e.to]=d[e.from]+e.cost;
                bUpdate=true;
            }
        }
        if(!bUpdate) break;
    }
    for(int i=0;i<V;i++)
    {
        if(d[i]!=INF)  printf("%d\n",d[i]);
        else printf("INF\n");


    }
}
int main()
{
//    freopen("in.txt","r",stdin);
//    freopen("out.txt","w",stdout);
    scanf("%d%d%d",&V,&E,&S);
    int u,v,dd;
    for(int i=0;i<E;i++)
    {
        scanf("%d%d%d",&u,&v,&dd);
        es[i].from=u;
        es[i].to=v;
        es[i].cost=dd;
    }
    bellman_ford(S);

    return 0;
}