#include <iostream>
#include <string>
#include <algorithm>

int main()
{
	std::string w, a;
	int c {};
	std::cin >> w;
	for (;;) {
		std::cin >> a;
		if(a == "END_OF_TEXT") break;
		std::transform(a.begin(), a.end(), a.begin(), tolower);
		a == w && ++c;
	}
	std::cout << c << '\n';	
}