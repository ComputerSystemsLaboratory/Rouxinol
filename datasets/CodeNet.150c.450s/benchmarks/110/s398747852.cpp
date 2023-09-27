#include<iostream>
#include<cstring>
#include<queue>
#include<cstdio>
#include<algorithm>

int h,w,n,nxtx,nxty,startx,starty,ans,dir[4][2]={{0,1},{0,-1},{-1,0},{1,0}};
char map[1005][1005];
bool flag[1005][1005];
using namespace std;

struct point{
	int x,y,step;
}temp,des[15];

int bfs(point a,point b)
{
	memset(flag,false,sizeof(flag));
	queue<point> que;
	a.step=0;flag[a.x][a.y]=true;
	que.push(a);
	while(!que.empty())
	{
		for(int i=0;i<4;i++)
		{
			temp=que.front();
			nxtx=temp.x+dir[i][0];nxty=temp.y+dir[i][1];
			if(nxtx<0||nxty<0||nxtx>=h||nxty>=w||flag[nxtx][nxty]||map[nxtx][nxty]=='X') continue;
			flag[nxtx][nxty]=true;
			temp.step++;temp.x+=dir[i][0];temp.y+=dir[i][1];
			que.push(temp);
			if(nxtx==b.x&&nxty==b.y)
			   return temp.step;
		}
		que.pop();
	}
	return -1;
}

int main()
{
	ans=0;
	scanf("%d%d%d",&h,&w,&n);
	for(int i=0;i<h;i++)
	{
		getchar();
		for(int j=0;j<w;j++)
		{
			scanf("%c",&map[i][j]);
			if(map[i][j]=='S'){des[0].x=i;des[0].y=j;}
			if(map[i][j]<='9'&&map[i][j]>='1')
			{des[map[i][j]-'0'].x=i;des[map[i][j]-'0'].y=j;}
		}
	}
	for(int i=0;i<n;i++)
	   ans+=bfs(des[i],des[i+1]);
	printf("%d\n",ans);
}
