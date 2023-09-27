#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
const int INF=0x3f3f3f;
const int N=100+10;
int d[N][N];
int main()
{
    int t,i,j,k,a,b,c,n;
    while(~scanf("%d",&t)&&t)
    {
    n=0;
    memset(d,INF,sizeof(d));
    for(i=0;i<t;i++)
    {
        scanf("%d%d%d",&a,&b,&c);
        d[a][b]=c;
        d[b][a]=c;
        d[a][a]=0;
        d[b][b]=0;
        n=max(n,max(a,b));
    }
for(k=0;k<=n;k++)
for(i=0;i<=n;i++)
for(j=0;j<=n;j++)
d[i][j]=min(d[i][j],d[i][k]+d[k][j]);
int maxx=INF,flagI;
for(i=0;i<=n;i++)
{
    int sum=0;
    for(j=0;j<=n;j++)
    {
        sum+=d[i][j];
    }
    if(sum<maxx)
    {
        maxx=sum;
        flagI=i;
    }
}
printf("%d %d\n",flagI,maxx);
    }
    return 0;
}