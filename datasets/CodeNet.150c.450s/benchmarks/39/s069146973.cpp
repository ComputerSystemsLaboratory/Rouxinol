#include<stdio.h>
int main()
{
	int a, b;

	scanf("%d %d", &a, &b);
	if (1 < a < 100, 1 < b < 100){
		printf("%d %d\n", a*b, 2 * a + 2 * b);
	}
	
	else{ printf("error"); };

	return 0;
}