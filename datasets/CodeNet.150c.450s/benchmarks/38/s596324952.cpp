#include <stdio.h>

int main (void)
{
	int n, i;
	int a, b, c;
	
	scanf("%d", &n);
	
	for (i=0; i<n; i++)
	{
		scanf("%d %d %d", &a, &b, &c);
		
		// find maximum
		if (a > b && a > c)
		{
			if (a*a == b*b + c*c)
			{
				printf("YES\n");
			}else
			{
				printf("NO\n");
			}
		}
		else if (b > a && b > c)
		{
			if (b*b == a*a + c*c)
			{
				printf("YES\n");
			}else
			{
				printf("NO\n");
			}
		}
		else
		{
			if (c*c == b*b + a*a)
			{
				printf("YES\n");
			}else
			{
				printf("NO\n");
			}
		}
	}
}