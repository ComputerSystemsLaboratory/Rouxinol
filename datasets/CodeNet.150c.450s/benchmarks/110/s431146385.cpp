//http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=0558
#include <cstdio>
#include <queue>
#include <cstring>
using namespace std;

int row, col, n;

struct point {
	int x, y;
};

char map[1010][1010];
int d[1010][1010];
int direct[4][2] = { {0,1},{0,-1},{1,0},{-1,0} };

int BFS(int &startX, int &startY, char target) {
	memset(d,0,sizeof(d));

	queue<point> q;
	point p;
	p.x = startX;
	p.y = startY;
	d[startX][startY] = 0;
	q.push(p);
	while (!q.empty()) {
		int nowX = q.front().x,nowY = q.front().y;
		q.pop();

		if (map[nowX][nowY] == target) {
			startX = nowX;
			startY = nowY;
			return d[nowX][nowY];
		}

		int nextX, nextY;
		for (int i = 0; i < 4; i++) {
			nextX = nowX + direct[i][0];
			nextY = nowY + direct[i][1];

			if (nextX >= 0 && nextY >= 0 && nextX < row && nextY < col && 
					map[nextX][nextY] != 'X' && d[nextX][nextY] == 0) {
				d[nextX][nextY] = d[nowX][nowY] + 1;
				p.x = nextX;
				p.y = nextY;
				q.push(p);
			}
		}
	}
	return -1;
}

int main() {
	int startX, startY, sum = 0;

	scanf("%d%d%d", &row, &col, &n);
	for (int i = 0; i < row; i++) {
		scanf("%s", map[i]);
		for (int j = 0; j < col; j++) {
			if (map[i][j] == 'S') {
				startX = i;
				startY = j;
			}
		}
	}

	for (int i = 0; i < n; i++) {
		int dis = BFS(startX, startY, i + '1');
		sum += dis;
	}
	printf("%d\n", sum);
}
