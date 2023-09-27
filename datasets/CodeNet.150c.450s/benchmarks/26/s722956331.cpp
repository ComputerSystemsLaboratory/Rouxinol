#include <iostream>
#include <string>

int main()
{
	int a, b;
	std::string operand;
	std::cin >> a;
	std::cin >> b;

	if (a > b)
	{
		operand = ">";
	}
	else if (a < b)
	{
		operand = "<";
	}
	else
	{
		operand = "==";
	}

	std::cout << "a" << " " << operand << " " << "b" << std::endl;

	return 0;
}