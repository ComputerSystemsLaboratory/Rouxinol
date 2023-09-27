#include <stdio.h>

int
main(void)
{
	char line[80];
	int a[4], b[4];

	while (true) {
		if (fgets(line, sizeof line, stdin) == NULL) {
			return 0;
		}
		if (sscanf(line, "%d %d %d %d", &(a[0]), &(a[1]), &(a[2]), &(a[3])) != 4) {
			return 0;
		}

		if (fgets(line, sizeof line, stdin) == NULL) {
			return 0;
		}
		if (sscanf(line, "%d %d %d %d", &(b[0]), &(b[1]), &(b[2]), &(b[3])) != 4) {
			return 0;
		}
		
		int h = 0;
		int w = 0;
		
		for (int i = 0; i < 4; i++) {
			for (int j = 0; j < 4; j++) {
				if (a[i] == b[j]) {
					if (i == j) {
						h++;
					} else {
						w++;
					}
				}
			}
		}
		printf("%d %d\n", h, w);
	}

	return 0;
}