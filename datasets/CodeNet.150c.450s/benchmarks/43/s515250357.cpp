#include<stdio.h>
int main()
{
	int n, a, b, i, point1, point2;
	while(1)
	{	
		point1 = 0;
		point2 = 0;
		scanf("%d", &n);
		if ( n == 0 ) break;		
		for ( i = 0; i < n; i++)
		{
			scanf("%d %d", &a, &b);
			if ( a > b )point1 = point1 + a + b;
			else if ( a < b )point2 = point2 + a + b;
			else if ( a == b )
		 	{
				point1 = point1 + a;
				point2 = point2 + b;
			}
		}
		printf("%d %d\n", point1, point2);
	}
return 0;
}