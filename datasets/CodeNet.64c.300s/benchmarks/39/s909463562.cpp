#include <stdio.h>

int main(void) {
	int n;
	while (scanf("%d", &n) == 1) {
		int total = 0;
		for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
		for (int k = 0; k < 10; k++) {
		for (int l = 0; l < 10; l++) {
			if (i+j+k+l == n)
				total++;
		}}}}
		printf("%d\n", total);
	}
	return 0;
}