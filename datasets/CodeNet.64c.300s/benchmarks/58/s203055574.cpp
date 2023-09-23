#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
#include<stack>
#include<queue>
#include<string>
#include<vector>
#define rep(i,a,n) for(int i=a;i<n;i++)
#define per(i,n,a) for(int i=n;i>a;i--)
#define mem0(x) memset(x,0,sizeof(x))
#define memff(x) memset(x,INF,sizeof(x))
#define INF 100000000
using namespace std;
typedef pair<int,int> p;
typedef long long LL;
int h,w;
int nh,nw;
int dw[4]={0,1,0,-1},dh[4]={1,0,-1,0};
int cal;
char maze[105][105];
void DFS_1(int sh,int sw)
{
    maze[sh][sw]='.';
    for(int i=0;i<4;i++)
    {
        nh=sh+dh[i];nw=sw+dw[i];
        if(1<=nh&&nh<=h&&1<=nw&&nw<=w&&maze[nh][nw]=='#')
        {
            DFS_1(nh,nw);
        }
    }
}
void DFS_2(int sh,int sw)
{
    maze[sh][sw]='.';
    for(int i=0;i<4;i++)
    {
        nh=sh+dh[i];nw=sw+dw[i];
        if(1<=nh&&nh<=h&&1<=nw&&nw<=w&&maze[nh][nw]=='*')
        {
            DFS_2(nh,nw);
        }
    }
}
void DFS_3(int sh,int sw)
{
    maze[sh][sw]='.';
    for(int i=0;i<4;i++)
    {
        nh=sh+dh[i];nw=sw+dw[i];
        if(1<=nh&&nh<=h&&1<=nw&&nw<=w&&maze[nh][nw]=='@')
        {
            DFS_3(nh,nw);
        }
    }
}
int main()
{
    //freopen("input.in","r",stdin);
    while(cin>>h>>w)
    {
        if(h==0&&w==0)break;
        cal=0;
        for(int i=1;i<=h;i++)
        {
            for(int j=1;j<=w;j++)
            cin>>maze[i][j];
        }
        for(int i=1;i<=h;i++)
    {
        for(int j=1;j<=w;j++)
        {
            if(maze[i][j]=='#')
            {
                DFS_1(i,j);
                cal++;
            }

        }
    }
    for(int i=1;i<=h;i++)
    {
        for(int j=1;j<=w;j++)
        {
            if(maze[i][j]=='*')
            {
                DFS_2(i,j);
                cal++;
            }
        }
    }
    for(int i=1;i<=h;i++)
    {
        for(int j=1;j<=w;j++)
        {
            if(maze[i][j]=='@')
            {
                DFS_3(i,j);
                cal++;
            }
        }
    }
    cout<<cal<<endl;
    }
    return 0;
}