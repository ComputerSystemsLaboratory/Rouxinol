#include <cstdio>
using namespace std;

int a[101][101] = {{0}};
int b[101][101] = {{0}};
long long c[101][101] = {{0}};

int main (void)
{
	int n, m, l, i, j, k;

	scanf("%d %d %d", &n, &m, &l);

	for (i=1; i<=n; i++){
		for (j=1; j<=m; j++)
			scanf("%d", &a[i][j]);
	}

	for (i=1; i<=m; i++){
		for (j=1; j<=l; j++)
			scanf("%d", &b[i][j]);
	}

	for (i=1; i<=n; i++){
		for (j=1; j<=l; j++){
			for (k=1; k<=m; k++){
				c[i][j] += a[i][k] * b[k][j];
			}
		}
	}

	for (i=1; i<=n; i++){
		for (j=1; j<=l; j++){
			printf("%ld", c[i][j]);
			if(j != l)
				printf(" ");
		}
		printf("\n");
	}

	return 0;
}