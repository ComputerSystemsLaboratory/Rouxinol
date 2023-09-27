#include <iostream>
#include <cmath>
#include <limits>

int main(void)
{
	int32_t first  = 0;
	int32_t second = 0;

	while( std::cin >> first )
	{
		std::cin >> second;

		std::cout << static_cast<int32_t>(std::log10(first + second))+1 << std::endl;
	}

	return 0;
}