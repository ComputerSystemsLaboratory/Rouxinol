#include<iostream>
#include<cstring>
#include<queue>
#include<cstdio>
using namespace std;
#define clr(x,y) memset(x,y,sizeof x)
typedef long long ll;
#define INF 0x3f3f3f3f
#define IINF 0x3f3f3f3f3f3f3f3f
const int maxn = 100 + 10;

ll dist[maxn][maxn];
int main()
{
    int n,m;
    while( ~ scanf("%d%d",&n,&m))
    {
        clr(dist,IINF);
        for(int i = 0;i <= n;i ++)dist[i][i] = 0;
        for(int i = 1; i <= m;i ++)
        {
            int x,y,z;scanf("%d%d%d",&x,&y,&z);
            dist[x][y] = min(dist[x][y],1ll*z);
        }
        for(int k = 0;k < n;k ++)
        {
            for(int i = 0;i < n;i ++)
            {
                for(int j = 0;j < n;j ++)
                {
                    if(dist[i][k] != IINF && dist[k][j] != IINF)
                    dist[i][j] = min(dist[i][j],dist[i][k] + dist[k][j]);
                }
            }
        }
        bool flag = false;
        for(int i = 0;i < n;i ++)
            if(dist[i][i] < 0)
            {
                flag = true;
                puts("NEGATIVE CYCLE");
                break;
            }
        if(flag)continue;
        for(int i = 0;i < n;i ++)
        {
            for(int j = 0;j < n;j ++)
            {
                if(dist[i][j] == IINF)printf("INF");
                else printf("%lld",dist[i][j]);
                printf("%c",j < n - 1 ? ' ' : '\n');
            }

        }
    }
    return 0;
}

