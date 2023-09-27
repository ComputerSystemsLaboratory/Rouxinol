#include<iostream>
#include<algorithm>
#include<queue>
const int INF = 100000000;
using namespace std;
typedef pair<int, int> P;
char a[1005][1005];
int N, M;
int sx, sy;
int gx, gy;
int d[1005][1005];
int dx[4] = { 1,0,-1,0 };
int dy[4] = { 0,1,0,-1 };
int bfs()
{
	queue<P> que;
	for (int i = 0; i < N; i++)
		for (int j = 0; j < M; j++)
			d[i][j] = INF;
	que.push(P(sx, sy));
	d[sx][sy] = 0;
	while (que.size())
	{
		P p = que.front();
		que.pop();
		if (p.first == gx&&p.second == gy)
			break;
		for (int i = 0; i < 4; i++)
		{
			int nx = p.first + dx[i];
			int ny = p.second + dy[i];
			if (nx >= 0 && nx < N&&ny >= 0 && ny < M&&a[nx][ny] != 'X'&&d[nx][ny] == INF)
			{
				que.push(P(nx, ny));
				d[nx][ny] = d[p.first][p.second] + 1;
			}
		}

	}
	return d[gx][gy];
}
int main(void)
{
	while (cin >> N >> M)
	{
		int n, sum = 0;
		cin >> n;
		for (int i = 0; i < N; i++)
			for (int j = 0; j < M; j++)
				cin >> a[i][j];
		for (int j = 0; j < N; j++)
			for (int k = 0; k < M; k++)
				if (a[j][k] == 'S')
				{
					sx = j;
					sy = k;
				}
		for (int j = 0; j < N; j++)
			for (int k = 0; k < M; k++)
				if (a[j][k] == '1')
				{
					gx = j;
					gy = k;
				}
		sum += bfs();
		for (int i = 0; i < n - 1; i++)
		{
			for (int j = 0; j < N; j++)
				for (int k = 0; k < M; k++)
				{
					if (a[j][k] == (char)(i+49))
					{
						sx = j;
						sy = k;
					}
					if (a[j][k] == (char)(i+50))
					{
						gx = j;
						gy = k;
					}
				}
			sum += bfs();

		}
		cout << sum << endl;
	}
}