#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdint>

int main()
{
	std::uint32_t n;
	for (std::cin >> n; n != 0; std::cin >> n) {
		typedef std::vector<std::int32_t> IntVec;
		IntVec a(n);
		for (std::size_t i = 0; i < n; ++i) {
			std::cin >> a[i];
		}
		for (std::size_t i = 1; i < n; ++i) {
			a[i] = std::max(a[i], a[i] + a[i - 1]);
		}
		std::cout << *std::max_element(a.begin(), a.end()) << std::endl;
	}
	return 0;
}