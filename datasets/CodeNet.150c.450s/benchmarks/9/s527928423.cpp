#include <iostream>
#include <iomanip>
#include <string>
#include <algorithm>

int main(int argc, char const* argv[])
{
	while (true) {
		unsigned n;
		unsigned nshift{};
		std::string s;

		std::cin >> s;
		if (s == "-") break;
		std::cin >> n;

		for (int i = 0; i < n; i++) {
			int d;
			std::cin >> d;
			nshift += d;
		}
		nshift %= s.length();
		for (int i = 0; i < s.length(); i++) {
			std::cout << s[(nshift+i) % s.length()];
		}
		std::cout << std::endl;
	}

	return 0;
}