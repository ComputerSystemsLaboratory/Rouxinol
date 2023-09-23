#include <stdio.h>
int main(void){
	int a, b, flag = 0;
	char op;

	while (flag == 0){
		scanf("%d %c %d", &a, &op, &b);
		if (op == '?') flag = 1;
		else if (op == '+') printf("%d\n", (a + b));
		else if (op == '-') printf("%d\n", (a - b));
		else if (op == '/') printf("%d\n", (a / b));
		else if (op == '*') printf("%d\n", (a * b));
	}
}