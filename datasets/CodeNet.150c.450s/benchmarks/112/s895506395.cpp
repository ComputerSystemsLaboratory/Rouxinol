#include <stdio.h>

int n, m;
char change[112345678][2], data[112345678];
int main(void) {
	while (true) {
		scanf("%d", &n);
		if (n == 0) { break; }
		for (int i = 0; i < n; ++i) { scanf("%s%s", &change[i][0], &change[i][1]); }
		scanf("%d", &m);
		for (int i = 0; i < m; ++i) { scanf("%s", &data[i]); }

		for (int i = 0; i < m; ++i) {
			for (int j = 0; j < n; ++j) {
				if (data[i] == change[j][0]) {
					data[i] = change[j][1];
					break;
				}
			}
		}

		printf("%s\n", data);
	}
	return 0;
}