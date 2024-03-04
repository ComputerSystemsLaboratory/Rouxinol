#include <stdio.h>

int main(void)
{
	int a, b;
	int keta;
	int count;
	
	while (scanf("%d %d", &a, &b) != EOF) {
		keta = a + b;
		count = 1;
		while (keta >= 10) {
			keta /= 10;
			count++;
		}
		
		printf("%d\n", count);
	}
	return (0);
}