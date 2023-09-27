#include <stdio.h>

static void
sort(int* h, int n)
{
	for (int i = 0; i < n; i++) {
		for (int j = n - 1; j > i; j--) {
			if (h[j] > h[j-1]) {
				int tmp = h[j];
				h[j] = h[j-1];
				h[j-1] = tmp;
			}
		}
	}
}

int
main(void)
{
	char line[80];
	int a[5];

	if (fgets(line, sizeof line, stdin)) {
		if (sscanf(line, "%d %d %d %d %d",
		    &(a[0]), &(a[1]), &(a[2]), &(a[3]), &(a[4])) == 5) {
			sort(a, 5);
			
			printf("%d %d %d %d %d\n", a[0], a[1], a[2], a[3], a[4]);
		}
	}

	return 0;
}