#include <stdio.h>

int main(void){
	int a, b, ans;
	char op = 's';
	bool flag = false;

	do {
		switch (op) {
			case '+':
				ans = a + b;
				break;
			case '-':
				ans = a - b;
				break;
			case '*':
				ans = a * b;
				break;
			case '/':
				ans = a / b;
break;
			default:
				flag = true;
				break;
		}

		if (!flag) printf("%d\n", ans);
		flag = false;
		scanf("%d %c %d", &a, &op, &b);
	} while (op != '?');
	return 0;
}