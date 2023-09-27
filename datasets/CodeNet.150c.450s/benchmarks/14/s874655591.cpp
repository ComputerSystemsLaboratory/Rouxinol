#include <stdio.h>


int main() {
	int n,a,b;

	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		a = i;
		b = a;
		if (i % 3 == 0) {
			printf(" %d", a);
			continue;
		}
		for (;;) {
			if (a%10==3) {
				printf(" %d", b);
				break;
			}
			else if(a<10){
				break;
			}
			a /= 10;
		}
	}
	printf("\n");

	return 0;
}