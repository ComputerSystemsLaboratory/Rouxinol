#include <stdio.h>
#include <math.h>

#define M_PI 3.141592653589793

int main(void) {

	int i, n;
	int num;

	scanf("%d", &n);

	for (i = 1; i <= n; i++) {
		if (i % 3 == 0) {
			printf(" %d", i);
		}
		else {
			num = i;
			while (1) {
				if (num % 10 == 3) {
					printf(" %d", i);
					break;
				}
				num = num / 10;
				if (num == 0) {
					break;
				}
			}
		}
	}
	printf("\n");

	return 0;

}