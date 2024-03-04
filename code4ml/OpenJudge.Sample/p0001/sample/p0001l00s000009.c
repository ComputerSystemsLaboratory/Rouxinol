#include <stdio.h>

int main(){
	
	int num1, num2, sum;
	int digit = 0;
	
	while(scanf("%d %d", &num1, &num2) != EOF){
	
	sum = num1 + num2;
	
	while(sum > 0){
		digit++;
		sum = sum / 10;
	}

	printf("%d\n", digit);
	
	digit = 0;
	}
	
	return 0;
}