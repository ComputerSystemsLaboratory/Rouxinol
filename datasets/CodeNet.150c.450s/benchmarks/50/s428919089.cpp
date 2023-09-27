
#include <stdio.h>
#include <algorithm>

using namespace std;

int main() {

	int coin[] = { 500, 100, 50, 10, 5, 1 };

	for (;;) {

		int N, ans = 0;

		scanf("%d", &N);
		if (!N) break;

		N = 1000 - N;

		for (int i = 0; N > 0; i++) {
			while (N >= coin[i]) {
				N -= coin[i];
				ans++;
			}
		}

		printf("%d\n", ans);
	}

	return 0;
}