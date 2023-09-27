#include <iostream>
#include <cstdint>

std::uint32_t some_of_integer(std::uint32_t n, std::uint32_t s, std::uint32_t sum = 0, std::uint32_t i = 0)
{
	std::uint32_t num_cmb = 0;
	if (n == 0) {
		if (sum + i <= s && s <= sum + 9) {
			++num_cmb;
		}
	}
	else {
		for (; i < 9; ++i) {
			num_cmb += some_of_integer(n - 1, s, sum + i, i + 1);
		}
	}
	return num_cmb;
}

int main()
{
	std::uint32_t n, s;
	for (std::cin >> n >> s; !(n == 0 && s == 0); std::cin >> n >> s) {
		std::cout << some_of_integer(n - 1, s) << std::endl;
	}

	return 0;
}