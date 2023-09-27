#include<stdio.h>
#include<string.h>
#include<algorithm>
#include<queue>

using namespace std;

struct node
{
    int s;
    int x,y;
};

int dir[][2] = {0,1,1,0,0,-1,-1,0};
int vis[1010][1010];
int n,m,k,sx[20],sy[20];
char mp[1010][1010];

int bfs(int x,int y,int ex,int ey)
{
    queue<node> q;
    node a,b,d;
    a.x = x;
    a.y = y;
    a.s = 0;
    vis[x][y] = 1;
    q.push(a);
    while(!q.empty())
    {
        b = q.front();
        q.pop();
        if(b.x == ex && b.y == ey)
        {
            return b.s;
        }
        for(int i = 0; i < 4; i++)
        {
            d.x = b.x + dir[i][0];
            d.y = b.y + dir[i][1];
            if(d.x >= 0 && d.x < n && d.y >= 0 && d.y < m && vis[d.x][d.y] == 0)
            {
                if(mp[d.x][d.y] >= '1' && mp[d.x][d.y] <= '9' || mp[d.x][d.y] == '.')
                {
                    vis[d.x][d.y] = 1;
                    d.s = b.s + 1;
                    q.push(d);
                }
            }
        }
    }
}

int main()
{
    while(~scanf("%d%d%d",&n,&m,&k))
    {
        int i,j,t;

        for(i = 0; i < n; i++)
        {
            scanf("%s",mp[i]);
            for(j = 0; j < m; j++)
                if(mp[i][j] == 'S')
                {
                    sx[0] = i;
                    sy[0] = j;
                    mp[i][j] = '.';
                }
        }
        for(i = 0; i < n; i++)
            for(j = 0; j < m; j++)
                if(mp[i][j] >= '1' && mp[i][j] <= '9')
                {
                    sx[mp[i][j]-'0'] = i;
                    sy[mp[i][j]-'0'] = j;
                }
        int ans = 0;
        for(i = 1; i <= k; i++)
        {
            memset(vis,0,sizeof(vis));
            ans += bfs(sx[i-1],sy[i-1],sx[i],sy[i]);
        }
        printf("%d\n",ans);
    }
    return 0;
}