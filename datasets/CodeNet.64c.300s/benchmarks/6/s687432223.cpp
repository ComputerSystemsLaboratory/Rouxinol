#include <stdio.h>

int house[4][3][10];

int main() {
	int n;
	scanf("%d", &n);

	for (int i=0; i<n; i++) {
		int b, f, r, v;
		scanf("%d%d%d%d", &b, &f, &r, &v);

		house[b-1][f-1][r-1] += v;
	}

	for (int i=0; i<4; i++) {
		for (int j=0; j<3; j++) {
			for (int k=0; k<10; k++) {
				printf(" %d", house[i][j][k]);
			}
			putchar('\n');
		}
		if (i<3) printf("####################\n");
	}
}