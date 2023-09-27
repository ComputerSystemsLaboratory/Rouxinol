#include <iostream>
#include <vector>
#include <cstdint>

int main()
{
	std::vector<std::uint16_t> cars;
	std::uint16_t num;
	while (std::cin >> num) {
		if (num == 0) {
			std::cout << cars.back() << std::endl;
			cars.pop_back();
		}
		else {
			cars.push_back(num);
		}
	}
	return 0;
}