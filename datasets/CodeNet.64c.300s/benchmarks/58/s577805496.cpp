#include <iostream>
#include <algorithm>
#include <functional>
#include <cstring>
#include <cstdio>
#include <cstdlib>
#include <cmath>

using namespace std;

int n,m,dx[]={-1,1,0,0},dy[]={0,0,-1,1};
char a[1002][1002];
bool v[1002][1002];

void dfs(int x,int y,char c)
{
	if(v[x][y])return;
	if(a[x][y]!=c)return;
	v[x][y]=1;
	for(int i=0;i<4;++i)
	{
		dfs(x+dx[i],y+dy[i],c);
	}
}
int main()
{
	while(1)
	{
		scanf("%d%d",&n,&m);getchar();
		if(n==0&&m==0)break;
		for(int i=1;i<=n;++i)
		{
			for(int j=1;j<=m;++j)
			{
				scanf("%c",&a[i][j]);
			}
			getchar();
		}
		int cnt=0;
		for(int i=1;i<=n;++i)
		{
			for(int j=1;j<=m;++j)
			{
				if(!v[i][j])
				{
					++cnt;
					dfs(i,j,a[i][j]);
				}
			}
		}
		printf("%d\n",cnt);
		for(int i=1;i<=n;++i)
		{
			for(int j=1;j<=m;++j)
			{
				v[i][j]=0;
				a[i][j]=0;
			}
		}
	}
	return 0;
}