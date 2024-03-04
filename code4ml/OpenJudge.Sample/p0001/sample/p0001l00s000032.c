#include <stdio.h>
#include <math.h>

int main()
{
	long int a, b;

	while(scanf("%ld %ld", &a, &b) != EOF){
		printf("%d\n", (int)log10((double)a+b) + 1);
	}

    return 0;
}