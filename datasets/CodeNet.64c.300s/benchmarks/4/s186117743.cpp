#include <iostream>

int main()
{
	int a, b, c;

	std::cin >> a >> b >> c;

	if (a < 0 || a > 100 || b < 0 || b > 100 || c < 0 || c > 100)	return 0;

	if (a < b && b < c)
	{
		std::cout << "Yes" << std::endl;
	}
	else
	{
		std::cout << "No" << std::endl;
	}

	return 0;
}
