#include <iostream>

int main(int argc, char const* argv[])
{
	int num;
	long max = -10000000, min = 10000000, sum = 0;
	int input;

	std::cin >> num;

	for (size_t i = 0; i < num; i++)
	{
		std::cin >> input;
		if( max < input)
			max = input;

		if (min > input)
			min = input;

		sum += input;
	}

	std::cout << min << " " << max << " " << sum << std::endl;

	return 0;
}