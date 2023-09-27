#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <vector>
#include <string>
#include <queue>
#include <stack>
#include <algorithm>

typedef long long LL;

using namespace std;
bool book[15];
int e[15][15];
int e1[15];
int dis[15];
int inf=0x3f3f3f3f;
int ss;
void Dijkstra(int n,int n1)
{
    int i,j,k,minn,u;
    for(i=n1; i<=n; i++)
    {
        minn=inf;
        for(j=n1; j<=n; j++)
            if(dis[j]<minn && book[j]==0)
                minn=dis[j],u=j;
        book[u]=1;
        for(k=n1; k<=n; k++)
        {
            if(e[u][k]<inf)
            {
                if(dis[k]>dis[u]+e[u][k])
                    dis[k]=dis[u]+e[u][k];
            }
        }
    }
}

int main()
{
    int n;
    while(scanf("%d",&n) && n!=0)
    {
        memset(e,0,sizeof(e));
        memset(e1,0,sizeof(e1));
        int i,j,maxx=0,min1=inf;
        for(i=0; i<=9; i++)
            for(j=0; j<=9; j++)
            {
                if(i==j)e[i][j]=0;
                else e[i][j]=inf;
            }
        for(i=0; i<n; i++)
        {
            int a,b,c;
            scanf("%d%d%d",&a,&b,&c);
            if(a>maxx)maxx=a;
            if(b>maxx)maxx=b;
            if(min1>a)min1=a;
            if(min1>b)min1=b;
            if(e[a][b]==inf)
                e[a][b]=e[b][a]=c;
        }
        int minn=inf,t;
        for(j=min1; j<=maxx; j++)
        {
            ss=0;
            for(i=min1; i<=maxx; i++)
            {
                dis[i]=e[j][i];
                book[i]=0;
            }
            book[j]=1;
            Dijkstra(maxx,min1);
            int sum=0;
            for(i=min1; i<=maxx; i++)
            {
                sum=sum+dis[i];
            }
            if(minn>sum)minn=sum,t=j;
        }

        printf("%d %d\n",t,minn);
    }
    return 0;
}