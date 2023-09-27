#include<stdio.h>
#include<algorithm>
using namespace std;
int maxn=1<<21;
int n;
int a[105][105];
int color[105];
int d[105];
int p[105];
int f()
{
    int u;int minx;
    for(int i=0;i<105;i++)
    {
        d[i]=maxn;
        p[i]=-1;
    }
    d[0]=0;
    while(1)
    {
        minx=maxn;
        u=-1;
        for(int i=0;i<n;i++)
        {
            if(minx>d[i]&&color[i]==0)
            {
                u=i;
                minx=d[i];
            }
        }
        if(u==-1) break;
        color[u]=1;
        for(int i=0;i<n;i++)
        {
            if(color[i]==0&&a[u][i]!=maxn)
            {
                if(d[i]>a[u][i])
                {
                    d[i]=a[u][i];
                    p[i]=u;
                    color[i]=0;
                }
            }
        }
    }
    int sum=0;
    for(int i=0;i<n;i++)
    {
        if(p[i]!=-1) sum+=a[i][p[i]];
    }
    return sum;
}
int main()
{
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            int x;
            scanf("%d",&x);
            a[i][j]=(x==-1)?maxn:x;
        }
    }
    printf("%d\n",f());
    return 0;
}