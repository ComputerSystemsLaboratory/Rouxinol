#include<iostream>
#include<queue>
#include<vector>
using namespace  std;
int h, w, n;
int sy = 0, sx = 0;
int dy[] = {0,0,1,-1};
int dx[] = {1,-1,0,0};
char field[1000 + 1][1000 + 1];
int main()
{
	cin >> h >> w >> n;
	for (int i = 0; i < h; i++)
	{
		cin >> field[i];
		for (int j = 0; j < w; j++)
		{
			if (field[i][j] == 'S')
			{
				sy = i;
				sx = j;
			}
		}
	}
	int ans = 0;
	for (int m = 1; m <= n; m++)
	{
		bool used[1000 + 1][1000 + 1];
		queue<pair<pair<int, int>, int> > q;
		for (int i = 0; i < h; i++)
		{
			for (int j = 0; j < w; j++)
			{
				used[i][j] = false;
			}
		}
		q.push(make_pair(make_pair(sy,sx), 0));
		used[sy][sx] = true;
		while (q.size() > 0)
		{
			pair<pair<int, int>, int> p = q.front(); q.pop();
			int y = p.first.first;
			int x = p.first.second;
			int c = p.second;

			if (field[y][x] == '0' + m)
			{
				sy = y;
				sx = x;
				ans += c;
				break;
			}

			for (int i = 0; i < 4; i++)
			{
				int ny = y + dy[i];
				int nx = x + dx[i];
				if (ny < 0 || nx < 0 || ny >= h || nx >= w)continue;
				if (field[ny][nx] == 'X')continue;
				if (used[ny][nx])continue;
				used[ny][nx] = true;
				pair<pair<int, int>, int> next = make_pair(make_pair(ny,nx), c + 1);
				q.push(next);
			}
		}
	}

	cout << ans << endl;
	return 0;
}