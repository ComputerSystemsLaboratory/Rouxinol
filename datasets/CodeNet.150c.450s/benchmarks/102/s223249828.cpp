#include <bits/stdc++.h>
using namespace std;

const int dx[] = {-1, 0, 1, 0};
const int dy[] = {0, -1, 0, 1};

char grid[25][25];

void init()
{
	for (int i = 0; i < 25; i++){
		for (int j = 0; j < 25; j++){
			grid[i][j] = '#';
		}
	}
}

int search(int ny, int nx)
{
	grid[ny][nx] = '#';
	
	int sum = 1;
	for (int i = 0; i < 4; i++){
		int ty = ny + dy[i];
		int tx = nx + dx[i];
		if (grid[ty][tx] == '.'){
			if (grid[ty][tx] == '.'){
				sum += search(ty, tx);
			}
		}
	}
	
	return (sum);
}

int main()
{
	int h, w;
	while (scanf("%d %d", &w, &h), w + h){
		init();
		
		int sy, sx;
		for (int i = 1; i <= h; i++){
			for (int j = 1; j <= w; j++){
				scanf(" %c", &grid[i][j]);
				
				if (grid[i][j] == '@'){
					sy = i;
					sx = j;
				}
			}
		}
		
		printf("%d\n", search(sy, sx));
	}
	
	return 0;
}