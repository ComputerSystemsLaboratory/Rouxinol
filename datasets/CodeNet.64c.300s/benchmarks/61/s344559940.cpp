#include <stdio.h>
#include <math.h>

#define M_PI 3.141592653589793


int main(void) {

	int i, j, k;
	int sum, total = 0;
	int r,c;
	int table[100][100] = { 0 };

	scanf("%d %d", &r, &c);
	for (j = 0; j < r; j++) {
		for (i = 0; i < c; i++) {
			scanf("%d", &table[j][i]);
		}
	}



	for (j = 0; j < r; j++) {
		sum = 0;
		for (i = 0; i < c; i++) {
			printf("%d ", table[j][i]);
			sum += table[j][i];
		}
		printf("%d\n", sum);
	}
	for (i = 0; i < c; i++) {
		sum = 0;
		for (j = 0; j < r; j++) {
			sum += table[j][i];
		}
		printf("%d ", sum);
		total += sum;
	}
	printf("%d\n", total);
	

	return 0;

}