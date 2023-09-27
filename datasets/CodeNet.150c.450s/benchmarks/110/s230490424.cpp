#include <iostream>
#include <algorithm>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <queue>
#include <vector>
#include <stack>
#define INF 0x3f3f3f3f
#define MAXV  10001
using namespace std;
char map[1017][1017];
int m,n,x,d[1017][1017],drc[4][2]={-1,0,1,0,0,1,0,-1};
typedef pair<int,int> Point;
int bfs(int sx,int sy,int ex,int ey)
{
    queue<Point> que;
    for(int i=0;i<m;i++)
        for(int j=0;j<n;j++)
            d[i][j]=INF;
    d[sx][sy]=0;
    que.push(Point(sx,sy));
    while(!que.empty())
    {
        //cout<<"in"<<endl;
        Point cur = que.front(); que.pop();
        if(cur.first==ex&&cur.second==ey)
        {
            map[cur.first][cur.second]='.';
            break;
        }
        for(int i=0;i<4;i++)
        {
            //cout<<"here"<<endl;
            int nx = cur.first+drc[i][0];
            int ny = cur.second+drc[i][1];

            if((d[nx][ny]==INF)&&map[nx][ny]!='X')
            {
                d[nx][ny]=d[cur.first][cur.second]+1;
                //if(!(nx<0||nx>m-1||ny<0||ny<n-1))
                que.push(Point(nx,ny));
            }
        }
    }
    return d[ex][ey];
}
int main()
{
    memset(d,0,sizeof(d));
    scanf("%d%d%d",&m,&n,&x);
    bool start = false,ed = false;
    int ex[11]={0},ey[11]={0},ans=0,q=1,p=49;
    for(int i =0;i<m;i++)
            scanf("%s",map[i]);
    for(q=1;q<=x;q++,p++)
    for(int i=0;i<m;i++)
        for(int j=0;j<n;j++)
            {
                if(map[i][j]=='S')
                {
                    ex[0]=i;
                    ey[0]=j;
                }
                if(map[i][j]==p)
                {
                    ex[q]=i;
                    ey[q]=j;
                }
            }
    for(int i=0;i<x;i++)
        {
            ans+=bfs(ex[i],ey[i],ex[i+1],ey[i+1]);
            //cout<<i<<ex[i]<<"  "<<ey[i]<<endl;
            //cout<<ans<<endl;
            //cout<<i<<endl;
        }
    cout<<ans<<endl;
    return 0;
}