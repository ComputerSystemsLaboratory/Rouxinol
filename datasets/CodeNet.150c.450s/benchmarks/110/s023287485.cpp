#include <iostream>
#include <cstring>
#include <cstdio>
#include <algorithm>
#include <vector>
#include <queue>

using namespace std;
struct as
{
    int x,y;
}pos[10];
struct node
{
    int x,y;
    int step;
};
bool vis[1010][1010];
char maze[1050][1050];
int dx[]={0,0,1,-1};
int dy[]={1,-1,0,0};
int H,W,N;

bool check(int x,int y)
{
    if (x<=0 || x>H) return 1;
    if (y<=0 || y>W) return 1;
    if (vis[x][y]) return 1;
    if (maze[x][y] =='X')return 1;
    return 0;
}
int bfs(int m,int n)
{
    memset(vis,0,sizeof vis);
    int sx = pos[m].x, sy = pos[m].y;
    int gx = pos[n].x, gy = pos[n].y;
   // printf("%d %d\n",sx,sy);
   // printf("%d %d\n",gx,gy);
    queue<node> Q;
    node a,next;
    a.step = 0;
    a.x = sx, a.y =sy;
    Q.push(a);
    while(!Q.empty())
    {
        a = Q.front();
        Q.pop();
        if (a.x == gx && a.y == gy)
            return a.step;
        for(int i = 0; i < 4 ;i++)
        {
            int nx = a.x + dx[i];
            int ny = a.y + dy[i];
            if(check(nx,ny))
                continue;
            else
            {
                vis[nx][ny] =1;
                next.x = nx,next.y = ny,next.step = a.step+1;
                Q.push(next);
            }
        }
    }
    return 999999;
}

int main()
{
   // freopen("in.txt","r",stdin);
    while(cin>>H>>W>>N)
    {
        int sx,sy;
        for(int i = 1;i<=H;i++)
        {
            for(int j = 1; j <= W;j++)
            {
                cin>>maze[i][j];
                if (maze[i][j] >='1' && maze[i][j]<='9')
                {
                    pos[maze[i][j]-'0'].x = i;
                    pos[maze[i][j]-'0'].y = j;
                }
                if (maze[i][j]=='S')
                    sx=i,sy = j;
            }
        }

        pos[0].x = sx,pos[0].y = sy;
        int ans = 0;
        for(int i = 0;i<N;i++)
            ans += bfs(i,i+1);
        cout<<ans<<endl;
    }
    return 0;
}

/*
入力例 2
4 5 2
.X..1
....X
.XX.S
.2.X.

出力例 2
12
*/