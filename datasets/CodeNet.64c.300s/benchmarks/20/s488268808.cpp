#include <stdio.h>

int
main(void)
{
	char line[80];
	int d;

	while (fgets(line, sizeof line, stdin)) {
		if (sscanf(line, "%d", &d) == 1) {
			int s = 0;
			for (int i = 1; d*i <= 600 - d; i++) {
				s += (d*i)*(d*i) * d;
			}
			printf("%d\n", s);
		}
	}

	return 0;
}