#include <iostream>

int main()
{
	int x, y;
	std::cin >> x >> y;

	while (x > 0 && y > 0)
	{
		if (x >= y)
		{
			x = x % y;
		}
		else
		{
			y = y % x;
		}
	}

	int answer = (x == 0) ? y : x;
	std::cout << answer;
	std::cout << std::endl;
}