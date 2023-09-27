#include<cstdio>
#include<iostream>
#include<cstring>
#include<algorithm>
#include<queue>
using namespace std;
int n,m;
char map[105][105];
int dx[4]={1,0,-1,0};
int dy[4]={0,1,0,-1};
void show()
{
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			cout<<map[i][j];
		}
		cout<<endl;
	}
	cout<<endl<<endl;
}
void bfs(int x,int y,char now)
{
	queue<int>qx;
	queue<int>qy;
	qx.push(x);
	qy.push(y);

	int xx,yy;
	while(!qx.empty())
	{
		x=qx.front();
		y=qy.front();
		map[x][y]='.';
		qx.pop();
		qy.pop();
		for(int i=0;i<4;i++)
		{
			xx=x+dx[i];
			yy=y+dy[i];
			if(map[xx][yy]==now)
			{
				qx.push(xx);
				qy.push(yy);
				map[xx][yy]='.';
			}
		}
	//	show();
	}
}
int main()
{
	memset(map,'.',sizeof(map));
	while(cin>>n>>m)
	{
		if(n==0&&m==0)return 0;
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=m;j++)
			{
				cin>>map[i][j];
			}
		}
		int cnt=0;
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=m;j++)
			{
				if(map[i][j]!='.')
				{
					bfs(i,j,map[i][j]);
					cnt++;
				}
			}
		}
		cout<<cnt<<endl;
	}
}
