#include <stdio.h>

int
main(void)
{
	char line[80];
	int n;

	while (fgets(line, sizeof line, stdin)) {
		if (sscanf(line, "%d", &n) == 1) {
			int r = 0;
				
			for (int a = 0; a <= 9; a++) {
				for (int b = 0; b <= 9; b++) {
					for (int c = 0; c <= 9; c++) {
						for (int d = 0; d <= 9; d++) {
							if (a + b + c + d == n) {
								r ++;
							}
						}
					}
				}
			}

			printf("%d\n", r);
		}
	}

	return 0;
}