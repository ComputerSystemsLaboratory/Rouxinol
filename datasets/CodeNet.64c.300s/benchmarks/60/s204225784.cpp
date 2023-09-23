#include <cstdio>
#include <iostream>
using namespace std;

void move(int x, int y);

int main(void)
{
	int i, j;
	int a, b;
	int data[20][20];
	
	while (scanf("%d %d", &a, &b)){
		if (a == 0 && b == 0) break;
		
		for (i = 0; i < 20; i++){
			for (j = 0; j < 20; j++){
				data[i][j] = 0;
			}
		}
		
		int n, x, y;
		scanf("%d", &n);
		for (i = 0; i < n; i++){
			scanf("%d %d", &x, &y);
			data[x][y] = -1;
		}
		data[1][1] = 1;
		
		for (i = 1; i <= a; i++){
			for (j = 1; j <= b; j++){
				if (data[i + 1][j] != -1 && data[i][j] != -1){
					data[i + 1][j] += data[i][j];
				}
				if (data[i][j + 1] != -1 && data[i][j] != -1){
					data[i][j + 1] += data[i][j];
				}
			}
		}
		
		printf("%d\n", data[a][b]);
	}
	
	return (0);
}