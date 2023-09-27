#include <iostream>
#include <array>
#include <algorithm>
#include <cstdint>

int main()
{
	typedef std::array<std::uint16_t, 4> NumArray;
	NumArray num_a;
	while (std::cin >> num_a[0] >> num_a[1] >> num_a[2] >> num_a[3]) {
		std::uint16_t num_hit = 0, num_blow = 0;
		for (std::uint16_t i = 0; i < 4; ++i) {
			std::uint16_t b;
			std::cin >> b;
			if (b == num_a[i]) {
				++num_hit;
			}
			else if (std::find(num_a.begin(), num_a.end(), b) != num_a.end()) {
				++num_blow;
			}
		}
		std::cout << num_hit << ' ' << num_blow << std::endl;
	}

	return 0;
}