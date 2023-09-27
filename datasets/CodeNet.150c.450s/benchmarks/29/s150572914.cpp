#include <cstdio>
#pragma warning(disable : 4996)
const int inf = 1234567890;
int Q, x, a[2000009]; char c[15];
int main() {
	scanf("%d", &Q);
	int l = Q, r = Q;
	while (Q--) {
		scanf("%s", c);
		if (c[0] == 'i') {
			scanf("%d", &x);
			a[--l] = x;
		}
		else if (c[6] == 'F') {
			while (a[l] == inf) l++;
			a[l++] = 0;
		}
		else if (c[6] == 'L') {
			while (a[r - 1] == inf) r--;
			a[--r] = 0;
		}
		else {
			scanf("%d", &x);
			for (int i = l; i < r; i++) {
				if (a[i] == x) {
					a[i] = inf;
					break;
				}
			}
		}
	}
	for (int i = l, cnt = 0; i < r; i++) {
		if (a[i] != inf) {
			printf(cnt++ ? " %d" : "%d", a[i]);
		}
	}
	printf("\n");
	return 0;
}