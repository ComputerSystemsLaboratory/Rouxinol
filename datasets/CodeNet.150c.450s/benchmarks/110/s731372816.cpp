#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <functional>
#include <stack>
#include <queue>

using namespace std;

struct point
{
	int x, y, step, vital;
};
const int dx[4] = {-1, 0, 0, 1};
const int dy[4] = {0, -1, 1, 0};

int H, W, N;

point search(const vector< vector<char> >& field, point start)
{
	vector< vector<bool> > isVisited(H, vector<bool>(W));
	queue<point> Que;
	Que.push(start);
	isVisited[start.y][start.x] = true;
	while (!Que.empty())
	{
		point p = Que.front();
		Que.pop();
		if (field[p.y][p.x] - '0' == p.vital)
		{
			++p.vital;
			return(p);
		}
		for (int i = 0; i < 4; ++i)
		{
			int nx = p.x + dx[i];
			int ny = p.y + dy[i];
			if (0 <= nx && nx < W && 0 <= ny && ny < H && isVisited[ny][nx] == false && field[ny][nx] != 'X')
			{
				point np;
				np.x = nx;
				np.y = ny;
				np.step = p.step + 1;
				np.vital = p.vital;
				Que.push(np);
				isVisited[ny][nx] = true;
			}
		}
	}
}

void solve()
{
	cin >> H >> W >> N;
	vector< vector<char> > field(H, vector<char>(W));
	point start;
	for (int i = 0; i < H; ++i)
	{
		for (int j = 0; j < W; ++j)
		{
			cin >> field[i][j];
			if (field[i][j] == 'S')
			{
				start.x = j;
				start.y = i;
				start.step = 0;
				start.vital = 1;
			}
		}
	}
	int sum = 0;
	while (start.vital < N + 1)
	{
		start = search(field, start);
		sum += start.step;
		start.step = 0;
	}
	cout << sum << endl;
}

int main()
{
	solve();
	return(0);
}