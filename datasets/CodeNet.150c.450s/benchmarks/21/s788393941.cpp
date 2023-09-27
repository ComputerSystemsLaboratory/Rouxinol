#include <stdio.h>

int main(void)
{
	int x, temp;
	scanf("%d", &x);
	temp = x;
	for(int i=0; i<2; i++)
		temp = temp * x;
	printf("%d\n", temp);

	return 0;
}