#include<cstdio>
#include<algorithm>
#include<cstring>
using namespace std;
int dis[15][15];
const int INF = 0x3f3f3f3f;
int main()
{
    int n;
    while(scanf("%d",&n) != EOF&&n)
    {
        int m = 0;
        memset(dis,0x3f,sizeof(dis));
        for(int i = 0;i < 15;i++)
            dis[i][i] = 0;
        for(int i = 0;i < n;i++)
        {
            int a,b,c;
            scanf("%d %d %d",&a,&b,&c);
            dis[a][b] = dis[b][a] = min(dis[a][b],c);
            m = max(max(a,b),m);
        }
        for(int i = 0;i <= m;i++)
            for(int j = 0;j <= m;j++)
                for(int k = 0;k <= m;k++)
                    dis[j][k] = min(dis[j][k],dis[j][i]+dis[i][k]);
        int ans = INF,cas = 0;
        for(int i = 0;i <= m;i++)
        {
            int sum = 0;
            for(int j = 0;j <= m;j++)
                    sum += dis[i][j];
            if(sum < ans)
            {
                ans = sum;
                cas = i;
            }
        }
        printf("%d %d\n",cas,ans);
    }
    return 0;
}

