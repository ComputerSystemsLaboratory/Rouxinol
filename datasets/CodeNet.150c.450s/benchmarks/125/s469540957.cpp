#include <iostream>
#include <cstring>
#include <cstdlib>
#include <sstream>
#include <stack>
#include <queue>
#include <list>
#include <stdio.h>
#include <algorithm>
#define MAX 100000
using namespace std;
typedef long long ll;
int map[255][255];
int f[255],d[255],tt=0;
bool vis[255];
void dfs(int n,int u)
{
	if(vis[u]) return;
	vis[u]=true;
	tt++;
	d[u]=tt;
	for(int i=1;i<=n;i++)
	{
		if(map[u][i]) dfs(n,i);
	}
	tt++;
	f[u]=tt;
	return; 
}
int main()
{	
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
		for(int j=1;j<=n;j++)
		{
			map[i][j]=0;
		}
	for(int i=0;i<n;i++)
	{
		int cur,k,u;
		cin>>cur>>k;
		while(k--)
		{
			cin>>u;
			map[cur][u]=1;
		}
	}
	for(int i=1;i<=n;i++)
	{
		vis[i]=false;
	}
	for(int i=1;i<=n;i++)
	{
		if(!vis[i]) dfs(n,i);
	}
	for(int i=1;i<=n;i++)
	{
		cout<<i<<" "<<d[i]<<" "<<f[i]<<endl;
	}
	return 0;
}
