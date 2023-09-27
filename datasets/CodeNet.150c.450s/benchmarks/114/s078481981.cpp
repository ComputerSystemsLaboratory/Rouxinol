#include<ostream>
#include<cstdio>
using namespace std;
static const int WHITE=0;
static const int GRAY=1;
static const int BLACK=2;
static const int INFTY=(1<<21);
int n,H[100][100];
int p()
{
    int u,minv,d[100],p[100],c[100];
    for(int i=0;i<n;i++)
    {
        d[i]=INFTY;
        p[i]=-1;
    }
    d[0]=0;
    while(1)
    {
        minv=INFTY;
        u=-1;
        for(int i=0;i<n;i++)
        {
            if(minv>d[i]&&c[i]!=BLACK)
            {
                u=i;
                minv=d[i];
            }
        }
        if(u==-1) break;
        c[u]=BLACK;
        for(int v=0;v<n;v++)
        {
            if(c[v]!=BLACK&&H[u][v]!=INFTY)
            {
                if(d[v]>H[u][v])
                {
                    d[v]=H[u][v];
                    p[v]=u;
                    c[v]=GRAY;
                }
            }
        }
    }
    int sum=0;
    for(int i=0;i<n;i++)
    {
        if(p[i]!=-1) sum+=H[i][p[i]];
    }
    return sum;
}
int main()
{
    int a;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
    {
        scanf("%d",&a);
        H[i][j]=(a==-1)?INFTY:a;
    }
    printf("%d\n",p());
    return 0;
}