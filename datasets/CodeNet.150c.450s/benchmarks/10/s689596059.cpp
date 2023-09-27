#include <stdio.h>
int n, b, f, r, v, a[4][3][10];
int main() {
	scanf("%d", &n);
	for(int i = 0; i < n; i++) {
		scanf("%d%d%d%d", &b, &f, &r, &v);
		a[b - 1][f - 1][r - 1] += v;
	}
	for(int i = 0; i < 4; i++) {
		if(i) printf("####################\n");
		for(int j = 0; j < 3; j++) {
			for(int k = 0; k < 10; k++) {
				printf(" %d", a[i][j][k]);
			}
			printf("\n");
		}
	}
	return 0;
}