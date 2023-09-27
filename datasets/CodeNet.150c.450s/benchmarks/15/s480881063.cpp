#include <stdio.h>
#include <math.h>
int main(void)
{
	int n, q, S[10000], T[500], count = 0, i, j;
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%d", &S[i]);
	}
	scanf("%d", &q);
	for (i = 0; i < q; i++) {
		scanf("%d", &T[i]);
	}
	for (i = 0; i < q; i++) {
		for (j = 0; j < n; j++) {
			if (S[j] == T[i]) {
				count++; break;
			}
		}
	}
	printf("%d\n", count);
}