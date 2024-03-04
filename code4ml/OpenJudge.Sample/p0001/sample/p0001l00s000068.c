#include<stdio.h>

int main(void){
	int a, b, sum, i, len;
	
	while(scanf("%d %d", &a, &b) != EOF){
		sum = a + b;
		for(len = 1; sum >= 10; len++){
			sum /= 10;
		}
		printf("%d\n", len);
	}
	return 0;
}