#include<stdio.h>
int main() {
	int a, b;
	char c;
	while (scanf("%d %c %d", &a,&c, &b),c!='?') {
		if (c == '*')
			printf("%d\n", a*b);
		else if (c == '/')
			printf("%d\n", a / b);
		else if (c == '+')
			printf("%d\n", a + b);
		else if (c == '-')
			printf("%d\n", a - b);
	}
	return 0;
}