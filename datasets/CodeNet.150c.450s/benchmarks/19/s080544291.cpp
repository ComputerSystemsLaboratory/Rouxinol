#include <iostream>

int main(int argc, char const* argv[])
{
	int x, y;
	int flag = 1;

	while(flag)
	{
		std::cin >> x >> y;
		if (x == 0 && y == 0)
			flag = 0;
		else
		{
			if (x > y)
				std::cout << y << " " << x << std::endl;
			else if (x <= y)
				std::cout << x << " " << y << std::endl;
		}
	}
	return 0;
}