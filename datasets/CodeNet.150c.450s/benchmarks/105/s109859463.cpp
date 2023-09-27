#include <stdio.h>
int t, n, x, f;
unsigned long long a[200];
unsigned long long b[64];
unsigned long long q[200];
int y[64];
char s[201];
int main() {
	scanf("%d", &t);
	b[0] = 1;
	for (int i = 1; i < 64; i++)b[i] = b[i - 1] * 2;
	for (int v = 0; v < t; v++) {
		scanf("%d", &n);
		for (int i = 0; i < n; i++) {
			scanf("%llu", a + i);
		}
		scanf(" %s", s);
		for (int i = 0; i < 64; i++)y[i] = -1;
		f = 0;
		for (int i = n - 1; i >= 0; i--) {
			if (s[i] == '1') {
				for (int j = 0; j < 64; j++) {
					if (a[i] & b[j]) {
						if (y[j] == -1) {
							f = 1;
							goto X;
						}
						else {
							a[i] ^= q[y[j]];
						}
					}
				}
				if (a[i]) {
					f = 1;
					goto X;
				}
			}
			else {
				q[x] = a[i];
				for (int j = 0; j < 64; j++) {
					if (q[x] & b[j]) {
						if (y[j] != -1) {
							q[x] ^= q[y[j]];
						}
					}
				}
				for (int j = 0; j < 64; j++) {
					if (q[x] & b[j]) {
						if (y[j] == -1) {
							y[j] = x;
							break;
						}
					}
				}
				x++;
			}
		}
		x = 0;
	X:
		x = 0;
		printf("%d\n", f);
	}
}