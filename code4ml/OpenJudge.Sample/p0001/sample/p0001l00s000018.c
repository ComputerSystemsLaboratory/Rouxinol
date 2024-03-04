#include <stdio.h>

int main()
{
	int a, b;
	int i = 0;
	int sum;
	int keta = 1;
	
	while (i <= 200){
		if (scanf("%d", &a) == EOF){
			break;
		}
		scanf("%d", &b);
		sum = a + b;
		while (sum >= 10){
			sum /= 10;
			keta++;
		}
		printf("%d\n", keta);
		i++;
		keta = 1;
	}
	
	return (0);
}