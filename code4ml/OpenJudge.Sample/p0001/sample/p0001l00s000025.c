#include <stdio.h>

int main(void)
{
	int a, b, c, sum;
	
	while (scanf("%d%d", &a, &b) != EOF){
		sum = a + b;
		for (c = 0; sum != 0; c++){
			sum /= 10;
		}
		
		printf("%d\n", c);
	}
	
	return (0);
}