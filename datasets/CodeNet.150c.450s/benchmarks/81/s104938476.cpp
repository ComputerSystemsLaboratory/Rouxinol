#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
#include <cmath>
#include <map>

using namespace std;
int inf = 0x3f3f3f3f;

int maps[50][50];
//int dis[50],vis[50];
void floyd(int k,int n)
{

    for(int t =k; t<=n; t++)
        for(int i = k; i<=n; i++)
            for(int j = k; j<=n; j++)
                if(maps[i][j]>maps[i][t]+maps[t][j])
                    maps[i][j]=maps[i][t]+maps[t][j];
}
int main(void)
{
    int n;
    while(scanf("%d",&n)&&n)
    {
        memset(maps,inf,sizeof(maps));
        //memset(dis,inf,sizeof(dis));
        int ma = 0;
        int k = inf;
        for(int i = 0; i<n; i++)
        {
            int x,y,w;
            scanf("%d%d%d",&x,&y,&w);
            maps[x][y] = maps[y][x] = w;
            maps[i][i] = 0;
            ma = max(ma,x);
            ma = max(ma,y);
            k = min(k,x);
            k = min(k,y);
        }
        floyd(k,ma);
        int mi = inf,b=k;
        for(int i = k;i <=ma; i++)
            {
                int sum = 0;
                for(int j = k; j<=ma; j++)
                {
                    sum += maps[i][j];
                }
                if(sum<mi)   b = i,mi=sum;

            }

        printf("%d %d\n",b,mi);
    }
    return 0;
}