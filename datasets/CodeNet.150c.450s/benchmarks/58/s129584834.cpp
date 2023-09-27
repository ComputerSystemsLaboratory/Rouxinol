#include"stdio.h"
#include<stdlib.h>

int top, A[1000];

void push(int n)
{
	A[++top] = n;
	return;
}

int pop()
{
	--top;
	return A[top+1];
}

int main()
{
	int a, b;
	top = 0;
	char str[100] = { '\0' };

	while (scanf("%s", str) != EOF)
	{
		if (str[0] == '+')
		{
			a = pop();
			b = pop();
			push(a+b);
		}
		else if (str[0] == '-')
		{
			a = pop();
			b = pop();
			push(b - a);
		}
		else if (str[0] == '*')
		{
			a = pop();
			b = pop();
			push(a * b);
		}
		else
			push(atoi(str));
	}

	printf("%d\n", pop());

	return 0;
}
