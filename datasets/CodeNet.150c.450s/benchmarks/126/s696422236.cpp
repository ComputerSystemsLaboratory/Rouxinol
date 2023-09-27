#include <stdio.h>

int a, b;
int n;

int map[32][32];

int dfs(int y, int x)
{
	int response;

	if (b < y || a < x) {
		response = 0;
	}
	else if (map[y][x] == -1) {
		response = 0;
	}
	else if (y == b && x == a) {
	 response =	1;
	}
	else {
		response = 0;
		
		response += dfs(y + 1, x);
		response += dfs(y, x + 1);
	}

	return (response);
}

int main(void)
{
	int x, y;
	int i, j;
	int ans;

	while (1){
		scanf("%d %d", &a, &b);
		if (a == 0 && b == 0) {
			break;
		}

		for (i = 0; i < 32; i++){
			for (j = 0; j < 32; j++){
				map[i][j] = 0;
			}
		}

		scanf("%d", &n);
		for (i = 0; i < n; i++){
			scanf("%d %d", &x, &y);
			map[y][x] = -1;
		}

		ans = dfs(1, 1);

		printf("%d\n", ans);
	}

	return (0);
}