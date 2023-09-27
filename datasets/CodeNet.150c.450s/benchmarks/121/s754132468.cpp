#include<iostream>
#include<cstring>
#include<cstdio>
#include<algorithm>
using namespace std;
char a[101][101];
int b[101][101];
int dx[4]={1,0,-1,0};
int dy[4]={0,1,0,-1};
int h,w;
void dfs(int x,int y)
{
	int i,j;
	b[x][y]=1;
	for(i=0;i<4;i++)
	{
		int nx,ny;
		nx=x+dx[i];
		ny=y+dy[i];
		if(nx>=0&&nx<h&&ny>=0&&ny<w&&a[nx][ny]==a[x][y]&&!b[nx][ny])
		{	
			dfs(nx,ny);
		}
	}
}
int main()
{
	int i,j;
	while(scanf("%d%d",&h,&w))
	{	
		int ans;
		ans=0;
		if(h==0)
			break;
		for(i=0;i<h;i++)
			for(j=0;j<w;j++)
				cin>>a[i][j];
		memset(b,0,sizeof(b));
		for(i=0;i<h;i++)
			for(j=0;j<w;j++)
			{
				if(!b[i][j])
				{	
					
					dfs(i,j);
					ans++;
				}
			}

		printf("%d\n",ans);
	}
	return 0;
} 
