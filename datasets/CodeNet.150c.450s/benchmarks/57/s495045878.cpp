#include <stdio.h>
#define PI 3.141592653589

int main(){
	float a,b,d;
	char c;
	
	while(1){
	scanf("%f", &a);
	fflush(stdin);
	scanf(" %c", &c);
	scanf("%f", &b);
	
	switch(c){
		case '+':
			printf("%.0f\n", a+b);
			break;
		case '-':
			printf("%.0f\n", a-b);
			break;
		case '*':
			printf("%.0f\n", a*b);
			break;
		case '/':
			printf("%d\n", (int)(a/b));
			break;
		case '?':
			return 0;
			break;
	}
}
	return 0;
}