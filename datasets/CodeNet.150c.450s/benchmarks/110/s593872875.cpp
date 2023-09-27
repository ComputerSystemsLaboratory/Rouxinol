#include<cstdio>
#include<algorithm>
#include<queue>
#include <iostream>
#define inf 1000000
using namespace std;
int H,W,N,x0,y0;
char map[1005][1005];int d[1005][1005];
int dx[4]={-1,0,1,0};
int dy[4]={0,-1,0,1};
typedef pair<int,int>P;
struct position
{
	int rx,ry,e;
}xy[9];
bool comp(const position a,const position b)
{
	return a.e<b.e;
}
int bfs(int sx,int sy,int gx,int gy)
{
	int tx,ty;
	queue<P>q;

	for(int i=0;i<H;i++)
	{
		for(int j=0;j<W;j++)
		d[i][j]=inf;
	}
	q.push(P(sx,sy));
	d[sx][sy]=0;
	while(!q.empty())
	{
		P p=q.front();
		if(p.first==gx&&p.second==gy)
		return d[p.first][p.second];
		q.pop();
		for(int i=0;i<4;i++)
		{
			tx=p.first+dx[i];
			ty=p.second+dy[i];
			if(tx>=0&&tx<H&&ty>=0&&ty<W&&map[tx][ty]!='X'&&d[tx][ty]==inf)
			{
				d[tx][ty]=d[p.first][p.second]+1;
				q.push(P(tx,ty));
			}
		}
	}
}
int main(void)
{
	while(scanf("%d%d%d",&H,&W,&N)==3)
	{
		int x1[9],y1[9];
		for(int i=0;i<H;i++)
		scanf("%s",&map[i]);
		int t=0;
		for(int i=0;i<H;i++)
		{
			for(int j=0;j<W;j++)
			{
				if(map[i][j]=='S')
				{
					x0=i;
					y0=j;
				}
				if(map[i][j]-'0'>0&&map[i][j]-'0'<=9)
				{
					xy[t].rx=i;
					xy[t].ry=j;
					xy[t].e=map[i][j]-'0';
					t++;
				}
			}
		}

		sort(xy,xy+N,comp);
		int ans=bfs(x0,y0,xy[0].rx,xy[0].ry);
		for(int i=0;i<N-1;i++)
		ans+=bfs(xy[i].rx,xy[i].ry,xy[i+1].rx,xy[i+1].ry);
		printf("%d\n",ans);
	}
	return 0;
}