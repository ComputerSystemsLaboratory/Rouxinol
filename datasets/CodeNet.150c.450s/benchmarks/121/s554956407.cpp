#include "cstdio"
#include "cstring"
using namespace std;

const int maxn=120;
int n,m,ans;
int dx[4]={0,0,1,-1};
int dy[4]={1,-1,0,0};
int vis[maxn][maxn];
char mp[maxn][maxn];

void dfs(int x,int y,char t)
{
	vis[x][y]=1;
	for(int i=0;i<4;i++)
	{
		int px=x+dx[i];
		int py=y+dy[i];
		if(px>=0 && py>=0 && px<n && py<m && !vis[px][py] && mp[px][py]==t)
			dfs(px,py,t);
	}
}

int main()
{
	//freopen("c.txt","r",stdin);
	while(scanf("%d%d",&n,&m) && n && m)
	{
		for(int i=0;i<n;i++)
			for(int j=0;j<m;j++)
			{
				mp[i][j]=getchar();
				while(mp[i][j]=='\0' || mp[i][j]=='\n')mp[i][j]=getchar();
			}
		ans=0;
		memset(vis,0,sizeof(vis));
		for(int i=0;i<n;i++)
			for(int j=0;j<m;j++)
				if(!vis[i][j])
				{
					ans++;
					dfs(i,j,mp[i][j]); 
				}
		printf("%d\n",ans);
	}
	return 0;
}
