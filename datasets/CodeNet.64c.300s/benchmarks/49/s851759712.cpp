#include <iostream>

int main(int argc, char const* argv[])
{
	int a, b, digit, sum;
	while(std::cin >> a >> b)
	{
		sum = a + b;
		while(sum > 0)
		{
			sum /= 10;
			digit++;
		}

		std::cout << digit << std::endl;
		digit = 0;
	}

	return 0;
}