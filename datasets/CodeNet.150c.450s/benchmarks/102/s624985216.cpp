#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

int cnt;
int w, h;
int dx[] = {0, 1, 0, -1};
int dy[] = {1, 0, -1, 0};
char tile[200][200];

void dfs(int x, int y);

int main()
{
	int x, y;

	while (true){
		scanf("%d %d", &w, &h);

		if (w == 0){
			break;
		}

		for (int i = 0; i < h; i++){
			scanf("%s", tile[i]);

			for (int j = 0; j < w; j++){
				if (tile[i][j] == '@'){
					y = i;
					x = j;
				}
			}
		}

		cnt = 0;
		dfs(x, y);

		printf("%d\n", cnt);
	}

	return (0);
}

void dfs(int x, int y)
{
	tile[y][x] = '#';
	cnt++;

	for (int i = 0; i < 4; i++){
		int nx = x + dx[i];
		int ny = y + dy[i];

		if (nx >= 0 && nx < w && ny >= 0 && ny < h && tile[ny][nx] == '.'){
			dfs(nx, ny);
		}
	}
}