#include <cstdio>
#include <math.h>

int main() {
	int n,a,c=0;
	bool b;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &a);
		b = true;
		for (int j = 2; j <= sqrt(a); j++) {
			if (a%j == 0) {
				b = false;
				break;
			}
		}
		if (b) c++;
	}
	printf("%d\n", c);
	return 0;
}