#include<stdio.h>
int main() {
	int a[16][10], s, b, c, d, e;
	scanf("%d", &s);
	for (int x = 0; x<16; x++) {
		for (int y = 0; y<10; y++) {
			a[x][y] = 0;
		}
	}
	for (int i = 0; i<s; i++) {
		scanf("%d %d %d %d", &b, &c, &d, &e);
		a[(b - 1) * 3 + c - 1][d - 1] += e;
	}
	for (int x = 0; x<4; x++) {
		for (int y = 0; y<3; y++) {
			for (int z = 0; z<10; z++) {
				printf(" %d", a[x * 3 + y][z]);
			}
			printf("\n");
		}
		if (x<3)printf("####################\n");
	}
}