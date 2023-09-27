#include <iostream>
using namespace std;
#include <stdio.h>
int main()
{
	int rc[101][101] = { 0 }, r, c;
	cin >> r >> c;
	for (int i = 0; i < r; i++){
		for (int j = 0; j < c; j++){
				cin >> rc[i][j];
				rc[r][j] += rc[i][j];
				rc[i][c] += rc[i][j];
				rc[r][c] += rc[i][j];
		}
	}
	for (int i = 0; i <= r; i++){
		for (int j = 0; j <= c; j++){
			printf("%d",rc[i][j]);
			if (j < c)	printf(" ");
		}
		printf("\n");
	}
}