//#define LOCAL

#include <cstdio>
#include <cstring>
#include <algorithm>
#define SIZE 110

using namespace std;

char map[SIZE][SIZE];
int dir[][2] = {0, 1, 0, -1, 1, 0, -1, 0};

void dfs(int x, int y, int h, int w, char chars){
	map[x][y] = '0';
	
	for(int i = 0; i < 4; i++){
		int newx = x + dir[i][0];
		int newy = y + dir[i][1];

		if(0 <= newx && newx < h && 0 <= newy && newy < w
			&& map[newx][newy] == chars){
			dfs(newx, newy, h, w, chars);
		}
	}	
}

void printmap(int h, int w){
	for(int i = 0; i < h; i++){
		for(int j = 0; j < w; j++)
			printf("%c", map[i][j]);

		printf("\n");
	}
	printf("\n");
}

int main(void){
#ifdef LOCAL
	freopen("data.in", "r", stdin);
#endif
	int h, w;

	while(scanf("%d%d", &h, &w), h || w){
		int result = 0;

		for(int i = 0; i < h; i++)
			scanf("%s", map[i]);

		//printmap(h, w);

		for(int i = 0; i < h; i++)
		for(int j = 0; j < w; j++){
			if(map[i][j] != '0'){
				dfs(i, j, h, w, map[i][j]);
				result++;

				//printmap(h, w);
			}
		}

		printf("%d\n", result);
	}

	return 0;
}
