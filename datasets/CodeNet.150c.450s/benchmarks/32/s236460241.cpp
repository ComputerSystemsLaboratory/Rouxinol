#include <stdio.h>

int main(void) {

	for (;;) {
		int num;
		int nmin;
		int nmax;

		scanf("%d %d %d", &num, &nmin, &nmax);
		if (num == 0 && nmin == 0 && nmax == 0) {
			break;
		}

		int prev;
		int max = 0;
		int i;
		for (i = 1; i <= nmin; i++) {
			scanf("%d", &prev);
		}

		int n;
		for (; i <= nmax + 1; i++) {
			int score;
			scanf("%d", &score);
			int gap = prev - score;

			if (max <= gap) {
				max = gap;
				n = i - 1;
			}

			prev = score;
		}
		for (; i <= num; i++) {
			int score;
			scanf("%d", &score);
		}

		printf("%d\n", n);
	}
	return 0;
}