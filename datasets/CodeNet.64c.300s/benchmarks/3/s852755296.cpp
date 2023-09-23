#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define NUMBER 100

int main(void)
{
	int x[NUMBER];
	int i;
	int n;

	do {
		scanf("%d", &n);
	} while (n < 1 || n > 100);
	for (i = 0; i < n; i++) {
		scanf("%d",&x[i]);
	}
	for (i = 0; i < (n - 1); i++) {
		printf("%d ", x[(n - 1) - i]);
	}
	printf("%d\n",x[0]);

	
	
	
	
	
	
	
	
	
	
	return 0;
}