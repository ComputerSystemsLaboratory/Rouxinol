#include <iostream>
#include <algorithm>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <queue>
#define INF 0x3f3f3f
using namespace std;
struct edge
{
    int from,to,cost;
};
int V[100],E[100],dis[100][100],N;
edge edges[100];
void floyd()
{
    int i,j,k;
    for(k=0;k<N;k++)
        for(i=0;i<N;i++)
            for(j=0;j<N;j++)
                dis[i][j]=min(dis[i][j],dis[i][k]+dis[k][j]);
}
int main()
{
    int n,i,j,k,a,b,c,ans,big;
    while(scanf("%d",&n)&&n)
    {
        ans=0;
        N=0;
        for(k=0;k<100;k++)
            for(i=0;i<100;i++)
                {
                    dis[k][i]=INF;
                    if(k==i)
                        dis[k][i]=0;
                }
        for(i=0;i<n;i++)
        {
            scanf("%d %d %d",&a,&b,&c);
            dis[a][b]=c;
            dis[b][a]=c;
            N=max(N,a);
            N=max(N,b);
        }
        N++;
        floyd();
        int x[100]={0};
        for(i=0;i<N;i++)
        {
            for(j=0;j<N;j++)
                x[i]+=dis[i][j];
        }
        int pos = min_element(x,x+N)-x;
        cout<<pos<<" "<<x[pos]<<endl;
    }

    return 0;
}