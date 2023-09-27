#include<iostream>
using namespace std;
struct Point
{
	int x;
	int y;
	Point(int x = 0, int y = 0) :x(x), y(y) {}
};
const int MAX = 50;
int map[MAX][MAX];
bool book[MAX][MAX];
void depthFSearch(int h, int w, Point start)
{
	int next[9][2] = { { -1,-1 },{ -1,0 },{ -1,1 },{ 0,-1 },{ 0,0 },{ 0,1 },{ 1,-1 },{ 1,0 },{ 1,1 } };
	for (int k = 0; k <= 8; k++)
	{
		int nx = start.x + next[k][0];
		int ny = start.y + next[k][1];
		if (nx < 0 || nx >= h || ny < 0 || ny >= w || !map[nx][ny])
			continue;
		if (!book[nx][ny] && map[nx][ny])
		{
			book[nx][ny] = true;
			Point p = { nx,ny };
			depthFSearch(h, w, p);
		}
	}
	return;
}
int main()
{
	while (true)
	{
		int w, h;
		cin >> w >> h;
		if (!w && !h)
			break;
		for (int i = 0; i < h; i++)
			for (int j = 0; j < w; j++)
			{
				cin >> map[i][j];
				book[i][j] = false;
			}
		int sum = 0;
		for (int i = 0; i < h; i++)
			for (int j = 0; j < w; j++)
			{
				if (!book[i][j] && map[i][j])
				{
					book[i][j] = true;
					Point start(i, j);
					depthFSearch(h, w, start);
					sum++;
				}
			}
		cout << sum << endl;
	}
}
