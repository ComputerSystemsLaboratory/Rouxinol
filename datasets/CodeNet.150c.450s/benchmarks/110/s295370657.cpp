#include"stdio.h"
#include"stdlib.h"
#include"string.h"
#include"algorithm"
#include"queue"
using namespace std;
struct mmm
{
	int x,y;
}vv;
int dir[4][2] = {0,-1,-1,0,0,1,1,0};
char xx[1005][1005];
int bb[11][2];
queue <mmm> qq;
int vis[1005][1005];
int bfs(char t)
{
	int sum = 0;
	int pl = 0;
	while(!qq.empty())
	{
		vv = qq.front();
		int x0 = vv.x;
		int y0 = vv.y;
		//printf("%d %d %d\n",x0,y0,vis[x0][y0]);
		qq.pop();
		if(xx[x0][y0] == t && !pl)
		{
			sum = vis[x0][y0];
			pl = 1;
		}
		for(int i = 0;i < 4;i++)
		{
			int xt = x0 + dir[i][0];
			int yt = y0 + dir[i][1];
			if(xx[xt][yt] != '#' && xx[xt][yt] != 'X' && vis[xt][yt] == -1)
			{
				vis[xt][yt] = vis[x0][y0] + 1;
				vv.x = xt;
				vv.y = yt;
				qq.push(vv);
			}
		}
	}
	return sum;
}
int main()
{
	int a,b,c,d,x1,y1,sum;
	while(~scanf("%d %d %d",&a,&b,&c))
	{
	//	if(a == 0 && b == 0)
	//	break;
		memset(xx,'#',sizeof(xx));
		getchar();
		for(int i = 1;i <= a;i++)
		{
			for(int j = 1;j <= b;j++)
			{
				xx[i][j] = getchar();
				if(xx[i][j] == 'S')
				{
					x1 = i;
					y1 = j;
				}
				else if(xx[i][j] != 'X')
				{
					bb[xx[i][j] - '0'][0] = i;
					bb[xx[i][j] - '0'][1] = j;
				}
			}
			getchar();
		}
		bb[0][0] = x1;
		bb[0][1] = y1;
		sum = 0;
		for(int i = 1;i <= c;i++)
		{
			vv.x = bb[i-1][0];
			vv.y = bb[i-1][1];
			memset(vis,-1,sizeof(vis));
			vis[vv.x][vv.y] = 0;
			qq.push(vv);
			sum += bfs(i + '0');
		}
		printf("%d\n",sum);
	}
	return 0;
}