#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <locale>

static bool readLines(std::string &str)
{
	std::string tmp;

	if (0x00 == &str) {
		return false;
	}

	while (std::getline(std::cin, tmp)) {
		if (0 < tmp.size()) {
			transform(tmp.begin(), tmp.end(), tmp.begin(), tolower);
			str += tmp;
		}
	}

	return true;
}

static bool countAlpha(const std::string &str, std::vector<int> &v)
{
	if (0x00 == &str || 0x00 == &v) {
		return false;
	}

	if (0 >= v.size()) {
		v.resize(26);
		for (unsigned int i = 0; i < v.size(); i++) {
			v.at(i) = 0;
		}
	}

	char ch;
	int index = 0;
	for (unsigned int i = 0; i < str.size(); i++) {
		ch = str.at(i);
		if (false == std::isalpha(ch))
			continue;
		index = static_cast<int>(ch - 'a');
		v.at(index)++;
	}

	return true;
}

int main()
{
	std::string alpha("abcdefghijklmnopqrstuvwxyz");
	std::string str;
	std::vector<int> vec(26);

	for (unsigned int i = 0; i < vec.size(); i++) {
		vec.at(i) = 0;
	}

	if (true == readLines(str)) {
		countAlpha(str, vec);
		for (unsigned int i = 0; i < vec.size(); i++) {
			std::cout << alpha.at(i) << " : " << vec.at(i) << std::endl;
		}
	}

	return (0);
}