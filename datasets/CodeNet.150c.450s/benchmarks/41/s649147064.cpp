#include<stdio.h>
#define INT_MAX 0x7f7f7f7f
int n, m, dis[105][105];
bool floyd()
{
    for(int k = 0; k < n; k++)
        for(int i = 0; i < n; i++){
            dis[i][i] = 0;
            for(int j = 0; j < n; j++)
                if(dis[i][k] != INT_MAX && dis[k][j] != INT_MAX)
                    if(dis[i][j] > dis[i][k] + dis[k][j])
                        dis[i][j] = dis[i][k] + dis[k][j];
            if(dis[i][i] < 0) return false;
        }
    return true;
}
int main()
{
    scanf("%d%d", &n, &m);
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            dis[i][j] = INT_MAX;
    for(int i = 1; i <= m; i++)
    {
        int x, y, t;
        scanf("%d%d%d", &x, &y, &t);
        dis[x][y] = t;
    }
    if(floyd())
        for(int i = 0; i < n; i++)
            for(int j = 0; j < n; j++){
                if(dis[i][j] != INT_MAX) printf("%d", dis[i][j]);
                else printf("INF");
                putchar(" \n"[j == n-1]);
        }
    else printf("NEGATIVE CYCLE\n");
    return 0;
}
