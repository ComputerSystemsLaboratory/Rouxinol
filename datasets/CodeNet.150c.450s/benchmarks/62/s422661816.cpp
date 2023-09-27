#include<stdio.h>
int main() {
	int a, b, c,buff;
	scanf("%d %d %d", &a, &b, &c);
	if (c < b) {
		buff = b;
		b = c;
		c = buff;
	}
	if (b < a) {
		buff = a;
		a = b;
		b = buff;
	}
	if (c < b) {
		buff = b;
		b = c;
		c = buff;
	}
	printf("%d %d %d\n", a, b, c);
}
