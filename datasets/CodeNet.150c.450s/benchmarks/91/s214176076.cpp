#include <stdio.h>

#define NUM_MAX (1000000)

int
main(void)
{
	bool a[NUM_MAX];

	for (int i = 0; i < NUM_MAX; i++) {
		a[i] = true;
	}
	for (int i = 2; i*i < NUM_MAX; i++) {
		if (a[i]) {
			for (int j= i*i; j < NUM_MAX; j += i) {
				a[j] = false;
			}
		}
	}
	
	char line[80];
	int n;

	while (fgets(line, sizeof line, stdin)) {
		if (sscanf(line, "%d", &n) == 1) {
			int s = 0;
			for (int i = 2; i <= n; i++) {
				if (a[i]) {
					s ++;
				}
			}

			printf("%d\n", s);
		}
	}

	return 0;
}