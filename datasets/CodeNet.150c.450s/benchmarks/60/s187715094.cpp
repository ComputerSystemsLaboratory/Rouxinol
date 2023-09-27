#include<cstdio>

int main(void){
	int n, u, k, v;
	scanf("%d", &n);
	int a[n+1][n+1];
	for (int row = 1; row <= n; ++row) {
		for (int column = 1; column <= n; ++column)
			a[row][column] = 0;
	}
	for (int vertexi = 0; vertexi < n; ++vertexi) {
		scanf("%d %d", &u, &k);
		for (int outi = 0; outi < k; ++outi) {
			scanf("%d", &v);
			a[u][v] = 1;
		}
	}
	for (int row = 1; row <= n; ++row) {
		for (int column = 1; column <= n; ++column)	{
			if(column > 1)
				printf(" ");
			printf("%d", a[row][column]);
		}
		printf("\n");
	}
	return 0;
}