#include<stdio.h>
#include<stdlib.h>
#include<string.h>

const int maxn = 1005;
int top, stack[maxn];

void push(int x)
{
	stack[++top] = x;
}

int pop()
{
	top--;
	return stack[top + 1];
}

int main()
{
	int a, b;
	top = 0;
	char s[105];
	while (scanf("%s",s)!=EOF)
	{
		if (s[0] == '+')
		{
			a = pop();
			b = pop();
			push(a + b);
		}
		else if (s[0] == '-')
		{
			b = pop(), a = pop();
			push(a - b);
		}
		else if (s[0] =='*')
		{
			a = pop(), b = pop();
			push(a*b);
		}
		else
		{
			push(atoi(s));
		}
	}
	printf("%d\n", pop());
	return 0;
}