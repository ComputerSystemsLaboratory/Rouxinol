#include <stdio.h>
#define WHITE 0
#define GRAY  1
#define BLACK 2
int color[100];
int d[100],f[100];
int G[100][100];
int n, time = 0;
void dfs(int u)
{
    color[u] = 1;
    d[u] = ++time;
    for (int i = 0; i < n; i++)
    {
        if (G[u][i]==1 && color[i] == 0)
        {
            dfs(i);
        }
    } 
    color[u] = 2;
    f[u] = ++time;
    return;
}
int main()
{
    int k,u,v;
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            G[i][j] = 0; 
        }  
    } 
    for (int i = 0; i < n; i++)
    {
        scanf("%d %d",&u,&k);
        for (int j = 0; j < k; j++)
        {
            scanf("%d",&v);
            G[u-1][v-1] = 1;
        } 
    } 
    for (int i = 0; i < n; i++)
    {
        color[i] = 0; 
        d[i] = 0;
        f[i] = 0;
    } 
    for (int i = 0; i < n; i++)
    {
        if(color[i]==0) dfs(i); 
    } 
    for (int i = 0; i < n; i++)
    {
        printf("%d %d %d\n", i+1, d[i], f[i]); 
    } 
    return 0;
}