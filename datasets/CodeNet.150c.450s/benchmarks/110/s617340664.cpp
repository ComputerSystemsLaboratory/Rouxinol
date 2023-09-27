#include <iostream>
#include <stdlib.h>
#include <queue>
#include <cstring>
#define MAX_NUM 1010
using namespace std;
int H, W, N;
bool flag[MAX_NUM][MAX_NUM] = {false};

class Node
{
public:
	Node();
	Node(int x, int y, int step);
	~Node();
	int x;
	int y;
	int step;
};

Node::Node()
{
}

Node::Node(int x, int y, int step) {
	this->x = x;
	this->y = y;
	this->step = step;
}

Node::~Node()
{
}
int dir[4][2] = { {1, 0}, {-1, 0}, {0, 1}, {0, -1} };
int BFS(char map[][MAX_NUM], int sx, int sy, int ex, int ey) {
	queue<Node> que;
	Node node(sx, sy, 0);
	que.push(node);
	flag[sx][sy] = true;
	while (!que.empty())
	{
		Node cur = que.front();
		que.pop();
		if (cur.x == ex && cur.y == ey)
		{
			return cur.step;
		}
		else
		{
			for (int i = 0; i < 4; i++)
			{
				int k = cur.x + dir[i][0];
				int v = cur.y + dir[i][1];
				if (k>=0&&k<H&&v>=0&&v<W&&map[k][v]!='X'&&!flag[k][v])
				{
					Node temp(k, v, cur.step + 1);
					que.push(temp);
					flag[k][v] = true;
				}
			}
		}
	}
	return -1;

}

int main()
{
	int sx, sy, arr[10][2];
	char map[MAX_NUM][MAX_NUM];
	while (cin >> H >> W >> N && H && W)
	{
		for (int i = 0; i < H; i++)
		{
			for (int j = 0; j < W; j++)
			{
				cin >> map[i][j];
				if (map[i][j] == 'S')
				{
					map[i][j] = '.';
					sx = i;
					sy = j;
				}
				if (isdigit(map[i][j]))
				{
					int index = map[i][j] - '0';
					arr[index][0] = i;
					arr[index][1] = j;
				}
			}
		}
		arr[0][0] = sx;
		arr[0][1] = sy;
		int res = 0;
		for (int i = 0; i+1 <= N; i++)
		{
			memset(flag, false, sizeof(flag));
			res += BFS(map, arr[i][0], arr[i][1], arr[i + 1][0], arr[i + 1][1]);
		}
		cout << res << endl;
	}
	return 0;
}