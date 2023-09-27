#include <stdio.h>

int
main(void)
{
	char line[80];
	int n;

	if (fgets(line, sizeof line, stdin)) {
		if (sscanf(line, "%d", &n) == 1) {

			long long r = 1;
			for (int i = 2; i <= n; i++) {
				r *= i;
			}
			
			printf("%lld\n", r);
		}
	}

	return 0;
}