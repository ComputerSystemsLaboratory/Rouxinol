#define _USE_MATH_DEFINES

#include<math.h>
#include<stdio.h>
#include<utility>
#include<algorithm>

int main() {
	int n, m, l, o, D;
	D = 0;
	m = 1;
	scanf("%d", &n);//////////////////////////
	while (m <= n) {
		if (m % 3 == 0) {
			printf(" %d", m);
		}
		else {
			l = m;
			while (l != 0) {
				o = l % 10;
				if (o == 3) {
					printf(" %d", m);
					break;
				}
				l /= 10;
			}
		}
		m++;
	}
	printf("\n");
	return 0;
}