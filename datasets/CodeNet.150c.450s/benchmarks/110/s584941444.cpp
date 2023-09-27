#include <iostream>
#include <cstring>
#include <cstdio>
#include <queue>
using namespace std;

const int MAX=1010;
char map[MAX][MAX];
int vis[MAX][MAX];
int  h,w,n;
int sx,sy;
int e[MAX][3];
int fx[]={1,-1,0,0};
int fy[]={0,0,1,-1};
struct node
{
    int x,y,step;
};
int bfs(int x,int y,int ex,int ey)
{
    memset(vis,0,sizeof(vis));
    vis[x][y]=1;
    node a;
    a.x=x,a.y=y,a.step=0;
    queue<node>Q;
    Q.push(a);
    while(!Q.empty())
    {
        node p=Q.front();
        Q.pop();
        if(p.x==ex&&p.y==ey)
        {
            sx=p.x,sy=p.y;
            return p.step;
        }
        for(int i=0;i<4;++i )
        {
            int tx=p.x+fx[i];
            int ty=p.y+fy[i];
            if(tx<1||tx>h||ty<1||ty>w||vis[tx][ty]||map[tx][ty]=='X')
                continue;
            vis[tx][ty]=1;
            node s;
            s.x=tx,s.y=ty,s.step=p.step+1;
            Q.push(s);
        }
    }

}
int main()
{
    while(scanf("%d%d%d",&h,&w,&n)!=EOF)
    {
        if(n==0&&w==0)
            break;
        for(int i=1;i<=h;++i)
        {
            scanf("%s",map[i]+1);
            for(int j=1;j<=w;++j)
            {
                if(map[i][j]=='S')
                {
                    sx=i,sy=j;
                }
                else if(map[i][j]!='X'&&map[i][j]!='.')
                {
                    e[map[i][j]-'0'][0]=i;
                    e[map[i][j]-'0'][1]=j;
                }
            }
        }
        int ans=0;
        for(int i=1;i<=n;++i)
        {
            ans+=bfs(sx,sy,e[i][0],e[i][1]);
        }
        printf("%d\n",ans);
    }
    return 0;
}