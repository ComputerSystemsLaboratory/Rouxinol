#include <stdio.h>

int main(void) {
	int a;
	while (scanf("%d", &a) != EOF) {
		int count = 0;
		for (int i = 0; i < 10; i++) {
			for (int j = 0; j < 10; j++) {
				for (int k = 0; k < 10; k++) {
					for (int l = 0; l < 10; l++) {
						if (a == i + j + k + l) count++;
					}
				}
			}
		}
		printf("%d\n", count);
	}
	return 0;
}