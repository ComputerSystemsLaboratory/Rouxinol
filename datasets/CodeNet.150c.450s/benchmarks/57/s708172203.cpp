#include <cstdio>
#include <iostream>

using namespace std;

int calc(int a, char op, int b)
{
	int result = 0;
	switch (op)
	{
		case '+':
			result = a + b;
			break;
		case '-':
			result = a - b;
			break;
		case '*':
			result = a * b;
			break;
		case '/':
			result = a / b;
			break;
		default:
			break;
	}
	return result;
}


int main(int argc, char const *argv[])
{
	int a, b;
	char op;

	while(1)
	{
		cin >> a >> op >> b;
		if (op == '?')
		{
			break;
		}
		else
		{
			printf("%d\n", calc(a, op, b));
		}
	}
	return 0;
}