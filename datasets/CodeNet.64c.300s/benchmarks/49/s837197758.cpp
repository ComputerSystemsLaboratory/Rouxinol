#include <stdio.h>

int main()
{
	int a,b;

	while(1)
	{
		int kai;
		int i = 1;
		int j = scanf("%d %d" , &a,&b);
		if(j==EOF) break;

		kai = a+b;

		while(kai > 9)
		{
			kai /= 10;
			i++;
		}

		printf("%d\n" , i);
	}
}