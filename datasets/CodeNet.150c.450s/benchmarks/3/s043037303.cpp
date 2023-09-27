#include <stdio.h>
#include <string.h>

int main(void) {
	char str[1001], p[1001], state[10];
	int a, b, q;
	
	scanf("%s\n%d", str, &q);
	for (int i = 1; i <= q; i++) {
		scanf("%s", state);
		if (strcmp(state, "replace") == 0) {
			scanf("%d %d %s", &a, &b, p);
			for (int j = 0; j < b - a + 1; j++) {
				str[a + j] = p[j];
			}
		} else {
			scanf("%d %d", &a, &b);
			if (strcmp(state, "reverse") == 0) {
				for (int j = a; j <= b; j++) {
					p[j] = str[j];
				}
				for (int j = a; j <= b; j++) {
					str[j] = p[b + a - j];
				}

			} else {
				for (int j = a; j <= b; j++) {
					printf("%c", str[j]);
				}
				printf("\n");
			}
		}
	}

	return 0;
}