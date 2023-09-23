#include <cstdio>
#include <cmath>
int main(void) {
	int n, i = 0;
	while (scanf("%d", &n) != EOF) {
		if (!n) return 0;
		printf("Case %d: %d\n", ++i, n);
	}
	return 0;
}