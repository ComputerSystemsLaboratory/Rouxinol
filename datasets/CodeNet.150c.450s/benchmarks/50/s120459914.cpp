#include <stdio.h>

int N;
int coin[6] = { 500,100,50,10,5,1 };
int ans = 0;

int main(void) {
	while (true) {
		scanf("%d", &N);
		if (N == 0) { break; }

		ans = 0;
		int res = 1000 - N;
		while (res != 0) {
			if (res >= 500) {
				ans += res / 500;
				res -= 500 * (res / 500);
			}
			else if (res >= 100) {
				ans += res / 100;
				res -= 100 * (res / 100);
			}
			else if (res >= 50) {
				ans += res / 50;
				res -= 50 * (res / 50);
			}
			else if (res >= 10) {
				ans += res / 10;
				res -= 10 * (res / 10);
			}
			else if (res >= 5) {
				ans += res / 5;
				res -= 5 * (res / 5);
			}
			else { ans += res; res = 0; }
		}
		printf("%d\n", ans);
	}
	return 0;
}