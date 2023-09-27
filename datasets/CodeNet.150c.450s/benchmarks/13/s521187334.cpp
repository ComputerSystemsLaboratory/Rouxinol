#include <iostream>
#include <string>

int main()
{
	std::string s, p;
	std::cin >> s >> p;
	s += s;
	std::cout << (s.find(p) != -1 ? "Yes" : "No") << '\n';
}