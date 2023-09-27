#include <iostream>
#include <string>

int main(int argc, char const* argv[])
{
	std::string str;
	int i = 0, sum;

	while (std::cin >> str)
	{
		sum = 0;

		if (str[0] == '0')
			break;

		for (size_t i = 0; i < str.size(); i++)
			sum += str[i] - '0';

		std::cout << sum << std::endl;
	}

	return 0;
}