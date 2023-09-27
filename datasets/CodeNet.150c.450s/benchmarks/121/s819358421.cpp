#include"stdio.h"
#include"string.h"
#include"stdlib.h"
#include"algorithm"
#include"queue"
using namespace std;
int yy[1001][1001],n,m,c,d,pl;
char xx[1001][1001];
struct mm
{
	int x;
	int y;
};
int dir[4][2] ={-1,0,1,0,0,-1,0,1};
int check(int x,int y)
{
	if(x < 0 || y < 0 || x >= n || y >= m)
		return 0;
	else
		return 1;
}
void bfs(int x1,int y1)
{
	queue<mm>qq;
	mm vv;
	vv.x = x1;
	vv.y = y1;
	qq.push(vv);
	yy[x1][y1] = 0;
	while(!qq.empty())
	{
		vv = qq.front();
		qq.pop();
		int x0 = vv.x;
		int y0 = vv.y;
		for(int i = 0; i < 4 ; i++)
		{
			int xt = x0 + dir[i][0];
			int yt = y0 + dir[i][1];
			if(check(xt,yt) && xx[xt][yt] == xx[x0][y0] && yy[xt][yt] == -1)
			{
				yy[xt][yt] = yy[x0][y0] + 1;
				vv.x = xt;
				vv.y = yt;
				qq.push(vv);
			}
 		}
	}
}
int main()
{
	while(~scanf("%d %d",&n,&m))
	{
		memset(yy, -1,sizeof(yy));
		if(n == 0 || m == 0) break;
		for(int i = 0; i < n; i++)
		{
			scanf("%s",xx[i]);
		}
		pl = 0;
		for(int i = 0; i< n; i++)
		{
			for(int j = 0; j < m; j++)
			{
				if(yy[i][j] == -1)
				{
					bfs(i,j);	
					pl ++;
				}
			}
		}
		printf("%d\n",pl);
	}
}