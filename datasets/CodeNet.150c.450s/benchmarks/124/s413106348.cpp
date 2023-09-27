#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cstring>
#include<string>
#include<set> 
#include<queue>
#include<cstdlib>
using namespace std;

 
int main()
{
	int n;
	scanf("%d",&n);
	int vv[105][105]={0},ans[105]={0},vis[105]={0};
	for(int i=0;i<n;i++)
	{
		int x,y;
		scanf("%d %d",&x,&y);
		while(y--)
		{
			int a,b;
			scanf("%d %d",&a,&b);
			vv[x][a]=b;
		}
	} 
	fill(ans,ans+n,2000000000);
	ans[0]=0;
	while(1)
	{
		int v=-1;
		for(int u=0;u<n;u++)
		{
			if(vis[u]==0&&(v==-1||(ans[u]<ans[v]&&ans[u]!=0))) v=u;
		}
		if(v==-1) break;
		vis[v]=1;
		for(int u=0;u<n;u++)
		{
			if(vv[v][u]!=0) ans[u]=min(ans[u],ans[v]+vv[v][u]);
		}
	}
	for(int i=0;i<n;i++)
	{
		printf("%d %d\n",i,ans[i]);
	} 
	
	return 0;
}
