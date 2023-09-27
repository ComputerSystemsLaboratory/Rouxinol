#include <cstdio>

int w, h;
int data[64][64];
int movex[] = {-1, -1, -1, 0, 0, 1, 1, 1};
int movey[] = {-1, 0, 1, -1, 1, -1, 0, 1};

void dfs(int x, int y);

int main(void)
{	
	while (scanf("%d %d", &w, &h)){
		if (w == 0 && h == 0) break;
		
		for (int i = 0; i < 64; i++){
			for (int j = 0; j < 64; j++){
				data[i][j] = 0;
			}
		}
		
		for (int i = 1; i <= h; i++){
			for (int j = 1; j <= w; j++){
				scanf("%d", &data[i][j]);
			}
		}
		
		int res = 0;
		for (int i = 0; i < 64; i++){
			for (int j = 0; j < 64; j++){
				if (data[i][j] == 1){
					dfs(i, j);
					res++;
				}
			}
		}
		
		printf("%d\n", res);
	}
	
	return (0);
}

void dfs(int x, int y)
{
	data[x][y] = 0;
	
	for (int i = 0; i < 8; i++){
		if (data[x + movex[i]][y + movey[i]] == 1){
			dfs(x + movex[i], y + movey[i]);
		}
	}
	
	return;
}