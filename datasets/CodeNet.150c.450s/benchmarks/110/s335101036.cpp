#include <stdio.h>
#include <string.h>
#include <iostream>
#include <algorithm>
#include <math.h>
#include <vector>
#include <queue>
using namespace std;
int n,m,p;
int sx,sy;
char s[1505][1505];
struct node{
	int x,y,step;
	node(int sx,int sy,int step)
	{
		this->x=sx;this->y=sy;this->step=step;
	}
};
int dx[4]={0,0,-1,1};
int dy[4]={1,-1,0,0};
int vis[1505][1500];
node bfs(node u,int pos)
{
	queue<node> q;
	while(!q.empty())q.pop();
	q.push(u);
	
	while(!q.empty())
	{
		node v=q.front();q.pop();
		if(s[v.x][v.y]==pos+'0') return v;
		for(int i=0;i<4;i++)
		{
			int x=v.x+dx[i];
			int y=v.y+dy[i];
			if(x>=1&&x<=n&&y>=1&&y<=m&&s[x][y]!='X'&&vis[x][y]==0)
			{
				vis[x][y]=1;
				node now=node(x,y,v.step+1);
				q.push(now);
			}
		}
	}
}
int main()
{
	while(cin>>n>>m>>p)
	{
		int ans=0;
		for(int i=1;i<=n;i++)
		{
			cin>>s[i]+1;
			for(int j=1;j<=m;j++)
			{
				if(s[i][j]=='S') sx=i,sy=j;
			}
		}
		node u=node(sx,sy,0);	
		for(int i=1;i<=p;i++)
		{		
			memset(vis,0,sizeof(vis));
			vis[u.x][u.y]=1;
			u=bfs(u,i);
			ans+=u.step;
			u.step=0;
		}
		cout<<ans<<endl;
	}
	return 0;
}
