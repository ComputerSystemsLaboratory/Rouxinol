#include <iostream>

int main(int argc, char const* argv[])
{
	int input;
	int flag = 1;
	int i = 1;

	while (flag)
	{
		std::cin >> input;
		if (input != 0)
		{
			std::cout << "Case " << i << ": " << input << std::endl;
			i++;
		}
		else
			flag = 0;

	}
	return 0;
}