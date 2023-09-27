#include <iostream>
#include <stdio.h>
#include <cstring>
#include <queue>
using namespace std;

char ma[1005][1005];int vis[1005][1005];
int w,h,n;

int dx[]={1,0,-1,0};
int dy[]={0,1,0,-1};

struct node
{
    int x,y,time;
};
node start;

void bfs(char ed)
{
    queue<node> que;
    que.push(start);
    vis[start.x][start.y]=1;
    while(!que.empty())
    {
        node no=que.front();
        que.pop();
        for(int i=0;i<4;i++)
        {
            int x=no.x+dx[i];
            int y=no.y+dy[i];
            if(vis[x][y]||x>=h||x<0||y>=w||y<0||ma[x][y]=='X')
                continue;
            if(ma[x][y]==ed)
            {
                start.x=x;
                start.y=y;
                start.time=no.time+1;
                return ;
            }
            vis[x][y]=1;
            node no1;
            no1.x=x;no1.y=y;no1.time=no.time+1;
            que.push(no1);
        }
    }
}

int main()
{
    while(~scanf("%d %d %d", & h, & w, & n))
    {
        for(int i=0;i<h;i++)
        {
            scanf("%s",&ma[i]);
            for(int j=0;j<w;j++)
                if(ma[i][j]=='S')
                {
                    start.x=i;
                    start.y=j;
                    start.time=0;
                }

        }
            for(int i=0;i<n;i++)
            {
                memset(vis,0,sizeof(vis));
                bfs(i+'1');
            }

            printf("%d\n",start.time);
    }
    return 0; 
}