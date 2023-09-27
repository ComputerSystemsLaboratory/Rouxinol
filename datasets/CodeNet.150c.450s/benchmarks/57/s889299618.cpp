#include<cstdio>

int main(void){
	int a, b;
	char op;
	
	while(1){
		scanf("%d %c %d", &a, & op, &b);
		if (op == '+' ) printf("%d\n", a + b);
		else if (op == '-' ) printf("%d\n", a - b);
		else if (op == '*' ) printf("%d\n", a * b);
		else if (op == '/' && b != 0) printf("%d\n", a / b);
		else if (op == '/' && b == 0) printf("Error: Zero devision is not defined.\n");
		else if (op == '?') break;
		else continue;
	}
		
	return 0;
}