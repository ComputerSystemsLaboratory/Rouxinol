#include <iostream>
#include <string>
int main()
{
	int a, b, c;
	std::cin >> a;
	std::cin >> b;
	std::cin >> c;

	std::string output;

	if (a < b && b < c)
	{
		output = "Yes";
	}
	else
	{
		output = "No";
	}

	std::cout << output << std::endl;
	return 0;
}