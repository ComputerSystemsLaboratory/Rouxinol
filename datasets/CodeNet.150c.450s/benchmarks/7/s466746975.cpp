#include <iostream>
#include <array>
#include <algorithm>

int main()
{
	std::array<int, 10> high;
	for (int i = 0; i < 10; ++i)
		std::cin >> high[i];

	std::sort(high.begin(), high.end());

	for (int i = 9; i > 6;--i)
		std::cout << high[i] << std::endl;
	
	return 0;
}