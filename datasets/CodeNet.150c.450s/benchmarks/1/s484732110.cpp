#include <stdio.h>

int a[100001];
int b[100001], *pb = b + 1;

int main(void) {
	int n;
	scanf("%d", &n);
	for (int i = 0; i != n; ++i) scanf("%d", a + i);
	*pb++ = a[0];
	for (int i = 1; i != n; ++i) {
		if (a[i] > pb[-1]) *pb++ = a[i];
		else {
			int* p1 = b + 1, *p2 = pb;
			while (p1 <= p2) {
				int* p = p1 + (p2 - p1) / 2;
				if (a[i] > *p) p1 = p + 1;
				else p2 = p - 1;
			}
			*p1 = a[i];
		}
	}
	printf("%d\n", pb - b - 1);
	return 0;
}

