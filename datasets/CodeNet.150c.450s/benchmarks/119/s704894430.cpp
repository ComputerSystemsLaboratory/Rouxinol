#include <cstdio>
using namespace std;

int W,H;
int dx[]={-1,0,1,0,-1,-1,1,1};
int dy[]={0,-1,0,1,-1,1,-1,1};
int f[50][50];

void dfs(int x, int y)
{
	f[x][y]=0;
	for(int i=0; i<8; i++)
	{
		int tx=x+dx[i], ty=y+dy[i];
		if(tx<0||ty<0||tx>=W||ty>=H) continue;
		if(f[tx][ty]==0) continue;
		
		dfs(tx,ty);
	}
}

int main()
{
	while(scanf("%d%d", &W,&H), (W||H))
	{
		for(int i=0; i<H; i++)
		for(int j=0; j<W; j++)
			scanf("%d", &f[j][i]);
			
		int ans=0;
		for(int i=0; i<H; i++)
		for(int j=0; j<W; j++)
		{
			if(f[j][i])
			{
				ans++;
				dfs(j,i);
			}
		}
		
		printf("%d\n", ans);
	}
}