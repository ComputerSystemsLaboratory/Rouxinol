#include<stdio.h>
#include<string.h>
char map[105][105];
int n,m,dx[]={0,0,-1,1},dy[]={1,-1,0,0},ans;
void dfs(int x,int y,char ch)
{
	map[x][y]=0;
	for(int i=0;i<4;++i)
	{
		int tx=x+dx[i],ty=y+dy[i];
		if(tx<0||tx>=n||ty<0||ty>=m||map[tx][ty]!=ch)
		{
			continue;
		}
		dfs(tx,ty,ch);
	}
}
int main()
{
	while(scanf("%d%d",&n,&m),n|m)
	{
		for(int i=0;i<n;++i)
		{
			scanf("%s",&map[i]);
		}
		ans=0;
		for(int i=0;i<n;++i)
		{
			for(int j=0;j<m;++j)
			{
				if(map[i][j])
				{
					++ans;
					dfs(i,j,map[i][j]);
				}
			}
		}
		printf("%d\n",ans);
	}
	return 0;
}