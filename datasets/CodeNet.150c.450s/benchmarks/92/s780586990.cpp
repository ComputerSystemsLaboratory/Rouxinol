#include<iostream>

int main()
{
	int a, b, sum, product;
	while (std::cin >> a >> b)
	{
		product = 10;
		sum = a + b;
		for (int digit = 1; ; ++digit)
		{
			if (sum < product)
			{
				std::cout << digit << std::endl;
				break;
			}
			product *= 10;
		}
	}

	return 0;
}
