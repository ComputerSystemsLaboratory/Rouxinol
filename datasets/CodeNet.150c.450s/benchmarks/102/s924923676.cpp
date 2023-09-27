#include<iostream>
#include<queue>
#include<string.h>
using namespace std;

int main()
{
	int W, H;
	int dx[] = {0,1,0,-1};
	int dy[] = {1,0,-1,0};
	while (cin >> W >> H && W != 0 && H != 0)
	{
		bool path[20 + 1][20 + 1];
		for (int i = 1; i <= H; i++)
		{
			for (int j = 1; j <= W; j++)
			{
				path[i][j] = false;
			}
		}
		char field[20 + 1][20 + 1];
		int startx, starty;
		for (int i = 1; i <= H; i++)
		{
			char buf[21];
			cin >> buf;
			string str = buf;
			for (int j = 0; j < W; j++)
			{
				field[i][j + 1] = str.at(j);
				if (str.at(j) == '@')
				{
					startx = j + 1;
					starty = i;
				}
			}
		}
		int tiles = 0;
		queue< pair<int,int> > q;
		q.push(make_pair(startx, starty));
		path[starty][startx] = true;
		while(q.size() > 0)
		{
			pair<int,int> p = q.front();
			q.pop();
			int x = p.first;
			int y = p.second;
			tiles++;
			for (int i = 0; i < 4; i++)
			{
				int nx = x + dx[i];
				int ny = y + dy[i];
				if (nx > W || ny > H || nx < 1 || ny < 1)continue;
				if (path[ny][nx])continue;
				if (field[ny][nx] == '#')continue;
				path[ny][nx] = true;
				q.push(make_pair(nx, ny));
			}
		}
		cout << tiles << endl;

	}
	return 0;
}