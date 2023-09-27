#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES
#include<stdio.h>
int mul(int n,int m,int Matrix[][100],int matrix[][1]);

int main() {
	int Matrix[100][100] = { 0 };
	int matrix[100][1] = { 0 };
	int i, j;
	int n, m;

	scanf("%d%d", &n, &m);
	for (i = 0; i < n; i++) for (j = 0; j < m; j++) scanf("%d",&Matrix[i][j]);
	for (i = 0; i < m; i++) scanf("%d", &matrix[i][0]);
	for (i = 0; i < n; i++) {
		printf("%d\n", mul(i, m, Matrix, matrix));
	}
	return 0;
}

int mul(int n, int m, int Matrix[][100], int matrix[][1]) {
	int i;
	int sum=0;
	for (i = 0; i < m; i++) {
			sum += Matrix[n][i] * matrix[i][0];
	}
	return sum;
}