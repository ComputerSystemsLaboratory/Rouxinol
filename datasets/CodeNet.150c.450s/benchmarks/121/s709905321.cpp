#include<cstdio>
#include<cstring>

enum{ N = 100 + 10};

char a[N][N];
int vis[N][N];
int m,n,cnt;
int dx[4] = {1,0,-1,0};
int dy[4] = {0,-1,0,1};

void dfs(int x,int y,char p)
{
    vis[x][y] = 1;
    for(int i=0;i<4;i++)
    {
        int tx = x + dx[i], ty = y + dy[i];
        if(!vis[tx][ty] && tx >= 0 && tx < n && ty >= 0 && ty < m && a[tx][ty] == p)
            dfs(tx,ty,p);
    }
}

int main()
{
    while(~scanf("%d%d",&n,&m),n+m)
    {
        for(int i=0;i<n;i++) scanf("%s",a[i]);
        memset(vis,0,sizeof(vis));
        cnt = 0;
        for(int i=0;i<n;i++)
            for(int j=0;j<m;j++)
                if(!vis[i][j])
                {
                    dfs(i,j,a[i][j]);
                    cnt++;
                }
        printf("%d\n",cnt);
    }
    return 0;
}