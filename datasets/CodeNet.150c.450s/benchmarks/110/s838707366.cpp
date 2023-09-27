#include<iostream>
#include<queue>
#include<cstdio>
#include<cstring>
#include<utility>
using namespace std;
struct dir
{
	int x,y;
}dir[4]={{-1,0},{1,0},{0,-1},{0,1}};
char hole[1005][1005];
int d[1005][1005],h,w,factory[10][2];
typedef pair<int,int> P;
int bfs(const int &sx,const int &sy,const int &gx,const int &gy)
{
	for (int i = 0; i < h; i++)
	{
		for (int j = 0; j < w; j++)
		{
			d[i][j] = -1;
		}
	}
	//memset(d,-1,sizeof(d));
	queue<P> que;
	que.push(P(sx,sy));
	d[sx][sy]=0;
	while(que.size())
	{
		P p=que.front();
		que.pop();	
		if(p.first==gx&&p.second==gy)
		break;
		for(int i=0;i<4;i++)
		{
		int nx=p.first+dir[i].x;
		int ny=p.second+dir[i].y;
		if(nx>=0&&ny>=0&&nx<h&&ny<w&&hole[nx][ny]!='X'&&d[nx][ny]==-1)
		{
			d[nx][ny]=d[p.first][p.second]+1;
			que.push(P(nx,ny));
		}
		}
	}
	return d[gx][gy];
}
int main()
{
	int sx,sy,i,j,step=0,n;
	scanf("%d%d%d\n",&h,&w,&n);
	//cin>>h>>w>>n;
	for(i=0;i<h;i++,getchar())
		for(j=0;j<w;j++)
		{
			scanf("%c",&hole[i][j]);
			if(hole[i][j]=='S')
			{
				factory[0][0]=i;
				factory[0][1]=j;
				hole[i][j]='.';
			}
			if(isdigit(hole[i][j]))
			{
				int index=hole[i][j]-'0';
			factory[index][0]=i;
			factory[index][1]=j;
			}
		}
	for(i=0;i<n;i++)
	step+=bfs(factory[i][0],factory[i][1],factory[i+1][0],factory[i+1][1]);
	//cout<<step<<endl;
	printf("%d\n",step);
	return 0;
 } 