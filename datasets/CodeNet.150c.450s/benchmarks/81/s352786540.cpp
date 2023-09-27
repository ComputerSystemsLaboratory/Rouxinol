#include <iostream>
#include <algorithm>
#include <cstdio>
#define INF 200000

using namespace std;

const int MAX=11;

int d[MAX][MAX];
int V;

int main()
{
    int n;
    while(~scanf("%d", &n) && n)
    {
        for(int i=0; i<MAX; i++)
        {
            for(int j=0; j<MAX; j++)
            {
                if(i!=j)
                    d[i][j]=INF;    //初始化
            }
        }
        V=0;
        for(int i=0; i<n; i++)
        {
            int x,y,m;
            scanf("%d %d %d", &x, &y, &m);
            d[x][y]=m;
            d[y][x]=m;
            V = max(V, max(x+1, y+1));
        }
   //     printf("%d\n",V);
//        for(int i=0; i<V; i++)
//        {
//            for(int j=0; j<V; j++)
//            {
//                printf("%d ", d[i][j]);
//            }
//            printf("\n");
//        }
//        printf("\n");
        for(int k=0; k<V; k++)
        {
            for(int i=0; i<V; i++)
            {
                for(int j=0; j<V; j++)
                    d[i][j]=min(d[i][j], d[i][k]+d[k][j]);
            }
        }
        int u=0;
        for(int i=0; i<V; i++)
        {
            for(int j=1; j<V; j++)
            {
                if(d[i][j] != INF && i!=j)
                    d[i][0]+=d[i][j];
            }
            if(d[i][0]<d[u][0])
                u=i;
        }
        printf("%d %d\n", u, d[u][0]);
    }
    return 0;
}