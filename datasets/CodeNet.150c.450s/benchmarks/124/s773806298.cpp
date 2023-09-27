#include<stdio.h>
#include<string.h>
int n, dis[105], a[105][105];
bool vst[105];
void dijkstra()
{
    memset(vst, 0, sizeof(vst));
    memset(dis, 0x3f3f3f3f, sizeof(dis));
    dis[0] = 0;
    for(int i = 0; i < n; i++)
    {
        int k = n;
        for(int j = 0; j < n; j++)
            if(!vst[j] && dis[k] > dis[j]) k = j;
        vst[k] = 1;
        for(int j = 0; j < n; j++)
            if(!vst[j] && dis[j] > dis[k] + a[k][j])
                dis[j] = dis[k] + a[k][j];
    }
}
int main()
{
    scanf("%d", &n);
    memset(a, 0x3f3f3f3f, sizeof(a));
    for(int i = 1; i <= n; i++)
    {
        int m, j;
        scanf("%d%d", &m, &j);
        while(j--){
            int k, t;
            scanf("%d%d", &k, &t);
            if(t < a[m][k]) a[m][k] = t;
        }
    }
    dijkstra();
    for(int i = 0; i < n; i++)
        printf("%d %d\n", i, dis[i]);
    return 0;
}
