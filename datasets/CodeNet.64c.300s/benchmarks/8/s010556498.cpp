#include <stdio.h>
#pragma warning(disable:4996)

int main(void){
	int n = 0, x = 0;

	scanf("%d", &n);

	for (int i = 1; i <= n; i++){
		if (i % 3 == 0 || i % 10 == 3 || i /10 % 10 == 3 || i / 100 % 10 == 3 || i / 1000 % 10 == 3){
			printf(" %d", i);
		}
	}
	printf("\n");
}