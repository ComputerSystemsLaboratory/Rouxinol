#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int r=0,c=0,tmp=0,sum=0;
	scanf("%d %d", &r, &c);
	int chart[101][101] = { 0 };
	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) {
			scanf("%d", &tmp);
			//printf("@@%d", tmp);
			chart[i][j] = tmp;
			sum += tmp;
		}
	}
	chart[r][c] = sum;
	for (int i = 0; i < r; i++) {
		int r_sum = 0;
		for (int j = 0; j < c; j++) {
			r_sum += chart[i][j];
		}
		chart[i][c] = r_sum;
	}

	for (int i = 0; i < c; i++) {
		int c_sum = 0;
		for (int j = 0; j < r; j++) {
			c_sum += chart[j][i];
		}
		chart[r][i] = c_sum;
	}

	for (int i = 0; i <= r; i++) {
		for (int j = 0; j <= c; j++) {
			if (j == c) {
				printf("%d",chart[i][j]);
			}
			else {
			printf("%d ", chart[i][j]);
			}
		}
		printf("\n");
	}
	return 0;
}