#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <algorithm>
#include <cstring>
#include <queue>
using namespace std;
int r,c,n;
int ans;
char map[1005][1005];
bool book[1005][1005];
int dir[4][2]={{-1,0},{0,-1},{0,1},{1,0}};
struct point
{
    int x,y;
    int step;
}p[11],now,last;
bool check(int x,int y)
{
    if(x<0||x>=r||y<0||y>=c)
        return 0;
    return 1;
}
void bfs(int st)
{
    p[st].step=0;
    queue<point> q;
    now=p[st];
    q.push(now);
    book[now.x][now.y]=1;
    while(!q.empty())
    {
        now=q.front();
        q.pop();
        for(int i=0;i<4;i++)
        {
            last.x=now.x+dir[i][0];
            last.y=now.y+dir[i][1];
            last.step=now.step+1;
            if(!check(last.x,last.y))    continue;
            if(map[last.x][last.y]=='X'|| book[last.x][last.y]==1)    continue;
            if(last.x==p[st+1].x && last.y==p[st+1].y)
            {
                ans+=last.step;
                return;
            }
            book[last.x][last.y]=1;
            q.push(last);
        }
    }
}
int main()
{
    while(~scanf("%d%d%d",&r,&c,&n))
    {
        for(int i=0;i<r;i++)
        {
            getchar();
            for(int j=0;j<c;j++)
            {
                scanf("%c",&map[i][j]);
                if(map[i][j]=='S')
                {
                    p[0].x=i;
                    p[0].y=j;
                }
                if(map[i][j]!='S'&&map[i][j]!='X'&&map[i][j]!='.')
                {
                    p[map[i][j]-'0'].x=i;
                    p[map[i][j]-'0'].y=j;
                }
            }
        }
        ans=0;
        for(int i=0;i<n;i++)
        {
            memset(book,0,sizeof(book));
            bfs(i);
        }
        cout<<ans<<endl;
    }
    //system("pause");
    return 0;
}
