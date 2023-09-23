#include<algorithm>
#include<iostream>
#include<cstdio>
using namespace std;
int n;
int d[50][50];
void floryd()
{
    for(int k=0;k<=n;k++)
    {
        for(int i=0;i<=n;i++)
        {
            for(int j=0;j<=n;j++)
            {
               d[i][j]=min(d[i][j],d[i][k]+d[k][j]);
            }
        }
    }
}
int w,ma;
int main()
{
    while(scanf("%d",&w)&&w)
    {
        for(int i=0;i<=46;i++)
        {
            for(int j=0;j<=46;j++)
            {
                d[i][j]=0x3f3f3f3f;
            }
        }
        ma=-1;
        int a,b,c;
        for(int i=0;i<w;i++)
        {
            scanf("%d%d%d",&a,&b,&c);
            ma=max(max(a,b),ma);
            d[a][b]=d[b][a]=c;
        }
        n=ma;
        int q,s;
        floryd();
        int mi=0x3f3f3f3f;
        for(int i=0;i<=ma;i++)
        {
            s=0;
            for(int j=0;j<=ma;j++)
            {
                if(i!=j)
                {
                    s=s+d[i][j];
                }
            }
            if(s<mi)
            {
                mi=s;
                q=i;
            }
        }
        printf("%d %d\n",q,mi);
    }

    return 0;
}