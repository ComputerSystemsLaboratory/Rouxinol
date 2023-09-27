#include <stdio.h>

static void
init_pos(int* a, int n)
{
	int k = 0;
	for (int i = 0; i < n; i++) {
		a[i] = k++;
	}
}

static bool
next_pos(int* a, int n)
{
	for (int i = n - 1; i >= 0; i--) {
		if (a[i] >= 9 - (n-i-1)) {
			continue;
		} else {
			a[i] ++;
			int h = a[i] + 1;
			for (int k = i+1; k < n; k++) {
				a[k] = h ++;
			}
			return true;
		}
	}
	return false;
}

static int
check(int* a, int n, int s)
{
	int b = 0;
	for (int i = 0; i < n; i++) {
		b += a[i];
	}

	if (s == b) {
		return 1;
	} else {
		return 0;
	}
}

int
main(void)
{
	char line[80];

	int n, s;

	int a[10];
	
	while (true) {
		if (fgets(line, sizeof line, stdin) == NULL) {
			break;
		}
		if (sscanf(line, "%d %d", &n, &s) != 2) {
			break;
		}

		if (n == 0 && s == 0) {
			break;
		}

		init_pos(a, n);

		int m = check(a, n, s);
		
		while (next_pos(a, n)) {
			m += check(a, n, s);
		}

		printf("%d\n", m);
	}

	return 0;
}