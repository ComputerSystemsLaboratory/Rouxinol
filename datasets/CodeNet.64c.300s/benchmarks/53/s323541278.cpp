#include <iostream>

int main()
{
	int a, b, c, count;
	std::cin >> a >> b >> c;
	for (; a<=b; ++a) if (c%a == 0) ++count;
	std::cout << count << '\n';
}