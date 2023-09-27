#include <stdio.h>

#define ROW_MAX 10
#define COLUMN_MAX 10000

bool osenbei[ROW_MAX][COLUMN_MAX];
int r, c, bake_max;

inline int count() {
	int cnt = 0;
	int i, j;

	for (i = 0; i < c; i++) {
		int tmp;
		for (j = tmp = 1; j < r; j++) {
			if (osenbei[j][i] == osenbei[0][i]) {
				tmp++;
			}
		}

		if (tmp < r - tmp) {
			cnt += r - tmp;
		}
		else {
			cnt += tmp;
		}
	}

	return cnt;
}

inline void step(int n) {
	int i;
	if (n--) {
		step(n);
		for (i = 0; i < c; i++) {
			osenbei[n][i] ^= 1;
		}
		step(n);
	}
	else {
		int tmp = count();
		if (bake_max < tmp) {
			bake_max = tmp;
		}
	}
}

int main() {
	int i, j;

	while (scanf("%d%d", &r, &c), r | c) {
		for (i = 0; i < r; i++) {
			for (j = 0; j < c; j++) {
				osenbei[i][j] = (getchar() | getchar()) & 1;
			}
		}

		bake_max = 0;
		step(r);
		printf("%d\n", bake_max);
	}

	return 0;
}