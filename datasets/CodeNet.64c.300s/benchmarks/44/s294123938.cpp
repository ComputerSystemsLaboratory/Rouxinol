#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <queue>
using namespace std;
int maps[50][50];
int inf=0x3f3f3f3f;
void floyd(int n)
{
    for(int k=0;k<=n;k++)
        for(int i=0;i<=n;i++)
            for(int j=0;j<=n;j++)
            {
                if(maps[i][j]>maps[i][k]+maps[k][j])
                    maps[i][j]=maps[i][k]+maps[k][j];
            }

}
int main()
{
    int n;
    while(scanf("%d",&n)&&n)
    {
        int u,v,w;
        int ma=-1;
        memset(maps,inf,sizeof(maps));
        for(int i=0;i<=50;i++) maps[i][i]=0;
        for(int i=0;i<n;i++)
        {
            scanf("%d%d%d",&u,&v,&w);
            ma=max(ma,u);
            ma=max(ma,v);
            if(maps[u][v]>w)
            {
                maps[u][v]=maps[v][u]=w;
            }
        }
        floyd(ma);
        int mi=inf,sum,num;
        for(int i=0;i<=ma;i++)
        {
            sum=0;
            for(int j=0;j<=ma;j++)
            {
                sum=sum+maps[i][j];
            }
            if(mi>sum) mi=sum,num=i;
        }
        printf("%d %d\n",num,mi);
    }

    return 0;
}