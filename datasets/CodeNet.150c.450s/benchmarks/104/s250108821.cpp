#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <iterator>
#include <cstdint>

int main()
{
	std::uint16_t w, n;
	std::cin >> w;
	std::cin >> n;

	std::vector<std::uint16_t> vnumbers(w);
	std::iota(vnumbers.begin(), vnumbers.end(), 1);

	for (int i = 0; i < n; ++i) {
		std::uint16_t a, b;
		char comma;
		std::cin >> a >> comma >> b;
		std::swap(vnumbers[a - 1], vnumbers[b - 1]);
	}

	std::copy(vnumbers.begin(), vnumbers.end(),
			std::ostream_iterator<std::uint16_t>(std::cout, "\n"));

	return 0;
}