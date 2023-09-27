#include<cstdio>
#include<cstring>
#include<queue>
using namespace std;
#define MAXN 1005
#define inside(x,y) (x>0&&y>0&&x<=h&&y<=w)
#define encode(x,y) ((x-1)*w+y)
#define decodex(s) ((s-1)/w+1)
#define decodey(s) ((s-1)%w+1)
#define success(x,y) (x==gx&&y==gy)
const int dir[4][2]={{-1,0},{0,1},{1,0},{0,-1}};
int w,h,n;
char map[MAXN][MAXN];
int che[15][2];
int step[MAXN][MAXN];
int BFS(int sx,int sy,int gx,int gy)
{
	memset(step,0,sizeof step);
	step[sx][sy]=1;
	queue<int>Q;
	Q.push(encode(sx,sy));
	int s,x,y,tx,ty;
	while(!Q.empty())
	{
		s=Q.front();
		Q.pop();
		x=decodex(s);
		y=decodey(s);
		for(int d=0;d<4;d++)
		{
			tx=x+dir[d][0];
			ty=y+dir[d][1];
			if(!inside(tx,ty)||map[tx][ty]=='X'||step[tx][ty])
				continue;
			if(success(tx,ty))
				return step[x][y];
			step[tx][ty]=step[x][y]+1;
			Q.push(encode(tx,ty));
		}
	}
	return 0x7FFFFFFF;
}
int main()
{
	int sx,sy,gx,gy;
	scanf("%d%d%d",&h,&w,&n);
	for(int i=1;i<=h;i++)
	{
		scanf("%s",map[i]+1);
		for(int j=1;j<=w;j++)
		{
			if(map[i][j]>='0'&&map[i][j]<='9')
				che[map[i][j]-'0'][0]=i,
				che[map[i][j]-'0'][1]=j;
			if(map[i][j]=='S')
				sx=i,sy=j;
		}
	}
	int ans=0;
	for(int i=1;i<=n;i++)
	{
		gx=che[i][0];
		gy=che[i][1];
		ans+=BFS(sx,sy,gx,gy);
		sx=gx;
		sy=gy;
	}
	printf("%d\n",ans);
	return 0;
}