#include <stdio.h>

int main(void)
{
	int a;
	int b;
	int sum;
	int i;
	
	while (scanf("%d %d", &a, &b) != EOF){
		
		if (a < 0 || b < 0) break;
		sum = a + b;
		
		for (i = 0; sum != 0; i++){
			sum /= 10;
		}
		
		printf("%d\n", i);
	}
	
	return (0);
}