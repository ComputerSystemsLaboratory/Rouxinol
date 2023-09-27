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
int d[255];
bool vis[255];
void bfs(int cur,int n)
{
	queue<int> q;
	int u;
	q.push(cur);
	while(!q.empty())
	{
		u=q.front();q.pop();
		for(int i=1;i<=n;i++)
		{
			if(!map[u][i]) continue;
			if(d[i]>=0) continue;//不再重复计算或者入队 
			d[i]=d[u]+1;
			q.push(i);
		}
	}
	for(int i=1;i<=n;i++)
	{
		cout<<i<<" "<<d[i]<<endl;
	}
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
	for(int i=2;i<=n;i++)
	{
		d[i]=-1;
	}
	d[1]=0;
	bfs(1,n);
	return 0;
}
