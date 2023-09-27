#include <iostream>
#include <stdio.h>

const double PI(3.141592653589);

int main()
{
	int a, b, result;
	char op;
	while (std::cin >> a >> op >> b)
	{
		if (op == '?')
		{
			break;
		}
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
			result = 0;
			break;
		}
		std::cout << result << '\n';
	}
	return 0;
}