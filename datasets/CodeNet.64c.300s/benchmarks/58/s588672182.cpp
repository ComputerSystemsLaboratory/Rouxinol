#include <stdio.h>
#include <string.h>
const int MAX_N = 105;
const int dir[4][2] = {{-1, 0}, {0, 1}, {1, 0}, {0, -1}};
char map[MAX_N][MAX_N];
bool visited[MAX_N][MAX_N];
int W, H, num;

void dfs(int x, int y) {
	visited[x][y] = true;
	for (int i = 0; i < 4; i++) {
		int to_x = x + dir[i][0], to_y = y + dir[i][1];
		if (0 <= to_x && to_x < H && 0 <= to_y && to_y < W
				&& ! visited[to_x][to_y]
				&& map[x][y] == map[to_x][to_y]
		   ) dfs(to_x, to_y);
	}
}

int main() {
	while (scanf("%d%d", &H, &W) == 2 && H) {
		for (int i = 0; i < H; i++)
			scanf("%s", map[i]);
		num = 0;
		memset(visited, false, sizeof(visited));
		for (int i = 0; i < H; i++)
			for (int j = 0; j < W; j++)
				if (! visited[i][j]) {
					num++;
					dfs(i, j);
				}
		printf("%d\n", num);
	}
	return 0;
}