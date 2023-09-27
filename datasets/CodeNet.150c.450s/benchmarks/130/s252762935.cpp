#include <stdio.h>
int n, m, a[100][100], b[100];
int main() {
	scanf("%d%d", &n, &m);
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < m; j++) {
			scanf("%d", &a[i][j]);
		}
	}
	for(int i = 0; i < m; i++) scanf("%d", &b[i]);
	for(int i = 0; i < n; i++) {
		int ret = 0;
		for(int j = 0; j < m; j++) ret += a[i][j] * b[j];
		printf("%d\n", ret);
	}
	return 0;
}