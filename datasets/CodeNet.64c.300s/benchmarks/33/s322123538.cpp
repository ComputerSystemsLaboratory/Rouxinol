#include <stdio.h>
int main(void){
	int a = 0, b = 0, c = 0;
	char op;

	while (1){
		scanf("%d %c %d", &a, &op, &b);

		if (op == '+'){
			c = a + b;
		}
		else if (op == '-'){
			c = a - b;
		}
		else if (op == '*'){
			c = a*b;
		}
		else if (op == '/'){
			c = a / b;
		}
		else{
			break;
		}
		printf("%d\n", c);
	}
}