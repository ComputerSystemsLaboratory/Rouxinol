#include <iostream>
#include <cstdlib>
#include <string>
#include <cctype>

static bool Input(std::string &s, std::string &p)
{
	if (0x00 == &s || 0x00 == &p) {
		return false;
	}

	std::cin >> s;
	std::cin >> p;
	if ((0 < s.size() && 100 >= s.size()) &&
			(0 < p.size() && 100 >= p.size())) {
		return true;
	}

	return false;
}

static bool isInclusion(const std::string s, const std::string p)
{
	int pos = 0;
	std::string tmp(s);
	std::string new_str;

	while (0 <= (pos = tmp.find_first_of(p.at(0)))) {
		new_str = tmp.substr(pos, p.size());
		unsigned int len = new_str.size();
		if (p.size() > len) {
			new_str += s.substr(0, p.size() - len);
		}
		if (0 == new_str.compare(p)) {
			return true;
		}
		tmp = tmp.substr(pos + 1);
	}

	return false;

}
int main()
{
	std::string s, p;

	if (true == Input(s, p)) {
		if (true == isInclusion(s, p)) {
			std::cout << "Yes" << std::endl;
		} else {
			std::cout << "No" << std::endl;
		}
	}

	return EXIT_SUCCESS;
}