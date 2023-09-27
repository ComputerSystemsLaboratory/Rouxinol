#include <iostream>
#include <cstdio>
#include <queue>
#include <algorithm>
#include <cstring>
#include <string>
#include <stack>
#include <stdlib.h>
#include <cctype>
#include <vector>
#include <map>
#include <set>
#include <cmath>
#include <iomanip>
using namespace std;
const int INF=1000000000;
const int max_n=1005;
typedef pair<int,int>P;
char maze[max_n][max_n+1];
int n,m,sx,sy;
int d[max_n][max_n];
int dx[4]={-1,0,0,1};
int dy[4]={0,-1,1,0};
int bfs(char e)
{
    queue<P>que;
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)d[i][j]=INF;
    que.push(P(sx,sy));
    d[sx][sy]=0;
    while(!que.empty())
    {
        P q=que.front();
        que.pop();
        if(maze[q.first][q.second]==e){sx=q.first;sy=q.second;break;}
        for(int i=0;i<4;i++)
        {
            int nx=q.first+dx[i],ny=q.second+dy[i];
            if(0<=nx&&nx<n&&ny>=0&&ny<m&&maze[nx][ny]!='X'&&d[nx][ny]==INF)
            {
                que.push(P(nx,ny));
                d[nx][ny]=d[q.first][q.second]+1;
            }
        }
    }
return d[sx][sy];
}
int main()
{
    int t;
    while(cin>>n>>m>>t)
    {
       for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
       {
           cin>>maze[i][j];
           if(maze[i][j]=='S')sx=i,sy=j;
       }

       int res=0;
       for(int i=1;i<=t;i++){
        res+=bfs(i+'0');
       }
        cout<<res<<endl;
    }
    return 0;
}