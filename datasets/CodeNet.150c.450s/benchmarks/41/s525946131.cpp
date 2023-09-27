#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;
#define INF (1LL<<32)
const int maxv=100+10;
const int maxe=9900+10;
int V,E;
long long d[maxv][maxv];

void floyd()
{

    for(int k=0; k<V; k++)
    {
        for(int i=0; i<V; i++)
        {
            if(d[i][k]==INF) continue;
            for(int j=0; j<V; j++)
            {
                if(d[k][j]==INF) continue;
                d[i][j]=min(d[i][j],d[i][k]+d[k][j]);

            }
        }
    }
}
int main()
{
//    freopen("in.txt","r",stdin);
    scanf("%d%d",&V,&E);
    int u,v,cost;
    for(int i=0; i<V; i++)
    {
        for(int j=0; j<V; j++)
        {
            if(i==j) d[i][j]=0;
            else d[i][j]=INF;

        }
    }
    for(int i=0; i<E; i++)
    {
        scanf("%d%d%d",&u,&v,&cost);
        d[u][v]=cost;

    }
    floyd();
    bool negative=false;
    for(int i=0; i<V; i++)
    {
        if(d[i][i]<0) negative=true;
    }
    if(negative)
    {
        printf("NEGATIVE CYCLE\n");
    }
    else
    {
        for(int i=0; i<V; i++)
        {
            for(int j=0; j<V; j++)
            {
                if(j) printf(" ");
                if(d[i][j]!=INF) printf("%lld",d[i][j]);
                else printf("INF");
            }
            printf("\n");
        }
    }
    return 0;
}