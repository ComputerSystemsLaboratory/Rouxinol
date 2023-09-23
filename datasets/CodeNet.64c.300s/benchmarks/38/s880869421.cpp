#include <stdio.h>

int
main(void)
{
	char line[80];

	int b[10];

	int n;

	if (fgets(line, sizeof line, stdin) == NULL) {
		return 0;
	}
	if (sscanf(line, "%d", &n) != 1) {
		return 0;
	}

	while (n--) {
		fgets(line, sizeof line, stdin);
		sscanf(line, "%d %d %d %d %d %d %d %d %d %d",
			   &(b[0]), &(b[1]), &(b[2]), &(b[3]), &(b[4]), &(b[5]),
			   &(b[6]), &(b[7]), &(b[7]), &(b[9]));

		bool f = true;
		int s0 = 0;
		int s1 = 0;
		for (int t : b) {
			if (t > s0 && t > s1) {
				if (t - s0 <= t - s1) {
					s0 = t;
				} else {
					s1 = t;
				}
			} else 	if (t > s0) {
				s0 = t;
			} else 	if (t > s1) {
				s1 = t;
			} else {
				f = false;
				break;
			}
		}
		printf("%s\n", (f ? "YES" : "NO"));
	}

	return 0;
}