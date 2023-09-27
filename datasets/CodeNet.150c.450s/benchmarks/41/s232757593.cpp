#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
#include<limits>
using namespace std;
const int maxn=110;
const long long int max_inf=numeric_limits<long long>::max();
int n,m;
long long edge[maxn][maxn];

bool floyed()
{
    for(int k=0;k<n;++k)
      for(int i=0;i<n;++i)
      {
          for(int j=0;j<n;++j)
            if(edge[i][k] != max_inf && edge[k][j] != max_inf)
              if(edge[i][k]+edge[k][j]<edge[i][j])
                edge[i][j]=edge[i][k]+edge[k][j];
          if(edge[i][i] < 0)
            return true;
      }
    return false;
}

int main()
{
    // freopen("in.txt","r",stdin);
    // freopen("out.txt","w",stdout);
    scanf("%d%d",&n,&m);
    for(int i=0;i<n;++i)
      for(int j=0;j<n;++j)
        if(i==j) edge[i][j]=0;
        else edge[i][j]=max_inf;
    for(int i=0;i<m;++i)
    {
        int u,v;
        long long w;
        scanf("%d%d%lld",&u,&v,&w);
        edge[u][v]=w;
    }
    if(floyed()) printf("NEGATIVE CYCLE\n");
    else
    {
        for(int i=0;i<n;++i)
        {
            if(edge[i][0] == max_inf)
              printf("INF");
            else
              printf("%lld",edge[i][0]);
            for(int j=1;j<n;++j)
            {
                if(edge[i][j] == max_inf)
                printf(" INF");
                else
                printf(" %lld",edge[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}