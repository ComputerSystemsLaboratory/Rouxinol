#include<iostream>
#include<cstdio>
#include<algorithm>
#include<queue>
#include<cstring>
using namespace std;
typedef pair<int,int> P;
int N,M,L,sx,sy,gx,gy,num;
const int INF = 100000000;
char maze[1100][1100];
int d[1100][1100];
int dx[4]={0,1,0,-1},dy[4]={1,0,-1,0};
P s[10];
void bfs()
{
	queue<P> que;
	for(int i=0;i<N;i++)
		for(int j=0;j<M;j++)
			d[i][j]=INF;
		que.push(P(sx,sy));
		d[sx][sy]=0;
	while(que.size())
	{
		P p=que.front() ;que.pop() ;
		if(p.first ==gx && p.second ==gy) break;
		for(int i=0;i<4;i++)
			{
				int nx=p.first +dx[i],ny=p.second +dy[i];
				if(nx>=0 && nx<N && ny>=0 && ny<M && maze[nx][ny]!='X' && d[nx][ny]==INF)
				{
					que.push(P(nx,ny));
					d[nx][ny]=d[p.first ][p.second ]+1; 
				}   
			}
	}
}
void solve()
{
	for(int i=0;i<L;i++)
	{
		sx=s[i].first ,sy=s[i].second;
		gx=s[i+1].first ,gy=s[i+1].second;
		bfs();
		num+=d[gx][gy];
	}
	printf("%d\n",num);
}
int main()
{
	while(~scanf("%d %d %d",&N,&M,&L))
	{
		num=0;
		for(int i=0;i<N;i++)
			for(int j=0;j<M;j++)
			{
				scanf("\n%c",&maze[i][j]);
				if(maze[i][j]=='S')
				s[0].first=i ,s[0].second=j ; 
				else if(maze[i][j]<='9' && maze[i][j] >='1')
				s[maze[i][j]-'0'].first =i,s[maze[i][j]-'0'].second =j;
			}
		solve();
	}
	return 0;
}