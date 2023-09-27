#include <iostream>
#include <cstdio>
#include <set>
#include <queue>
#include <cstring>
#include <algorithm>
using namespace std;
#define INF 0x3f3f3f3f
int dis[50][50];
int main()
{
    int m,a,ans,b,oop,n,op;
    while(~scanf("%d",&n)&&n)
    {
        m = 0;
        for(int i = 0 ;i < 20; i++)
        {
            for(int j = 0 ; j <20 ;j++)
                dis[i][j] = INF;
        }
        for(int i = 0; i < n; i++)
        {
            scanf("%d%d",&a,&b);
            scanf("%d",&dis[a][b]);
            dis[b][a] = dis[a][b];
            if(m < a||m < b)
            {
                if(a<b)  m = b;
                else    m = a;
            }
        }
        for(int i = 0; i <= m; i++)  dis[i][i] = 0;
        for(int k = 0; k <= m; k++)
            for(int i = 0; i <= m; i++)
                for(int j = 0; j <= m; j++)
                {
                    if(dis[i][j] > dis[i][k] + dis[k][j])
                   {
                       dis[i][j] = dis[i][k] + dis[k][j];
                       dis[j][i] = dis[i][k] + dis[k][j];
                   }
                }
        oop = INF;
        for(int i = 0 ; i <= m;i++)
        {
            ans = 0;
            for(int u = 0 ; u <= m; u++)
            {
                if(dis[i][u] != INF)
                    ans += dis[i][u];
            }
            if(ans<oop)
            {
                op = i;
                oop = ans;
            }
        }
        printf("%d %d\n",op,oop);
    }
    return 0;
}

