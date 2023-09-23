#include <iostream>

int main(int argc, char const* argv[])
{
	int t;
	int h,m,s;
	std::cin >> t;
	h = t / 3600;
	m = t / 60 % 60;
	s = t % 60;

	std::cout << h << ":";
	std::cout << m << ":";
	std::cout << s << "";
	std::cout << std::endl;

	return 0;
}