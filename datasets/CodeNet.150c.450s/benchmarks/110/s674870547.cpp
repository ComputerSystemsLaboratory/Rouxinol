#include"stdio.h"
#include"string.h"
#include"stdlib.h"
#include"ctype.h"
#include"queue"
#include"algorithm"
using namespace std;
struct mmm
{
	int x,y;
}vv;
int dir[4][2] = {0,-1,-1,0,0,1,1,0};
char xx[1001][1001];
int vis[1001][1001],m,n;
int check(int x0,int y0)
{
	if(x0 < 0|| y0 < 0 || x0 >= m || y0 >= n)
		return 0;
	else
		return 1;
}
int bfs(int xp,int yp,int k)
{
	queue <mmm> qq;
	int n;
	vv.x = xp;
	vv.y = yp;
	qq.push(vv);
	vis[xp][yp] = 0;
	while(!qq.empty())
	{
		vv = qq.front();
		qq.pop();
		int x0 = vv.x;
		int y0 = vv.y;
		if(xx[x0][y0] == k + '0')
		{
			n = vis[x0][y0];
			break;
		}
		for(int  i = 0;i < 4;i ++)
		{
			int xt = x0 + dir[i][0];
			int yt = y0 + dir[i][1];
			if(check(xt,yt) && vis[xt][yt] == -1 && xx[xt][yt] != 'X')
			{
				vv.x = xt;
				vv.y = yt;
				qq.push(vv);
				vis[xt][yt] = vis[x0][y0] + 1;
			}
		}
	}
	return n;
}
int main()
{
	int a,b,c,d,x1,y1;
	int mm[10][2];
	while(~scanf("%d %d %d",&m,&n,&a))
	{
		for(int i = 0;i < m;i ++)
		{
			scanf("%s",xx[i]);
		}
		for(int i = 0;i < m;i ++)
		{
			for(int j = 0;j < n;j ++)
			{
				if(xx[i][j] == 'S')
				{
					x1 = i;
					y1 = j;
				}
				else if(isdigit(xx[i][j]))
				{
					int l = xx[i][j] - '0';
					mm[l][0] = i;
					mm[l][1] = j;
				}
			}
		}
		int sum = 0;
		memset(vis,-1,sizeof(vis));
		sum += bfs(x1,y1,1);
		for(int i = 2;i <= a;i ++)
		{
			memset(vis,-1,sizeof(vis));
			sum += bfs(mm[i - 1][0],mm[i - 1][1],i);
		}
		printf("%d\n",sum);
	}
	return 0;
}