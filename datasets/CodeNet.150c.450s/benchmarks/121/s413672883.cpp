#include<iostream>
#include<cstdio>
using namespace std;
int b[200][200];
int n,m;
char a[200][200];
int dx[4]={1,0,-1,0};
int dy[4]={0,1,0,-1};
void dfs(int x,int y)
{
	int nx,ny;
	for(int i=0;i<4;i++)
	{
		nx=x+dx[i];
		ny=y+dy[i];
		if(nx>=1&&ny>=1&&nx<=n&&ny<=m&&!b[nx][ny]&&a[nx][ny]==a[x][y])
		{
			b[nx][ny]=true;
			dfs(nx,ny);
		}
	}
}
int main()
{   int i,j;
	int ans;
	while(scanf("%d%d",&n,&m))
	{	
		ans=0;
		if(n==0)
			break;
		for(i=1;i<=n;i++)
			for(j=1;j<=m;j++)
			{
				cin>>a[i][j]; 
				b[i][j]=0;
			}
		for(i=1;i<=n;i++)
			for(j=1;j<=m;j++)
			{
				if(!b[i][j])
				{
					b[i][j]=true;
					ans++;
					dfs(i,j);
				}				
			}
	printf("%d\n",ans);	
	}	
} 
