#include<cstdio>
#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
#define Inf 1000000
int dist[105][105];
int main()
{
    int n,a,b,s;
    while(~scanf("%d",&n))
    {
        if(n==0) break;
        //memset(dist,0,sizeof(dist));
        for(int i=0; i<20; ++i)
        {
            for(int j=0; j<20; ++j)
            {
                dist[i][j]=Inf;
                dist[j][i]=Inf;
                if(i==j) dist[i][j]=0;
            }
        }
        int m=0;
        for(int i=0; i<n; ++i)
        {
            scanf("%d%d%d",&a,&b,&s);
            dist[a][b]=s;
            dist[b][a]=s;
            m=max(m,max(a,b)+1);
        }
        for(int k=0; k<m; ++k)
        {
            for(int i=0; i<m; ++i)
            {
                for(int j=0; j<m; ++j)
                {
                    dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);
                }
            }
        }
        int x[100];
        memset(x,0,sizeof(x));
        for(int i=0; i<m; ++i)
        {
            for(int j=0; j<m; ++j)
            {
                x[i]+=dist[i][j];
            }
        }
        int ans=min_element(x,x+m)-x;
        printf("%d %d\n",ans,x[ans]);
    }
    return 0;
}