#include<cstdio>
#include<algorithm>
#include<cstring>
#include<string>
#include<cmath>
#include<stack>
#include<queue>
#include<cctype>
#define INF 100000000
using namespace std;

struct  coor
{
	int x, y;
};

char map[1002][1002];
int tim[1002][1002];
int dx[4] = { 0,1,0,-1 };
int dy[4] = { 1,0,-1,0 };
int h, w, n;
coor s;
coor fac[10];
int phy;
int ans;


int bfs(coor fa)
{
	coor next;
	coor now;
	queue<coor>q;
	q.push(s);
	while (!q.empty())
	{
		now = q.front();
		q.pop();
		if (now.x == fa.x&&now.y == fa.y)
		{
			break;
		}
		for (int i = 0;i < 4;i++)
		{
			next.x = now.x + dx[i];
			next.y = now.y + dy[i];
			if (map[next.x][next.y] != 'X'&&next.x >= 0&& next.x < h &&next.y >= 0 && next.y < w && tim[next.x][next.y] ==INF)
			{
				tim[next.x][next.y] = tim[now.x][now.y] + 1;
				q.push(next);
			}
		}
	}
	return tim[fa.x][fa.y];
}

void timeinit(coor st)
{
	for (int i = 0;i < h;i++)
	{
		for (int j = 0;j < w;j++)
		{
			if (map[i][j] != 'X')
				tim[i][j] = INF;
		}
	}
	tim[st.x][st.y] = 0;

}
int main()
{
	while (~scanf("%d%d%d",&h,&w,&n))
	{
		getchar();
		for (int i = 0;i < h;i++)
		{
			for (int j = 0;j < w;j++)
			{
				scanf("%c", &map[i][j]);
				tim[i][j] = INF;
				if (map[i][j] == 'S') { map[i][j] = '.';s.x = i;s.y = j; }
				if (isdigit(map[i][j]))
				{
					fac[map[i][j] - '0'].x = i;
					fac[map[i][j] - '0'].y = j;
				}
			}
			getchar();
		}

		phy = 1;
		tim[s.x][s.y] = 0;
		ans = 0;
		for (int i = 1;i <= n ;i++)
		{
			ans += bfs(fac[i]);
			s.x = fac[i].x;
			s.y = fac[i].y;
			timeinit(s);
		}
		printf("%d\n", ans);
	}
	return 0;
}