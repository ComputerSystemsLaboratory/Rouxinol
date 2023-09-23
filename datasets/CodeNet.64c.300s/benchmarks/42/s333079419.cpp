#include <stdio.h>

typedef struct _Gem{
	int x;
	int y;
	bool hit;
} Gem;

static void
pick_gem(Gem* g, int n, int x, int y)
{
	for (int i = 0; i < n; i++) {
		if (!g[i].hit && g[i].x == x && g[i].y == y) {
			g[i].hit = true;
			return;
		}
	}
}

static bool
check_gem(Gem* g, int n)
{
	for (int i = 0; i < n; i++) {
		if (g[i].hit == false) {
			return false;
		}
	}
	
	return true;
}

int
main(void)
{
	
	char line[80];
	int n;
	int m;
	
	Gem g[20];
	
	char d[30];
	int l[30];

	while (true) {
		if (fgets(line, sizeof line, stdin) == NULL) {
			return 1;
		}
		if (sscanf(line, "%d", &n) != 1) {
			return 1;
		}

		if (n == 0) {
			break;
		}

		for (int i = 0; i < n; i++) {
			if (fgets(line, sizeof line, stdin) == NULL) {
				return 1;
			}
			if (sscanf(line, "%d %d", &(g[i].x), &(g[i].y)) != 2) {
				return 1;
			}
			g[i].hit = false;
		}
		
		if (fgets(line, sizeof line, stdin) == NULL) {
			return 1;
		}
		if (sscanf(line, "%d", &m) != 1) {
			return 1;
		}
		
		for (int i = 0; i < m; i++) {
			if (fgets(line, sizeof line, stdin) == NULL) {
				return 1;
			}
			if (sscanf(line, "%c %d", &(d[i]), &(l[i])) != 2) {
				return 1;
			}
		}
		
		int x = 10;
		int y = 10;
		for (int i = 0; i < m; i++) {
			if (d[i] == 'N') {
				for (int k = 1; k <= l[i]; k++) {
					pick_gem(g, n, x, ++y);
				}
			} else if (d[i] == 'S') {
				for (int k = 1; k <= l[i]; k++) {
					pick_gem(g, n, x, --y);
				}
			} else if (d[i] == 'E') {
				for (int k = 1; k <= l[i]; k++) {
					pick_gem(g, n, ++x, y);
				}
			} else {
				for (int k = 1; k <= l[i]; k++) {
					pick_gem(g, n, --x, y);
				}
			}
		}
		printf("%s\n", (check_gem(g, n) ? "Yes" : "No"));
	}

	return 0;
}