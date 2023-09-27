#include<iostream>
#include<cstdio>
#include<cstring>
#include<string>
#include<cmath>
#include<vector>
#include<algorithm>
#include<queue>
using namespace std;
const int maxn=110;
char s[maxn][maxn];
int vis[maxn][maxn];
int n,m;
int dx[]={1,0,-1,0},dy[]={0,1,0,-1};
void dfs1(int x,int y)
{
    vis[x][y]=1;
    for(int i=0;i<4;i++)
    {
        int nx=x+dx[i],ny=y+dy[i];
        if(0<=nx&&nx<n&&0<=ny&&ny<m&&s[nx][ny]=='*'&&!vis[nx][ny])
            dfs1(nx,ny);
    }
}
void dfs2(int x,int y)
{
    vis[x][y]=1;
    for(int i=0;i<4;i++)
    {
        int nx=x+dx[i],ny=y+dy[i];
        if(0<=nx&&nx<n&&0<=ny&&ny<m&&s[nx][ny]=='@'&&!vis[nx][ny])
            dfs2(nx,ny);
    }
}
void dfs3(int x,int y)
{
    vis[x][y]=1;
    for(int i=0;i<4;i++)
    {
        int nx=x+dx[i],ny=y+dy[i];
        if(0<=nx&&nx<n&&0<=ny&&ny<m&&s[nx][ny]=='#'&&!vis[nx][ny])
            dfs3(nx,ny);
    }
}
int main()
{
    while(cin>>n>>m)
    {
        if(n==0&&m==0) break;
        for(int i=0;i<n;i++)
        scanf("%s",s[i]);
        memset(vis,0,sizeof(vis));
        int cnt=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(s[i][j]=='*'&&!vis[i][j])
                {
                    dfs1(i,j);
                    cnt++;
                }
            }
        }

        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(s[i][j]=='@'&&!vis[i][j])
                {
                    dfs2(i,j);
                    cnt++;
                }
            }
        }

        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(s[i][j]=='#'&&!vis[i][j])
                {
                    dfs3(i,j);
                    cnt++;
                }
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}