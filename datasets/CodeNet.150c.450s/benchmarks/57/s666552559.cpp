#include "iostream"
#include "string"


int main()
{
	int a, b, result;
	char op;
	while (true)
	{
		std::cin >> a >> op >> b;
		if (op == '+') result = a + b;
		if (op == '-') result = a - b;
		if (op == '*') result = a * b;
		if (op == '/') result = a / b;
		if (op == '?') break;
		std::cout << result << std::endl;
	}
    return 0;
}