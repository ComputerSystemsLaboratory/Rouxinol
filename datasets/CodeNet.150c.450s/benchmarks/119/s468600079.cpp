#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

int field[64][64];
int cnt;
int dx[8] = {0, 1, 1, 1, 0, -1, -1, -1};
int dy[8] = {1, 1, 0, -1, -1, -1, 0, 1};
int w, h;

void dfs(int x, int y);

int main()
{
	int x, y;

	while (true){
		cnt = 0;

		scanf("%d %d", &w, &h);
		if (w == 0){
			break;
		}

		for (int i = 0; i < h; i++){
			for (int j = 0; j < w; j++){
				scanf("%d", &field[i][j]);
			}
		}

		for (int i = 0; i < h; i++){
			for (int j = 0; j < w; j++){
				if (field[i][j]){
					cnt++;
					dfs(j, i);
				}
			}
		}

		printf("%d\n", cnt);
	}

	return (0);
}

void dfs(int x, int y)
{
	field[y][x] = 0;

	for (int i = 0; i < 8; i++){
		int nx = x + dx[i];
		int ny = y + dy[i];

		if (field[ny][nx] && nx >= 0 && ny >= 0 && nx < w && ny < h){
			dfs(nx, ny);
		}
	}
}