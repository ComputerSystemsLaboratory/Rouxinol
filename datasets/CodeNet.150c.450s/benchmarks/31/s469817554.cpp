#include <stdio.h>
int n, a, m = 1999999999, r = -1999999999;
int main() {
	scanf("%d", &n);
	for(int i = 0; i < n; i++) {
		scanf("%d", &a);
		r = r > (a - m) ? r : (a - m);
		m = m < a ? m : a;
	}
	printf("%d\n", r);
}