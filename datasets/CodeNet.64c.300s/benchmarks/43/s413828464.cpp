#include <stdio.h>

int main(void) {

	int a, b, c, d;
	int e, f, g, h;

	scanf("%d %d %d %d", &a, &b, &c, &d);

	scanf("%d %d %d %d", &e, &f, &g, &h);

	if ((a + b + c + d) > (e + f + g + h)) {
		printf("%d\n", a + b + c + d);
	}
	else if ((a + b + c + d) < (e + f + g + h)) {
		printf("%d\n", e + f + g + h);
	}
	else if ((a + b + c + d) == (e + f + g + h)) {
		printf("%d\n", a + b + c + d);
	}
	return 0;
}
