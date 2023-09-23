#include <algorithm>
#include <cstdio>
using namespace std;

int b[10000];
int c[1024];

void count() {
	for (int x = 0; x < 1024; x++)
		for (int i = 0; i < 10; i++)
			c[x] += (x >> i) & 1;
}

int main() {
	count();
	for (;;) {
		int R, C;
		scanf("%d%d", &R, &C);
		if (R == 0 && C == 0)
			break;
		fill(b, b + 10000, 0);
		for (int i = 0; i < R; i++)
			for (int j = 0; j < C; j++) {
				int a;
				scanf("%d", &a);
				b[j] = (b[j] << 1) + a;
			}
		int ans = 0;
		for (int x = 0; x < (1 << R); x++) {
			int k = 0;
			for (int j = 0; j < C; j++)
				k += max(c[b[j] ^ x], R - c[b[j] ^ x]);
			ans = max(ans, k);
		}
		printf("%d\n", ans);
	}
}