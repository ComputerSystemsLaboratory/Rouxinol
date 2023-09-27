#include <stdio.h>

int main(void)
{
	int a, b, x;
	char op;
	x=0;
	while(1)
	{
		scanf("%d %c %d", &a, &op, &b);
		if(op=='+')
		{
			x=a+b;
			printf("%d\n", x);
		}
		else if(op=='-')
		{
			x=a-b;
			printf("%d\n", x);
		}
		else if(op=='*')
		{
			x=a*b;
			printf("%d\n", x);
		}
		else if(op=='/')
		{
			x=a/b;
			printf("%d\n", x);
		}
		else
		{
			break;
		}
	}
	
	return 0;
}
