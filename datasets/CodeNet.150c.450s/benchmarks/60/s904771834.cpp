#include<stdio.h>
#include<stdlib.h>
#pragma warning(disable:4996)

int main()
{
	int a = 0;
	scanf("%d", &a);
	int matrix[101][101] = { 0 };
	for (int i = 0; i < a; i++) {
		int row = 0;
		int column = 0;
		int count = 0;
		scanf("%d", &row);
		scanf("%d", &count);
		for (int j = 0; j < count; j++) {
			scanf("%d", &column);
			matrix[row-1][column - 1] = 1;
		}
	}
	for (int i = 0; i < a; i++) {
		for (int j = 0; j < a; j++) {
			if (j < a - 1) {
				printf("%d ", matrix[i][j]);
			}
			else {
				printf("%d", matrix[i][j]);
			}
		}
		printf("\n");
	}
}
