#include<math.h>
#include<stdio.h>
#include<utility>
#include<algorithm>

int main() {
	int a, b, c, n, m;
	scanf("%d %d %d", &a, &b, &c);/////////////////////////
	n = a;
	m = 0;
	while (n <= b) {
		if (c%n == 0) {
			m++;
		}
		n++;
	}
	printf("%d\n", m);
	return 0;
}