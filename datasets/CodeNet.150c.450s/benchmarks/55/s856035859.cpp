#include <iostream>

int main(int argc, char const* argv[])
{
	std::string snum;
	std::cin >> snum;
	while (snum != "0") {
		unsigned sum{};
		for (auto&& var : snum) {
			sum += var - '0';
		}
		std::cout << sum << std::endl;
		std::cin >> snum;
	}
	return 0;
}