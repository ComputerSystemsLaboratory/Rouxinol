#include<iostream>
#include<algorithm>
#include<string.h>
#include<math.h>
#include<stdio.h>
#include<queue>
#define INF 0x3f3f3f3f
typedef long long ll;
using namespace std;

#define  N 15
int n;
int dis[N],maps[N][N];
int main()
{
    int i,a,b,c,j,k;
    while(scanf("%d",&n),n)
    {
        for(i=0;i<N;i++)
        {
            for(j=0;j<N;j++)
            {
                maps[i][j]=(i==j)?0:INF;
            }
        }

        int m=-1;
        for( i=0; i<n; i++)
        {
            scanf("%d%d%d",&a,&b,&c);
            m=max(a,m);
            m=max(b,m);
            maps[a][b]=maps[b][a]=c;
        }

        for(k=0;k<=m;k++)
        {
            for(i=0;i<=m;i++)
            {
                for(j=0;j<=m;j++)
                {
                    if(maps[i][j]>maps[i][k]+maps[k][j])
                        maps[i][j]=maps[i][k]+maps[k][j];
                }
            }
        }

        int  Min=INF;
        int index=-1;
        memset(dis,0,sizeof(dis));
        for(i=0;i<=m;i++)
        {
            for(j=0;j<=m;j++)
            {
                dis[i]=dis[i]+maps[i][j];
            }
            if(Min>dis[i])
            {
                index=i;
                Min=dis[i];
            }
        }
        printf("%d %d\n",index,Min);
    }
    return 0;
}