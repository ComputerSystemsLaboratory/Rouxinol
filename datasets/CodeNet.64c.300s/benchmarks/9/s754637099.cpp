#include <stdio.h>
#include <math.h>

int
main(void)
{
	char line[80];
	int n;
	long s = 100000;
	
	if (fgets(line, sizeof line, stdin)) {
		if (sscanf(line, "%d", &n) == 1) {
			for (int i = 0; i < n; i++) {
				s = s * 1.05;
				s = ceil(s / 1000.0) * 1000;
			}

			printf("%ld\n", s);
		}
	}

	return 0;
}