#include <stdio.h>

int main(){
	int a, b;
	char op;
	int ans;

	scanf("%d %c %d", &a, &op, &b);
	
	while(op != '?'){
		switch(op){
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
		}

		printf("%d\n", ans);
		scanf("%d %c %d", &a, &op, &b);
	}

	return 0;
}