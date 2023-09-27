#include <iostream>
#include <string>

int main()
{
	std::string s;
	for (;;) {
		std::cin >> s;
		if (s[0] == '0') break;
		int sum {};
		for (int i=0; s[i]; ++i)
			sum += s[i] - '0';
		std::cout << sum << '\n';
	}
}