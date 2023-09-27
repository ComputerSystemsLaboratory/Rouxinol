#include <cstdio>
#include<cstring>
#include <algorithm>
#include <queue>
#define max 1005
using namespace std;
char map[max][max];
bool vis[max][max];
int h,w,n,ans;
int dx[4] = {-1, 1, 0, 0};
int dy[4] = {0, 0, -1, 1};
struct node
{
    int x;
    int y;
    int time;
} start;
void BFS(node st,char ed)
{
    queue<node>q;
    q.push(st);
    vis[st.x][st.y]=1;
    while(!q.empty())
    {
        node now=q.front();
        q.pop();
        for(int i=0;i<4;i++)
        {
            node next=now;
            next.x+=dx[i];
            next.y+=dy[i];
            next.time++;
            if(next.x>=0&&next.x<h&&next.y>=0&&next.y<w&&map[next.x][next.y]!='X'&&!vis[next.x][next.y])
            {
                if(map[next.x][next.y]==ed)
                {
                    ans+=next.time;
                    next.time=0;
                    start=next;
                    return ;
                }
                else
                {
                    q.push(next);
                    vis[next.x][next.y]=1;
                }
            }
        }
    }
}
int main(void)
{
    while(scanf("%d%d%d",&h,&w,&n)==3)
    {
        for(int i=0;i<h;i++)
        scanf("%s",&map[i]);
        for(int i=0;i<h;i++)
        {
        	for(int j=0;j<w;j++)
        	{
                if(map[i][j] == 'S')
                {
                start.x = i;
                start.y = j;
                start.time = 0;
                }
			}
		}
        ans=0;
        for(int i=1;i<=n;i++)
        {
            memset(vis, 0, sizeof(vis));
            BFS(start,'0'+i);
        }
        printf("%d\n", ans);
    }
    return 0;
}