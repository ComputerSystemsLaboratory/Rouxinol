#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

int m,n;
char map[110][110];
int ans;
int way[4][2]={-1,0,0,1,1,0,0,-1};

int ok(int x,int y)
{
    if(x>=0&&x<m&&y>=0&&y<n)
    return 1;
    else
    return 0;
}

void dfs1(int x,int y)
{
    map[x][y]='.';
    for(int i=0;i<4;i++)
    {
        int xx=x+way[i][0];
        int yy=y+way[i][1];
        if(ok(xx,yy)&&map[xx][yy]!='.'&&map[xx][yy]!='#'&&map[xx][yy]!='@')
        dfs1(xx,yy);
    }
    return;
}

void dfs2(int x,int y)
{
    map[x][y]='.';
    for(int i=0;i<4;i++)
    {
        int xx=x+way[i][0];
        int yy=y+way[i][1];
        if(ok(xx,yy)&&map[xx][yy]!='.'&&map[xx][yy]!='#'&&map[xx][yy]!='*')
        dfs2(xx,yy);
    }
    return;
}

void dfs3(int x,int y)
{
     map[x][y]='.';
    for(int i=0;i<4;i++)
    {
        int xx=x+way[i][0];
        int yy=y+way[i][1];
        if(ok(xx,yy)&&map[xx][yy]!='.'&&map[xx][yy]!='@'&&map[xx][yy]!='*')
        dfs3(xx,yy);
    }
    return;
}


int main()
{
    while(cin>>m>>n)
    {
        if(m==0&&n==0)
        break;
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                cin>>map[i][j];
            }
        }
        ans=0;
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(map[i][j]=='#')
                {
                    dfs3(i,j);
                    ans++;
                }
                if(map[i][j]=='@')
                {
                    dfs2(i,j);
                    ans++;
                }
                if(map[i][j]=='*')
                {
                    dfs1(i,j);
                    ans++;
                }
            }
        }
        cout<<ans<<endl;

    }
    return 0;
}