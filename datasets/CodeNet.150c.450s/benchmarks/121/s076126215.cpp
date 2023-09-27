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
char xx[105][105];
queue <mmm> qq;
int sum;
char pp;
void bfs()
{
	while(!qq.empty())
	{
		vv =qq.front();
		int x0 = vv.x;
		int y0 = vv.y;
		qq.pop();
		for(int i = 0;i < 4;i++)
		{
			int xt = x0 + dir[i][0];
			int yt = y0 + dir[i][1];
			if(xx[xt][yt] != '0' && xx[xt][yt] == pp)
			{
				xx[xt][yt] = '0';
				vv.x = xt;
				vv.y = yt;
				qq.push(vv);
			}
		}
	}
}
int main()
{
	int a,b,c,d;
	while(~scanf("%d %d",&a,&b))
	{
		if(a == 0 && b == 0)
		break;
		memset(xx,'0',sizeof(xx));
		sum = 0;
		getchar();
		for(int i = 1;i <= a;i++)
		{
			for(int j = 1;j <= b;j++)
			{
				xx[i][j] = getchar();
			}
			getchar();
		}
		for(int i = 1;i <= a;i++)
		{
			for(int j = 1;j <= b;j++)
			{
				if(xx[i][j] != '0')
				{
					pp = xx[i][j];
					vv.x = i;
					vv.y = j;
					qq.push(vv);
					xx[i][j] = '0';
					bfs();
					sum ++;
				}
			}
		}
		printf("%d\n",sum);
	}
	return 0;
}