/*
* Filename:    aoj0558.cpp
* Desciption:  BFS
* Created:     2016-03-05
* Author:      JIngwei Xu [mail:xu_jingwei@outlook.com]
*
*/
#include<iostream>
#include<stdio.h>
#include<algorithm>
#include<cstring>
#include<queue>
#define INT_MAX 1<<30
using namespace std;
const int INF=100000;
char s[1111];
int maze[1111][1111];
int N,H,W;
int sx,sy,ans,aim;
int d[1111][1111];
int dx[4]={1,-1,0,0},dy[4]={0,0,1,-1};
typedef pair<int,int> P;

void bfs(int x,int y){
	memset(d,-1,sizeof(d));
	queue<P> que;
	que.push(P(x,y));
	d[x][y]=0;
	int kx,ky;
	while (!que.empty())
	{
		P pp=que.front();que.pop();
		kx=pp.first;
		ky=pp.second;
		
		if(maze[kx][ky]==aim)break;
		int px,py;
		for (int i = 0; i < 4; i += 1)
		{
			px=kx+dx[i],py=ky+dy[i];
			if(px<0||py<0||px>=H||py>=W)continue;
			if(maze[px][py]==-1)continue;
			if(d[px][py]==-1){
				d[px][py]=d[kx][ky]+1;
				que.push(P(px,py));
			}
		}
	}
	sx=kx;sy=ky;
	ans+=d[kx][ky];
}
int main()
{
	scanf("%d%d%d",&H,&W,&N);
	for (int i = 0; i < H; i += 1)
	{
		scanf("%s",s);
		for (int j = 0; j < W; j += 1)
		{
			if(s[j]=='S'){
				sx=i;sy=j;
				maze[i][j]=0;
			}else if(s[j]=='.'){
				maze[i][j]=0;
			}else if(s[j]=='X'){
				maze[i][j]=-1;
			}else{
				maze[i][j]=s[j]-'0';
			}
		}
	}
	ans=0;
	aim=0;
	while (aim<N)
	{
		aim++;
		bfs(sx,sy);
	}
	cout<<ans<<endl;
	return 0;
}