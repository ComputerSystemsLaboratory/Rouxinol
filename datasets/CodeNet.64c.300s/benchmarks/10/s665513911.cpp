#include<stdio.h>
int main() {
	int a, b, c, d,i = 0;
	while (1) {
		scanf("%d %d", &a,&b);
		if (a == 0 && b == 0)break;
		if (a > b) {
			c = a;
			a = b;
			b = c;
		}
		printf("%d %d\n", a, b);
	}

}
