#include <stdio.h>

int
main(void)
{
	char line[80];
	int a[5000];
	int n;

	while (fgets(line, sizeof line, stdin)) {
		if (sscanf(line, "%d", &n) == 1) {
			if (n == 0) {
				break;
			}
			
			for (int i = 0; i < n; i++) {
				if (fgets(line, sizeof line, stdin) == NULL) {
					return 1;
				}
				if (sscanf(line, "%d", &(a[i])) != 1) {
					return 1;
				}
			}
			
			int m1 = -100001;
			for (int i = 0; i < n; i++) {
				int s = 0;
				int m0 = -100001;
				for (int j = i; j < n; j++) {
					s += a[j];
					if (m0 < s) {
						m0 = s;
					}
				}
				if (m1 < m0) {
					m1 = m0;
				}
			}
			printf("%d\n", m1);
		}
	}

	return 0;
}