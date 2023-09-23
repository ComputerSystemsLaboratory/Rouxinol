#include<stdio.h>
int main(void)
{
	int i,x;
	i =1;
	do{
		scanf("%d", &x);
		if (x!=0)
			printf("Case %d: %d\n", i, x);
		i = i + 1;

	} while (x != 0);
	
	

	return 0;
}