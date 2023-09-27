#include<iostream>
#include<cstdio>
#include<queue>
#include<algorithm>
#include<cstring>
using namespace std;
int h,w,n;
char map[1005][1005];
bool vis[1005][1005];
int dx[]={0,0,1,-1},dy[]={1,-1,0,0};
int cnt;
int f[1001*1001];

int BFS(int x,int y,int t)
{
	int m;
	memset(vis,0,sizeof vis);
	for(int i=1;i<=h;i++)
	{
		for(int j=1;j<=w;j++)
		{
			if(map[i][j]=='X')
			{
				vis[i][j]==1;
			}
		}
	}
	queue<int> q;
	q.push(x*1001+y);
	int xxx,yyy;
	while(!q.empty())
	{
		int xx=q.front()/1001,yy=q.front()%1001;
		q.pop();
		if(map[xx][yy]=='0'+t)
		{
			xxx=xx,yyy=yy;
			break;
		}
		for(int i=0;i<4;i++)
		{
			if(!vis[xx+dx[i]][yy+dy[i]]&&map[xx+dx[i]][yy+dy[i]]!='X')
			{
				q.push((xx+dx[i])*1001+yy+dy[i]);
				vis[xx+dx[i]][yy+dy[i]]=1;
				f[(xx+dx[i])*1001+yy+dy[i]]=xx*1001+yy;
			}
		}
	}
	m=1;
	int s=xxx*1001+yyy;
	while(f[s]!=x*1001+y)
	{
		m++;
		s=f[s];
	}
	return m;
}

int bfs(int f,int t)

{
	for(int i=1;i<=h;i++)
	{
		for(int j=1;j<=w;j++)
		{
			if(map[i][j]-'0'==f)
			{
				//cout<<i<<j;
				return(BFS(i,j,t));
			}
		}
	}
}



int main()
{
	cin>>h>>w>>n;
	cnt=0;
	memset(map,'X',sizeof map);
	for(int i=1;i<=h;i++)
	{
		for(int j=1;j<=w;j++)
		{
			cin>>map[i][j];
		}
	}
	for(int i=1;i<=h;i++)
	{
		for(int j=1;j<=w;j++)
		{
			if(map[i][j]=='S')
			{
				map[i][j]='0';
			}
		}
	}
	for(int i=0;i<n;i++)
		cnt+=bfs(i,i+1);
	cout<<cnt<<endl;
}
