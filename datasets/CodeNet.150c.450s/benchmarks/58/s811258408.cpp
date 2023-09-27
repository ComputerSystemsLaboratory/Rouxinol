#include <cstdio>
#include <string>
#include <cstring>

int top, S[1000];

void push(int x)
{
	S[++top] = x;
}

int pop()
{
	top--;
	return S[top + 1];
}

int main()
{
	using namespace std;

	int foo, bar;
	top = 0;
	char s[100];

	while (scanf("%s", s) != EOF)
	{
		if (s[0] == '+')
		{
			foo = pop();
			bar = pop();
			push(foo + bar);
		}
		else if (s[0] == '-')
		{
			bar = pop();
			foo = pop();
			push(foo - bar);
		}
		else if (s[0] == '*')
		{
			foo = pop();
			bar = pop();
			push(foo * bar);
		}
		else
		{
			push(stoi(s));
		}
	}

	printf("%d\n", pop());
}