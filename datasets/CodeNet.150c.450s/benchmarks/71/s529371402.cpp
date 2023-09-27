#include <iostream>

int main(int argc, char const* argv[])
{
	unsigned  n{};
	while (std::cin >> n) {
		unsigned sum{};
		for (int i = 0; i < 10000; i++) {
			auto a = i / 1000;
			auto b = (i - a * 1000) / 100;
			auto c = (i - a * 1000 - b * 100) / 10;
			auto d = i % 10;
			auto e = a + b + c + d;
			if (n == e) {
				sum++;
			}
		}
		std::cout << sum << std::endl;
	}
	return 0;
}