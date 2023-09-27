#include<cstdio>
#include<algorithm>
#include<cstring>
#include<queue>
using namespace std;

const int N=1000;
const int wal[][2]={{1,0},{-1,0},{0,1},{0,-1}};

int n,m,k,ans;
char ma[N+5][N+5];
bool vis[N+5][N+5];
struct node
{
	int x,y,p;
}t;

inline bool Pan(int x,int y)
{
	return (x>=1 && x<=n) && (y>=1 && y<=m);
}

queue<node> Q;
void Bfs(int bx,int by,int p)
{
	while(!Q.empty()) Q.pop();
	
	vis[bx][by] = 1;
	t.x=bx,t.y=by,t.p=ans;
	Q.push(t);
	
	while(!Q.empty())
	{
		node q=Q.front(); Q.pop();
		if(ma[q.x][q.y] - '0' == p+1)
		{
			ans = q.p;
			return ;
		}
		for(int i=0;i<4;i++)
		{
			int fx=q.x+wal[i][0],fy=q.y+wal[i][1];
			if(Pan(fx,fy) && !vis[fx][fy] && ma[fx][fy] != 'X')
			{
				vis[fx][fy] = 1;
				t.x=fx;t.y=fy;t.p=q.p+1;
				Q.push(t);
			}
		}
	}
}

int main()
{
	scanf("%d %d %d",&n,&m,&k);
	for(int i=1;i<=n;i++)
		scanf("%s",ma[i]+1);
	for(int p=0;p<k;p++)
		for(int i=1;i<=n;i++)
			for(int j=1;j<=m;j++)
				if(ma[i][j] == ( !p ? 'S' : p+'0'))
				{
					memset(vis,0,sizeof(vis));
					Bfs(i,j,p);
					break;
				}
	printf("%d\n",ans);
	return 0;
}
