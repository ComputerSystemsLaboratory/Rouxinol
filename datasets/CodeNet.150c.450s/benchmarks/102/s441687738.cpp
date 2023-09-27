#include<iostream>
#include<vector>
using namespace std;
const int MAX = 20;
char map[MAX][MAX];
bool book[MAX][MAX];
struct Point
{
	int x;
	int y;
	Point(int x = 0, int y = 0) :x(x), y(y) {}
}start;
int sum = 0;
void depthFSearch(int H, int W, Point start)
{
	int next[4][2] = { {0,1},{1,0},{0,-1},{-1,0} };
	for (int k = 0; k <= 3; k++)
	{
		int nx = start.x + next[k][0];
		int ny = start.y + next[k][1];
		if (nx < 0 || nx >= H || ny < 0 || ny >= W||map[nx][ny]=='#')
			continue;
		if (!book[nx][ny] && map[nx][ny] == '.')
		{
			book[nx][ny] = true;
			Point p(nx, ny);
			sum++;
			depthFSearch(H, W, p);
		}
	}
	return;
}
int main()
{
	while (true)
	{
		int H, W;
		cin >> W >> H;
		if (!H && !W)
			break;
		for (int i = 0; i < H; i++)
			for (int j = 0; j < W; j++)
			{
				cin >> map[i][j];
				book[i][j] = false;
				if (map[i][j] == '@')
					start = Point(i, j);
			}
		book[start.x][start.y] = true;
		sum = 1;
		depthFSearch(H, W, start);
		cout << sum << endl;
	}
}
