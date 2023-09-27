#include <stdio.h>
int n, m, l, a[100][100], b[100][100];
int main() {
	scanf("%d%d%d", &n, &m, &l);
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < m; j++) {
			scanf("%d", &a[i][j]);
		}
	}
	for(int i = 0; i < m; i++) {
		for(int j = 0; j < l; j++) {
			scanf("%d", &b[i][j]);
		}
	}
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < l; j++) {
			long long ret = 0;
			for(int k = 0; k < m; k++) ret += a[i][k] * b[k][j];
			if(j) printf(" ");
			printf("%lld", ret);
		}
		printf("\n");
	}
	return 0;
}