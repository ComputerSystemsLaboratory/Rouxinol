#include <stdio.h>

int main(void){
	int num1;
	int num2;

	scanf("%d", &num1);
	scanf("%d", &num2);
	printf("%d %d\n", num1*num2, (num1+num2)*2);
    return 0;
}