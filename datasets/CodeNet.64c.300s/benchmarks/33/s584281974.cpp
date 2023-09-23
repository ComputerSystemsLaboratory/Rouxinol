#include <stdio.h>

int main(void){

	int a,b;
	char op;

	for(;;){
		scanf("%d %c %d",&a,&op,&b);

		if(op == '+'){
			printf("%d",a+b);
		} 
		if(op == '-'){
			printf("%d",a-b);
		}
		if(op == '*'){
			printf("%d",a*b);
		}
		if(op == '/'){
			printf("%d",a/b);
		}
		if(op == '?'){
			break;
		}
		printf("\n");
	}


	return 0;
}