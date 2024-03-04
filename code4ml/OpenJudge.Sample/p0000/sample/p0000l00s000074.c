#include <stdio.h>

int main() {
	int hill[10];
	int i, j, n, x, max = 0;

	for(i = 0; i < 10; i++) {
		scanf("%d", &n);
		hill[i] = n;
	}

	for(i = 0; i < 3; i++) {
		for(j = 0; j < 10; j++) {
			if(hill[j] > max) {
				max = hill[j];
				x = j;
			}
		}
		printf("%d\n", max);
		hill[x] = 0;
		max = 0;
	}

	return 0;
}