#include <iostream>
#include <string>
#include <algorithm>

int main()
{
	std::string s, l, r;
	int n, h;
	for (;;) {
		std::cin >> s;
		if(s[0] == '-') break;
		std::cin >> n;
		for (int i=0; i!=n; ++i) {
			std::cin >> h;
			l = s.substr(0, h);
			r = s.substr(h, s.size()-h);
			s = r + l;
		}
		std::cout << s << '\n';
	}
}