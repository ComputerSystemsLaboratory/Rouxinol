#include<stdio.h>
int main(void) {
	int a, b, d = 1;
	while (scanf("%d %d", &a, &b) != EOF) {
		for (size_t i = 10; ; i *= 10)
		{
			if ((a + b) / i == 0)break;
			d++;
		}
		printf("%d\n", d);
		a = 0; b = 0; d = 1;
	}
	return 0;
}