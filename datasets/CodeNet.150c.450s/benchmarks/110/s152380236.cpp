#include <iostream>
#include <queue>

using namespace std;

#define MAXSIZE 1024

char square[MAXSIZE][MAXSIZE];
int H, W, N;
int flag[MAXSIZE][MAXSIZE];
int dir[4][2] = { 1, 0, -1, 0, 0, 1, 0, -1 };

struct Node
{
	int x;
	int y;
};

int BFS(int &x, int &y, int n) {
	for (int i = 0; i < H; i ++)
	{
		for (int j = 0; j < W; j++)
		{
			flag[i][j] = -1;
		}
	}
	queue<Node> que;
	Node node;
	node.x = x;
	node.y = y;
	que.push(node);
	flag[x][y] = 0;
	while (!que.empty())
	{
		Node cur = que.front();
		que.pop();
		for (int i = 0; i < 4; i++)
		{
			x = cur.x + dir[i][0];
			y = cur.y + dir[i][1];
			if (square[x][y] - '0' == n)
			{
				return flag[cur.x][cur.y] + 1;
			}
			if (x >= 0 && x < H && y >= 0 && y < W && square[x][y] != 'X' && flag[x][y] == -1)
			{
				Node next;
				next.x = x;
				next.y = y;
				flag[x][y] = flag[cur.x][cur.y] + 1;
				que.push(next);
			}
		}
	}
	return 0;
}

int main() {
	int start_X, start_Y;
	int step = 0;
	cin >> H >> W >> N;
	for (int i = 0; i < H; i ++)
	{
		for (int j = 0; j < W;  j++)
		{
			cin >> square[i][j];
			if (square[i][j] == 'S')
			{
				start_X = i;
				start_Y = j;
			}
		}
	}
	for (int i = 1; i <= N; i++)
	{
		step += BFS(start_X, start_Y, i);
	}
	cout << step << endl;
	return 0;
}