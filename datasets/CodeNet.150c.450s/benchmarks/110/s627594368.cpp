#include <cstdio>
#include <utility>
#include <queue>

using namespace std;

typedef pair<int, int> P;
typedef pair<P, P> RAT;

const int INF = 100000000;

char map[1005][1005];
int flag[1005][1005];
int H,W,N;
int cheese;
int sx,sy;
int dx[4] = {1,0,-1,0};
int dy[4] = {0,1,0,-1};

int main()
{
	queue<RAT> que;
	int tx,ty;
	scanf("%d %d %d",&H,&W,&N);
	for(int i=0;i<H;i++)
	{
		scanf("%s",map[i]);
		for(int j=0;j<W;j++)
			if(map[i][j] == 'S')
			{
				sx = i;
				sy = j;
			}
	}
	
	que.push(RAT(P(sx,sy),P(1,0)));
	cheese = 1;
	for(int i=0;i<H;i++)
		for(int j=0;j<W;j++)
			flag[i][j] = INF;
	for(;;)
	{
		RAT rat = que.front();
		que.pop();
		if(rat.second.first == N+1)
		{
			printf("%d\n",rat.second.second);
			break;
		}
		if(cheese > rat.second.first)
			continue;
		if(cheese < rat.second.first)
		{
			cheese = rat.second.first;
			for(int i=0;i<H;i++)
				for(int j=0;j<W;j++)
					flag[i][j] = INF;
		}
		for(int i=0;i<4;i++)
		{
			tx = rat.first.first + dx[i];
			ty = rat.first.second + dy[i];
			if(tx >= 0 && tx < H && ty >= 0 && ty < W && map[tx][ty] != 'X' && flag[tx][ty] != 0)
			{
				if(rat.second.first == map[tx][ty]-48)
				{
					que.push(RAT(P(tx,ty),P(rat.second.first+1,rat.second.second+1)));
					flag[tx][ty] = 0;
				}
				else
				{
					que.push(RAT(P(tx,ty),P(rat.second.first,rat.second.second+1)));
					flag[tx][ty] = 0;
				}
			}
		}
	}
	return 0;	
}