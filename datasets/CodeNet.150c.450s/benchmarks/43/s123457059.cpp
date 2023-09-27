#include<stdio.h>
#include<math.h>
#include<algorithm>
#include<cctype>
#include<string.h>
#include <stdlib.h>

#define PI 3.1415926

int main() {
	int n, x, y;
	int a = 0, b = 0;
	for (int i = 1; i <= 5; i++) {
		scanf("%d", &n);
		if (n == 0) {
			break;
		}
		for (int j = 1; j <= n; j++) {
			scanf("%d %d", &x, &y);
			if (x == y) {
				a += x;
				b += y;
			}
			else if (x < y) {
				b += x + y;
			}
			else {
				a += x + y;
			}
		}
		printf("%d %d\n", a, b);
		a = 0;
		b = 0;
	}
	return 0;
}