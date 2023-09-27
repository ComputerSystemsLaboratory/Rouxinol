#include<stdio.h>
using namespace std;
const int maxn=1<<21;
int n;
int a[105][105];
void dan()
{
    int minx;
    int d[105],color[105];
    for(int i=0;i<n;i++)
    {
        d[i]=maxn;
        color[i]=0;
    }
    d[0]=0;
    while(1)
    {
        minx=maxn;
        int u=-1;
        for(int i=0;i<n;i++)
        {
            if(d[i]<minx&&color[i]!=1)
            {
                minx=d[i];
                u=i;
            }
        }
        if(u==-1) break;
        color[u]=1;
        for(int i=0;i<n;i++)
        {
            if(color[i]==1||a[u][i]==maxn) continue;
            if(d[i]>d[u]+a[u][i])
            {
                d[i]=d[u]+a[u][i];

            }
        }
    }
    for(int i=0;i<n;i++)
    {
        printf("%d ",i);
        printf("%d\n",(d[i]==maxn)?-1:d[i]);
    }
}
int main()
{
    scanf("%d",&n);
    for(int i=0;i<105;i++)
    {
        for(int j=0;j<105;j++)
        {
            a[i][j]=maxn;
        }
    }
    int k,c,u,v;
    for(int i=0;i<n;i++)
    {
        scanf("%d%d",&k,&c);
        for(int j=0;j<c;j++)
        {
            scanf("%d%d",&u,&v);
            a[k][u]=v;
        }
    }
    dan();
    return 0;
}