#include <stdio.h>

int main(void){

	int a,b;
	char op,none;
	
	while(1){
		scanf("%d", &a);
		scanf("%c", &none);
		scanf("%c", &op);
		scanf("%d", &b);
		
		if(op=='?'){
			break;
		}
		
		switch(op){
			case '+':
				printf("%d\n", a+b);
				break;
			case '-':
				printf("%d\n", a-b);
				break;
			case '*':
				printf("%d\n", a*b);
				break;
			case '/':
				printf("%d\n", a/b);
				break;
			default:
				printf("invalid\n");
		}
	}
	
	return 0;
}