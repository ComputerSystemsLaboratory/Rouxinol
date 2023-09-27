#include <iostream>
#include <string>

int main()
{
	std::string s;
	std::getline(std::cin, s);
	for (int i=0; s[i]; ++i) {
		if (65 <= s[i] && s[i] <=90) s[i] += 32;
		else if (97 <= s[i] && s[i] <=122) s[i] -= 32;
	}
	std::cout << s << '\n';
}