
#include<cstdio>
#include<utility>
#include<queue>
using namespace std;
const static int MAX_H = 1010, MAX_W = 1010;
static char maze[MAX_H][MAX_W];
static int state[MAX_H][MAX_W];
static int H, W;
static int dx[4] = { 0,1,0,-1 };
static int dy[4] = { -1,0,1,0 };
typedef pair<int, int > point;
int bfs(point start,point end) {
	for (int i = 0; i < H; ++i)
		for (int j = 0; j < W; ++j)
			state[i][j] = -1;
	queue<point> que;
	que.push(start);
	state[start.first][start.second] == 0;
	while (que.size()) {
		point now = que.front();
		que.pop();
		if (now.first == end.first&&now.second == end.second) {
			break;
		}
		for (int i = 0; i < 4; i++) {
			int nx = now.first + dx[i];
			int ny = now.second + dy[i];
			if (nx >= 0 && nx < H&&ny >= 0 && ny < W&&state[nx][ny] == -1 && maze[nx][ny] != 'X') {
				que.push(point(nx, ny));
				state[nx][ny] = state[now.first][now.second] + 1;
			}
		}
	}
	return state[end.first][end.second];
}
int main() {
	int n;
	scanf("%d %d %d", &H, &W, &n);
	getchar();
	int k = 0;
	point cheese[12];
	for (int i = 0; i < H; i++) {
		for (int j = 0; j < W; j++) {
			scanf("%c", &maze[i][j]);
		}
		getchar();
	}
	for (int i = 0; i < H; i++) {
		for (int j = 0; j < W; j++) {
			if (maze[i][j] != 'X'&&maze[i][j] != '.') {
				if (maze[i][j] == 'S')
					cheese[0] = point(i, j);
				else
					cheese[maze[i][j] - '0'] = point(i, j);
			}
		}
	}
	int ret = 0;
	for (int i = 0; i < n; i++) {
		ret += bfs(cheese[i], cheese[i + 1]);
		ret++;
	}
	printf("%d\n", ret);
}