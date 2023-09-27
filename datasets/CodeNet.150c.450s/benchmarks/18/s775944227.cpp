#include <iostream>

int main(void)
{
	uint32_t week;
	std::cin >> week;

	uint32_t base = 100000;

	for (int i = 0; i < week; i++)
	{
		uint32_t rishi = base * 0.05;
		if (rishi % 1000 > 0)
		{
			rishi = rishi / 1000 * 1000;
			rishi += 1000;
		}
		base += rishi;
	}
	
	std::cout << base << std::endl;

	return 0;
}