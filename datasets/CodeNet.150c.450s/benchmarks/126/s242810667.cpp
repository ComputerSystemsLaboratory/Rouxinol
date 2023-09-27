#include <stdio.h>
#include <string.h>

int route[128][128];
int ng[128][128];

int countWay(int nx, int ny)
{
	if (ng[ny][nx] || nx <= 0 || ny <= 0){
		return (0);
	}
	
	if (nx == 1 && ny == 1){
		return (1);
	}
	if (route[ny][nx] >= 0){
		return (route[ny][nx]);
	}
	
	return (route[ny][nx] = countWay(nx, ny - 1) + countWay(nx - 1, ny));
}

int main(void)
{
	int x, y;
	int i;
	int n;
	
	while (1){
		
		scanf("%d %d", &x, &y);
		
		if (x == 0 && y == 0){
			break;
		}
		
		scanf("%d", &n);
		
		memset(ng, 0, sizeof(ng));
		
		for (i = 0; i < n; i++){
			int nx, ny;
			scanf("%d %d", &nx, &ny);
			ng[ny][nx] = 1;
		}
		
		memset(route, -1, sizeof(route));
		
		printf("%d\n", countWay(x, y));
	}
	
	return (0);
}