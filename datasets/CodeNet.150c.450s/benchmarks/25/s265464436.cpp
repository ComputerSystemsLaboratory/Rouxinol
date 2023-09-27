#include <iostream>
#include <string>
#include <map>
#include <algorithm>

int main(int argc, char const* argv[])
{
	std::string str;
	std::map<char,unsigned> m;
	while (!std::cin.eof()) {
		std::string s;
		std::cin >> s;
		str += s;
	}
    std::transform(str.begin(), str.end(), str.begin(), tolower);
	for (auto c : str) {
		m[c]++;
	}
	for (char c = 'a'; c <= 'z'; c++) {
		std::cout << c << " : " << m[c] << std::endl;
	}

	return 0;
}