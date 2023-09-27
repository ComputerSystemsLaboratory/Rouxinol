#include <bits/stdc++.h>
using namespace std;

const int dx[] = {-1, 0, 1, 0};
const int dy[] = {0, -1, 0, 1};

typedef struct
{
	int y;
	int x;
	char type;
} STATE;

char grid[256][256];

void init()
{
	memset(grid, 0, sizeof(grid));
}

void search(int ny, int nx)
{
	queue<STATE> que;
	que.push({ny, nx, grid[ny][nx]});
	while (!que.empty()){
		STATE st = que.front(); que.pop();
		if (grid[st.y][st.x] == 0) continue;
		grid[st.y][st.x] = 0;
		
		for (int k = 0; k < 4; k++){
			int ty = st.y + dy[k];
			int tx = st.x + dx[k];
			
			if (grid[ty][tx] == st.type){
				que.push({ty, tx, st.type});
			}
		}
	}
}

int main()
{
	int h, w;
	while (scanf("%d %d", &h, &w), h + w){
		init();
		
		for (int i = 1; i <= h; i++){
			for (int j = 1; j <= w; j++){
				scanf(" %c", &grid[i][j]);
			}
		}
		
		int cnt = 0;
		for (int i = 1; i <= h; i++){
			for (int j = 1; j <= w; j++){
				if (grid[i][j] != 0){
					search(i, j);
					cnt++;
				}
			}
		}
		
		printf("%d\n", cnt);
	}
	
	return 0;
}