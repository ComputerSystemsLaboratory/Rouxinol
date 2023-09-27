#include <stdio.h>
int a[6], q, s, t, u, v;
const int r[6][6] = {
	{ 7, 2, 4, 1, 3, 7 },
	{ 3, 7, 0, 5, 7, 2 },
	{ 1, 5, 7, 7, 0, 4 },
	{ 4, 0, 7, 7, 5, 1 },
	{ 2, 7, 5, 0, 7, 3 },
	{ 7, 3, 1, 4, 2, 7 }
};
int main() {
	for(int i = 0; i < 6; i++) scanf("%d", &a[i]);
	scanf("%d", &q);
	for(int i = 0; i < q; i++) {
		scanf("%d%d", &s, &t);
		for(int j = 0; j < 6; j++) {
			if(a[j] == s) u = j;
			if(a[j] == t) v = j;
		}
		printf("%d\n", a[r[u][v]]);
	}
	return 0;
}