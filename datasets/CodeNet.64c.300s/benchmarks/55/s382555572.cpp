#include<stdio.h>
int main(void) {
	int c = 1, d;
	while (1) {
		scanf("%d", &d);
		if (d == 0)return 0;
		else {
			printf("Case %d: %d\n", c, d);
			c++;
		}
	}
}