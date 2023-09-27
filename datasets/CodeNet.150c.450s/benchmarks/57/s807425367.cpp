#include <iostream>
#include <string>

int main()
{
	int a,b;
	std::string op;
	
	std::cin >> a >> op >> b;

	while (op != "?") {

		if (op == "+") {
			std::cout << a + b << std::endl;
		}
		else if (op == "-") {
			std::cout << a - b << std::endl;
		}
		else if (op == "*") {
			std::cout << a*b << std::endl;
		}
		else {
			std::cout << a / b << std::endl;
		}

		std::cin >> a >> op >> b;
	}
}