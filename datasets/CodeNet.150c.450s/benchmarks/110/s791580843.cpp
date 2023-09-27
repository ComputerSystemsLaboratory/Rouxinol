#include <queue>
#include <string>
#include <vector>
#include <iostream>

using namespace std;

#define INF (1 << 26)

const int dx[4] = { -1, 0, 1, 0 };
const int dy[4] = { 0, 1, 0, -1 };

int main()
{
	int H, W, N;

	cin >> H >> W >> N;

	vector<string> D(H);

	for (int i = 0; i < H; i++)
		cin >> D[i];

	int route = 0;

	for (int i = 1; i <= N; i++)
	{
		queue<pair<int, int> > que;

		vector<vector<int> > memo(H, vector<int>(W, INF));

		char start;

		if (i == 1)
		{
			start = 'S';
		}
		else
		{
			start = i + 47;
		}

		pair<int, int> start_;

		for (int j = 0; j < H; j++)
		{
			for (int k = 0; k < W; k++)
			{
				if (D[j][k] == start)
				{
					start_.first = k;
					start_.second = j;
				}
			}
		}

		que.push(start_);

		memo[start_.second][start_.first] = route;

		while (que.size())
		{
			pair<int, int> place = que.front(); que.pop();

			int x, y;

			x = place.first;
			y = place.second;

			for (int dir = 0; dir < 4; dir++)
			{
				if (0 <= x + dx[dir] && x + dx[dir] < W && 0 <= y + dy[dir] && y + dy[dir] < H)
				{
					if (D[y + dy[dir]][x + dx[dir]] != 'X' && memo[y + dy[dir]][x + dx[dir]] == INF)
					{
						place.first = x + dx[dir];
						place.second = y + dy[dir];

						que.push(place);

						memo[y + dy[dir]][x + dx[dir]] = memo[y][x] + 1;

						if (D[y + dy[dir]][x + dx[dir]] - 48 == i)
						{
							route = memo[y][x] + 1;

							goto Exit;
						}
					}
				}
			}
		}

	Exit:;
	}

	cout << route << endl;

	return 0;
}