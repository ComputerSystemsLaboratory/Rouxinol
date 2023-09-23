#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
int n,m;
int a[100][10010];
int maxn=0;
void dfs(int x)
{
	if(x==n+1)
	{
		int t=0;
		for(int i=0;i<m;i++)
		{
			int s=0;
			for(int j=0;j<n;j++)
			if(a[j][i]==1)
			s++;
	    	t+=max(s,n-s);
		}
		maxn=max(maxn,t);
		return ;
	}
	dfs(x+1);
	for(int j=0;j<m;j++)
	{
		a[x][j]=!a[x][j];
	}
	dfs(x+1);
}
int main()
{
	while(scanf("%d%d",&n,&m)!=EOF&&(n+m))
	{
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
			scanf("%d",&a[i][j]);
		}
		dfs(0);
    	printf("%d\n",maxn);
	}
	
    return 0;
}

