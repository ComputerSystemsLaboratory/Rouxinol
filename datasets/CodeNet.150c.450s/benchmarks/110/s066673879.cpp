#include<cstdio>
#include<queue>
#include<utility>
using namespace std;
char map[1000][1001];
int visited[1000][1000] = {};
int vec[4][2] = {{1, 0}, {0, 1}, {-1, 0}, {0, -1}};
struct point {
	int x; int y; int count;
};
int main() {
	int H, W, N;
	int i, j, k, x, y;
	int count, life;
	int factory[9][2];
	while (scanf("%d %d %d", &H, &W, &N) != EOF) {
		for (i = 0; i < H; i ++) scanf("%s", map[i]);
		life = 0;
		queue<struct point> q;
		for (i = 0; i < H; i ++) {
			for (j = 0; j < W; j ++) {
				visited[i][j] = 0;
				if (map[i][j] == 'S') {
					x = i, y = j;
				} else if (0 < map[i][j] - '0' && map[i][j] - '0' <= N) {
					factory[map[i][j] - '1'][0] = i; factory[map[i][j] - '1'][1] = j;
				}
			}
		}
		struct point p = {x, y, 0};
		q.push(p);
		visited[x][y] = 1;
		int flag = 1;
		while (flag) {
			struct point p = q.front(); q.pop();
			for (k = 0; k < 4; k ++) {
				x = p.x + vec[k][0]; y = p.y + vec[k][1];
				if (-1 < x && x < H && -1 < y && y < W && !(visited[x][y]) && map[x][y] != 'X') {
					if (x == factory[life][0] && y == factory[life][1]) {
						if (life == N - 1) {
							flag = 0; count = p.count + 1;
						}
						life ++;
						for (;!q.empty(); q.pop());
						for (i = 0; i < 1000; i ++) for (j = 0; j < 1000; j ++) visited[i][j] = 0;
						struct point pp = {x, y, p.count + 1};
						q.push(pp); visited[x][y] = 1;
						break;
					}
					struct point pp = {x, y, p.count + 1};
					q.push(pp); visited[x][y] = 1;
				}
			}
		}
		printf("%d\n", count);
	}
	return 0;
}