#include<cstdio>
#include<cstring>
#include<algorithm>
#define INF 0x3fffffff
using namespace std;

int n,m;
int ans,best;
int f[50][50];

int main()
{
    while(~scanf("%d",&n)&&n)
    {
        m=0;
        best=INF;
        for(int i=0;i<9;i++)
            for(int j=0;j<9;j++)
            {
                if(i==j)
                {
                    f[i][j]=0;
                    continue;
                }
                f[i][j]=INF;
            }
        for(int i=1;i<=n;i++)
        {
            int x,y,va;
            scanf("%d%d%d",&x,&y,&va);
            f[x][y]=f[y][x]=va;
            m=max(m,max(x,y));
        }

        for(int k=0;k<=m;k++)
            for(int i=0;i<=m;i++)
                for(int j=0;j<=m;j++)
                    f[i][j]=min(f[i][j],f[i][k]+f[k][j]);
        for(int i=0;i<=m;i++)
        {
            int sum=0;
            for(int j=0;j<=m;j++)
                sum+=f[i][j];
            if(best>sum)
            {
                best=sum;
                ans=i;
            }
        }
        printf("%d %d\n",ans,best);
    }
}