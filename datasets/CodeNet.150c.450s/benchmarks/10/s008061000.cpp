#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES
#include<stdio.h>
#define B 4
#define F 3
#define R 10

int main() {
	int d[B][F][R] = { 0 };
	int b, f, r, v;
	int n, i, j, k;

	scanf("%d", &n);
	for (i=0;i<n;i++) {
		scanf("%d%d%d%d", &b, &f, &r, &v);
		d[b - 1][f - 1][r-1] += v;
	}
	for (i=0;i<B;i++) {
		for (j=0;j<F;j++) {
			for (k=0;k<R;k++)printf(" %d", d[i][j][k]);
			putchar('\n');
		}
		if(i!=3)
		puts("####################");
	}
	return 0;
}