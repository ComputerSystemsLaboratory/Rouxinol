#include <iostream>
#include <string>
int main(int argc, char const* argv[])
{
	int a, b;
	std::string op;

	do {
		std::cin >> a >> op >> b;

		if(op == "+")
			std::cout << a + b << std::endl;
		else if( op == "-")
			std::cout << a - b << std::endl;
		else if( op == "*")
			std::cout << a * b << std::endl;
		else if (op == "/")
			std::cout << a / b << std::endl;
	} while( op != "?");

	return 0;
}