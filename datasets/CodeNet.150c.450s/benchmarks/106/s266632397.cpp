#include<stdio.h>
int main()
{
	int a, b,c,i,j,d;


    scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);
	d = 0;
	for (i = a; i <= b; i++)
	{
		 
		if (c%i==0 )
			d=d+1;
	};
	printf("%d\n", d);
	return 0;
}