#include <stdio.h>

int main(void) {
	int n;
	int a, b;
	int ascore, bscore;

	while (scanf("%d", &n), n) {
		ascore = 0;
		bscore = 0;
		for (int i = 0; i < n; i++) {
			scanf("%d %d", &a, &b);
			if (a > b) ascore += a + b;
			else if (a < b) bscore += a + b;
			else {
				ascore += a;
				bscore += b;
			}
		}
		printf("%d %d\n", ascore, bscore);
	}
	return 0;
}