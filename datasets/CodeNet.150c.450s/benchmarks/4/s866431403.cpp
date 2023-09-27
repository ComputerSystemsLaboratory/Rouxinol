#include <iostream>

int main()
{
	int m, f, r;
	while (std::cin >> m >> f >> r)
	{
		if (m == -1 && f == -1 && r == -1)
		{
			break;
		}
		if (m == -1 || f == -1)
		{
			std::cout << 'F' << '\n';
		}
		else if (m + f >= 80)
		{
			std::cout << 'A' << '\n';
		}
		else if (m + f >= 65)
		{
			std::cout << 'B' << '\n';
		}
		else if (m + f >= 50)
		{
			std::cout << 'C' << '\n';
		}
		else if (m + f >= 30)
		{
			if (r >= 50)
			{
				std::cout << 'C' << '\n';
			}
			else
			{
				std::cout << 'D' << '\n';
			}
		}
		else
		{
			std::cout << 'F' << '\n';
		}
	}
	return 0;
}