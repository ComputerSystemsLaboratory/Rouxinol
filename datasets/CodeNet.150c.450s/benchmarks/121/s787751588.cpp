#include"stdio.h"
#include"string.h"
#include"stdlib.h"
#include"algorithm"
#include"queue"
using namespace std;
int m,n,sum;
char xx[101][101];
int vis[101][101];
int check(int a,int b)
{
	if(a >= m || a < 0 || b >= n || b < 0)
	{
		return 0;
	}
	return 1;
}
struct mmm
{
	int x,y;
};
int direction[4][2] = {0,1,0,-1,-1,0,1,0};
void bfs(int x,int y,char zzz)
{
	mmm vv;
	queue <mmm> qq;
	vv.x = x;
	vv.y = y;
	qq.push(vv);
	vis[x][y] = 1;
	while(!qq.empty())
	{
		vv = qq.front();
		qq.pop();
		int x0 = vv.x;
		int y0 = vv.y;
		for(int  i = 0 ; i < 4 ; i ++)
		{
			int x1 = x0 + direction[i][0];
			int y1 = y0 + direction[i][1];
			if(check(x1,y1) == 1 && vis[x1][y1] == -1 && xx[x1][y1] == zzz)
			{
				vis[x1][y1] = 1;
				vv.x = x1;
				vv.y = y1;
				qq.push(vv);
			}
		}
	}
}
int main()
{
	int a,b,c,d,e,i,j,k;
	while(~scanf("%d %d",&m,&n))
	{
		if(m == 0 && n == 0)
		{
			break;
		}
		for(i = 0 ; i < m ; i ++)//可能行列有?? 
		{
			scanf("%s",xx[i]);
		}
		sum = 0;
		memset(vis,-1,sizeof(vis));//可能会有??
		for(i = 0 ; i < m ; i ++)
		{
			for(j = 0 ; j < n ; j ++)
			{
				if(vis[i][j] == -1)
				{
					bfs(i,j,xx[i][j]);
					sum ++;
				}
			}
		}
		printf("%d\n",sum);
	}
	return 0;
}