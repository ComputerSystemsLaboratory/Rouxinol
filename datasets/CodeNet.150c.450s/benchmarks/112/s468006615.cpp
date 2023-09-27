#include <stdio.h>

int main(void) {
	int n,m;
	char trans[100][2];
	char c;

	while (scanf("%d", &n), n) {
		for (int i = 0; i < n; i++) {
			scanf(" %c %c", &trans[i][0], &trans[i][1]);
		}
		scanf("%d", &m);
		for (int i = 0; i < m; i++) {
			scanf(" %c", &c);
			for (int j = 0; j < n; j++) {
				if (trans[j][0] == c) {
					c = trans[j][1];
					break;
				}
			}
			printf("%c", c);
		}
		printf("\n");
	}
	return 0;
}