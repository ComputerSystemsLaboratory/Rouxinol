#include<stdio.h>
int main(void) {
	int a, b, c, m[12],top=0,second=0,thread=0;
	for (size_t i = 0; i < 10; i++)
	{
		scanf("%d", &a);
		if (a > top)
		{
			thread = second;
			second = top;
			top = a;
		}
		else
		{
			if (a>second)
			{
				thread = second;
				second = a;
			}
			else
			{
				if (a>thread)
				{
					thread = a;
				}
			}
		}
	}
	printf("%d\n%d\n%d\n", top, second, thread);
	return 0;
}