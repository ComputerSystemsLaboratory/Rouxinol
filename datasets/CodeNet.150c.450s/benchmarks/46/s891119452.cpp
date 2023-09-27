#include <stdio.h>
#include <math.h>

#define M_PI 3.141592653589793


int main(void) {

	int i, j, k, p;
	int num = 0;
	int sum, count;

	int combination[10000][2];

	while (1) {
		scanf("%d %d", &combination[num][0], &combination[num][1]);
		if (combination[num][0] == 0 && combination[num][1] == 0) {
			break;
		}
		num++;
	}

	for (p = 0; p < num; p++) {
		count = 0;
		for (i = 1; i <= combination[p][0] - 2; i++) {
			for (j = i + 1; j <= combination[p][0] - 1; j++) {
				for (k = j + 1; k <= combination[p][0]; k++) {
					sum = i + j + k;
					if (sum == combination[p][1]) {
						//("%d+%d+%d=%d\n", i, j, k, sum);
						count++;
					}
				}
			}
		}
		printf("%d\n", count);
	}
	

	return 0;

}