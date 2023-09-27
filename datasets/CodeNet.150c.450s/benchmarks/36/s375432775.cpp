#include <iostream>
#include <cstdint>

int main()
{
	std::uint32_t d;
	while (std::cin >> d) {
		std::uint32_t total = 0;
		for (std::uint32_t i = 0; i < (600 - d) / d; ++i) {
			total += i * i;
		}
		std::cout << d * d * d * total + (600 - d) * (600 - d) * d << std::endl;
	}
	return 0;
}