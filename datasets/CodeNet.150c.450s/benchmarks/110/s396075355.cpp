#include <cstdio>
#include <cstring>
#include <algorithm>
#include <cmath>
#include <climits>
#include <queue>
using namespace std;
const int N=1000;
char maze[N][N];
int h,w,n;
int sx,sy,gx,gy;
int dir[4][2]={1,0,-1,0,0,1,0,-1};
int d[N][N];
const int INF=INT_MAX;
int ans;
struct node
{
    node(int xx=0,int yy=0,int tt=0,char ss=0):x(xx),y(yy),t(tt),s(ss){}
    int x;
    int y;
    int t;
    char s;
};
bool read()
{
    memset(maze,0,sizeof(maze));
    scanf("%d%d%d",&h,&w,&n);
    getchar();
    for(int i=0;i<h;i++)
    {
        for(int j=0;j<w;j++)
        {
            scanf("%c",&maze[i][j]);
            if(maze[i][j]=='S') sx=j,sy=i;
            if(maze[i][j]=='0'+n) gy=i,gx=j;
        }
        getchar();
    }
    for(int i=0;i<h;i++)
       for(int j=0;j<w;j++) d[i][j]=INF;
    return 1;
}
void show()
{
    //printf("h:%d w:%d\n",h,w);
    //printf("maze[%d][%d]=%d\n",0,2,maze[0][2]);
    for(int i=0;i<h;i++)
    {
        for(int j=0;j<w;j++)
        {
            if(d[i][j]!=INF) printf("%d ",d[i][j]);
            else printf("- ");
        }
        printf("\n");
    }
    //printf("sy:%d sx:%d\n",sy,sx);
}
void init(int h,int w)
{
    for(int i=0;i<h;i++)
        for(int j=0;j<w;j++) d[i][j]=INF;
}
int bfs()
{
   queue<node> que;
   que.push(node(sx,sy,0,'1'));
   d[sy][sx]=0;
   while(!que.empty())
   {

       node t=que.front();que.pop();
       //printf("%c\n",t.s);
       for(int i=0;i<4;i++)
       {
           int nx=t.x+dir[i][0];
           int ny=t.y+dir[i][1];
           if(0<=nx&&nx<w&&0<=ny&&ny<h&&d[ny][nx]==INF&&maze[ny][nx]!='X'/*(maze[ny][nx]=='.'||maze[ny][nx]==t.s)*/)
           {
               if(maze[ny][nx]=='0'+n&&maze[ny][nx]==t.s)
               {
                   //printf("%c in return",maze[ny][nx]);
                   return ans+=d[t.y][t.x]+1;
               }
               if(maze[ny][nx]==t.s)
               {
                   //printf("%c d\n",maze[ny][nx]);
                   maze[ny][nx]='.';
                    d[ny][nx]=d[t.y][t.x]+1;
                    ans+=d[ny][nx];
                    //show();
                    while(!que.empty()) que.pop();
                    init(h,w);
                    d[ny][nx]=0;
                   que.push(node(nx,ny,0,t.s+1));
                   break;
               }
               else
               {
                   que.push(node(nx,ny,0,t.s));
                    d[ny][nx]=d[t.y][t.x]+1;
               }
           }
       }
       //int size=que.size();
        //printf("size:%d\n",size);
   }
   return 1/*d[gy][gx]*/;
}
int main()
{
    while(~scanf("%d%d%d",&h,&w,&n))
    {
        getchar();
        memset(maze,0,sizeof(maze));
        ans=0;
        for(int i=0;i<h;i++)
        {
            for(int j=0;j<w;j++)
            {
                scanf("%c",&maze[i][j]);
                if(maze[i][j]=='S') sx=j,sy=i;
                if(maze[i][j]=='0'+n) gy=i,gx=j;
            }
            getchar();
        }
        for(int i=0;i<h;i++)
            for(int j=0;j<w;j++) d[i][j]=INF;
        bfs();
        printf("%d\n",ans);
    }
    return 0;
}