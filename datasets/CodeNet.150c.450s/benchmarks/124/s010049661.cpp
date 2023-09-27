#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <vector>
#include <queue>
#include <cmath>
using namespace std;
const int maxn=100+10;
const int maxv=10000+10;
const int INF=1<<21;
int n;
int E;
typedef struct
{
    int from,to,cost;
}Edge;

Edge e[maxv];
int d[maxn];
void bellman_ford(int s)
{
    fill(d,d+n,INF);
    d[s]=0;
    while(true)
    {
        bool bUpdate=false;
        for(int i=0;i<E;i++)
        {
            Edge es=e[i];
            if(d[es.from]!=INF&&d[es.to]>d[es.from]+es.cost)
            {
                d[es.to]=d[es.from]+es.cost;
                bUpdate=true;

            }
        }
        if(!bUpdate) break;

    }
    for(int i=0;i<n;i++)
    printf("%d %d\n",i,d[i]);
}
int main()
{
//    freopen("in.txt","r",stdin);
    scanf("%d",&n);
    int id,c;
    E=0;
    for(int i=0; i<n; i++)
    {
        scanf("%d%d",&id,&c);
        while(c--)
        {
            scanf("%d%d",&e[E].to,&e[E].cost);
            e[E].from=id;
            E++;
        }
    }
    bellman_ford(0);

    return 0;
}