#include <iostream>
#include <string>
#include <algorithm>

int main()
{
	std::string s_before;
	std::string s_after;

	std::getline(std::cin, s_before);

	s_after = s_before;
	std::transform(s_before.begin(), s_before.end(), s_after.begin(), toupper);

	for (unsigned int i = 0; i < s_after.length(); i++) {
		if (s_before[i] == s_after[i]) {
			std::transform(s_after.begin() + i, s_after.begin() + (i + 1), s_after.begin() + i, tolower);
		}
	}

	std::cout << s_after << std::endl;

}