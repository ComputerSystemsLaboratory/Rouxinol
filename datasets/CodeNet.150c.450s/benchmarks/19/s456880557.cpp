#include <iostream>

int main(int argc, char** argv)
{
	int a = 0;
	int b = 0;

	while (true)
	{
		std::cin >> a >> b;
		if (a == 0 && b == 0)
		{
			break;
		}

		if (a < b)
		{
			std::cout << a << " " << b << std::endl;
		}
		else
		{
			std::cout << b << " " << a << std::endl;
		}
	}

	return 0;
}
