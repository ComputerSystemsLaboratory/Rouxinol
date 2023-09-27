#include<stdio.h>
#include<string.h>
#include<queue>
using namespace std;
const int maxn=1005;
int n,m,k,dx[]={-1,1,0,0},dy[]={0,0,1,-1},vis[maxn][maxn];
char map[maxn][maxn];
struct maze
{
    maze(int xx=0,int yy=0,int tt=0):x(xx),y(yy),time(tt){}
	int x,y,time;
};
maze bfs(int bx,int by,char ch)
{
	memset(vis,0,sizeof(vis));
	queue<maze> q;
	maze st(bx,by,0);
	q.push(st);vis[bx][by]=1;
	while(!q.empty())
	{
		st=q.front();q.pop();
		if(map[st.x][st.y]==ch)
		{
			return st;
		}
		for(int i=0;i<4;++i)
		{
			int tx=st.x+dx[i],ty=st.y+dy[i];
			if(tx<0||tx>=n||ty<0||ty>=m||map[tx][ty]=='X')//越界和?
			{
				continue;
			}
			maze tp(tx,ty,st.time+1);
			if(!vis[tx][ty])
			{
				vis[tx][ty]=1;
				q.push(tp);
			}
		}
	}
}
int main()
{

	while(~scanf("%d%d%d",&n,&m,&k))
	{
		int bx,by;
		for(int i=0;i<n;++i)
		{
			scanf("%s",map[i]);
			for(int j=0;j<m;++j)
			{
				if(map[i][j]=='S')
				{
					bx=i;by=j;
					
					map[i][j]='0'; //第0个起点
				}
			}
		}
		int ans=0;
		for(int i=0;i<k;++i)
		{
			maze tp=bfs(bx,by,map[bx][by]+1);
			ans+=tp.time;
			bx=tp.x;by=tp.y;
		}
		printf("%d\n",ans);
	}
	return 0;
}