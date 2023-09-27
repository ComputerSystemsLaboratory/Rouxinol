#include<stdio.h>


int main() {
	int A[100][100];
	int b[100];

	int n, m;
	int i, j;

	scanf("%d %d", &n, &m);

	for (i = 0; i < n; i++) {
		for (j = 0; j < m; j++) {
			fflush(stdin);
			scanf("%d",&A[i][j]);
		}
	}

	for (j = 0; j < m; j++) {
		fflush(stdin);
		scanf("%d", &b[j]);
	}

	int ctmp;
	for (i = 0; i < n; i++) {
		ctmp = 0;
		for (j = 0; j < m; j++) {
			ctmp += (A[i][j] * b[j]);
		}
		printf("%d\n", ctmp);
	}
	return 0;
}