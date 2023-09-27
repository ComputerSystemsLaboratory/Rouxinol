#include <cstdio>

int main(void)
{
	int n;
	int i;
	long sum;
	
	sum = 1;
	
	scanf("%d", &n);
	
	for (i = 0; i < n; i++){
		sum *= (n - i);
	}
	
	printf("%ld\n", sum);
	
	return (0);
}