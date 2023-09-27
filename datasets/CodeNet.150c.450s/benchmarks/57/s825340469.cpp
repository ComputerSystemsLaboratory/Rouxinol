#include <iostream>

int main(int argc, char** argv)
{
	int a, b;
	char op;

	while (true)
	{
		std::cin >> a >> op >> b;

		if (op == '?')
		{
			break;
		}

		switch (op)
		{
		case '+':
			std::cout << a + b << std::endl;
			break;
		case '-':
			std::cout << a - b << std::endl;
			break;
		case '*':
			std::cout << a * b << std::endl;
			break;
		case '/':
			std::cout << a / b << std::endl;
			break;
		default:
			break;
		}
	}

	return 0;
}
