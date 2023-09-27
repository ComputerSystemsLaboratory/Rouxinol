#include <iostream>
#include <cstdint>

int main()
{
	std::uint32_t n;
	std::cin >> n;
	std::uint64_t factorial = 1;
	while (n > 0) {
		factorial *= n--;
	}
	std::cout << factorial << std::endl;
	return 0;
}