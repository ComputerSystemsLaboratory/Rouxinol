#include<iostream>
#include<algorithm>
#include<iomanip>
#include<string>
#include<cmath>
#include<stack>
#include<cstring>
#include<cstdio>
using namespace std;
const int maxn = 100 + 8;

int dx[] = {-1, 0, 1, 0};
int dy[] = {0, 1, 0, -1};
int n,m,xx,yy;
char graph[maxn][maxn];
bool vis[maxn][maxn];
int ans;

void dfs1(int x,int y)
{

    graph[x][y] = '!';
    for(int i = 0; i < 4; ++i)
    {
        xx = x + dx[i];
        yy = y + dy[i];
        if(xx >= 0 && xx < n && yy >= 0 && yy < m && graph[xx][yy] == '#' && !vis[xx][yy])
        {
           // vis[xx][yy] = true;
            dfs1(xx,yy);
           // vis[xx][yy] = false;
        }
    }
}
void dfs2(int x,int y)
{

    graph[x][y] = '!';
    for(int i = 0; i < 4; ++i)
    {
        xx = x + dx[i];
        yy = y + dy[i];
        if(xx >= 0 && xx < n && yy >= 0 && yy < m && graph[xx][yy] == '*' && !vis[xx][yy])
        {
           // vis[xx][yy] = true;
            dfs2(xx,yy);
           // vis[xx][yy] = false;
        }
    }
}
void dfs3(int x,int y)
{

    graph[x][y] = '!';
    for(int i = 0; i < 4; ++i)
    {
        xx = x + dx[i];
        yy = y + dy[i];
        if(xx >= 0 && xx < n && yy >= 0 && yy < m && graph[xx][yy] == '@' && !vis[xx][yy])
        {
            //vis[xx][yy] = true;
            dfs3(xx,yy);
            //vis[xx][yy] = false;
        }
    }
}

int main()
{
    while(scanf("%d %d", &n, &m) && n + m)
    {
        memset(vis, false, sizeof vis);
        for(int i = 0 ;i < n; ++i) cin >> graph[i];
        ans = 0;
        for(int i = 0; i < n; ++i)
        {
            for(int j = 0; j < m; ++j)
            {
                if(graph[i][j] == '#') {
                    dfs1(i,j);
                    vis[i][j] = true;
                    ++ans;
                } else if(graph[i][j] == '*') {
                   dfs2(i,j);
                    ++ans;
                } else if(graph[i][j] == '@') {
                    dfs3(i,j);
                    ++ans;
                }
            }
        }
        printf("%d\n", ans);
    }
    return 0;
}
/*
10 10
####*****@
@#@@@@#*#*
@##***@@@*
#****#*@**
##@*#@@*##
*@@@@*@@@#
***#@*@##*
*@@@*@@##@
*@*#*@##**
@****#@@#@
0 0
*/