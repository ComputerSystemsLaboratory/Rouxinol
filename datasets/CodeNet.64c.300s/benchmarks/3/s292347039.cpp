#include <stdio.h>
#include <math.h>

#define M_PI 3.141592653589793

int main(void) {

	int i, n;
	int num[100];

	scanf("%d", &n);

	for (i = 0; i < n; i++) {
		scanf("%d", &num[i]);
	}
	for (i = n - 1; i > 0; i--) {
		printf("%d ", num[i]);
	}
	printf("%d\n", num[0]);



	return 0;

}