#include <iostream>
#include <array>
#include <algorithm>
#include <iterator>
#include <cstdint>

int main()
{
	std::array<std::int32_t, 5> numbers;
	for (std::int32_t& num : numbers) {
		std::cin >> num;
	}
	std::sort(numbers.begin(), numbers.end(),
			std::greater<std::int32_t>());
	std::copy(numbers.begin(), numbers.end() - 1,
			std::ostream_iterator<std::int32_t>(std::cout, " "));
	std::cout << numbers.back() << std::endl;
	return 0;
}