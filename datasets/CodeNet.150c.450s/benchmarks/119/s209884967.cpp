#include <cstdio>
#include <cstring>
using namespace std;

int w, h;
int map[100][100];
int island_number[100][100];

int angle[][2] = {
	{-1, 0}, {-1, -1}, {0, -1}, {1, -1},
	{1, 0}, {1, 1}, {0, 1}, {-1, 1}
};

void dfs(int y, int x)
{
	for (int i = 0; i < 8; i++){
		if (
		y + angle[i][0] >= 0 &&
		y + angle[i][0] < h &&
		x + angle[i][1] >= 0 &&
		x + angle[i][1] < w &&
		island_number[y + angle[i][0]][x + angle[i][1]] == (y + angle[i][0]) * h + x + angle[i][1]
		){
			island_number[y + angle[i][0]][x + angle[i][1]] = island_number[y][x];
			dfs(y + angle[i][0], x + angle[i][1]);
		}
	}
}

int main()
{
	
	while (scanf("%d %d", &w, &h), w + h){
		memset(island_number, 0, sizeof(island_number));
		
		for (int i = 0; i < h; i++){
			for (int j = 0; j < w; j++){
				scanf("%d", &map[i][j]);
				if (map[i][j] == 1){
					island_number[i][j] = i * h + j;
				}
				else {
					island_number[i][j] = -1;
				}
			}
		}
		
		for (int i = 0; i < h; i++){
			for (int j = 0; j < w; j++){
				if (island_number[i][j] == i * h + j && island_number[i][j] >= 0){
					dfs(i, j);
				}
			}
		}
		
		bool ex[100 * 100] = {false};
		for (int i = 0; i < h; i++){
			for (int j = 0; j < w; j++){
				if (island_number[i][j] >= 0){
					ex[island_number[i][j]] = true;
				}
//				printf("%d ", island_number[i][j]);
			}
//			puts("");
		}
		
		int cnt = 0;
		for (int i = 0; i < 100 * 100; i++){
			cnt += ex[i];
		}
		
		printf("%d\n", cnt);
	}
	
	return 0;
}