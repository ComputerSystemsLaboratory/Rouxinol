#include <stdio.h>


int main() {
	char op;
	int a, b;
	int A[100] = {};
	int i = 0;
	for (;;) {
		scanf("%d %c %d", &a, &op, &b);
		if (op == '?')break;
		else if (op == '+') {
			A[i] = a + b;
			i++;
		}
		else if (op == '-') {
			A[i] = a - b;
			i++;
		}
		else if (op == '*') {
			A[i] = a * b;
			i++;
		}
		else if (op == '/') {
			A[i] = a / b;
			i++;
		}
	}
	for (int j = 0; j < i; j++) {
		printf("%d\n", A[j]);
	}
	

	return 0;
}