#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int a, b;
	char op;
	while (true) {
		scanf("%d %c %d", &a, &op, &b);
		switch (op) {
		case '+':
			printf("%d\n", a + b);
			break;
		case '-':
			printf("%d\n", a - b);
			break;
		case '*':
			printf("%d\n", a*b);
			break;
		case '/':
			printf("%d\n", a / b);
			break;
		default:
			return 0;
		}
	}
	return 0;
}