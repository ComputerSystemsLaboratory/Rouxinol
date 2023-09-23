#include<iostream>

int main()
{
	int a, b;
	char op;
	

	while (1) {
		std::cin >> a >> op >> b;
		if (op == '+')
			std::cout << a + b;
		else if (op == '-')
			std::cout << a - b;
		else if (op == '*')
			std::cout << a * b;
		else if (op == '/')
			std::cout << a / b;
		else if (op == '?')
			break;
		std::cout << std::endl;
	}
}