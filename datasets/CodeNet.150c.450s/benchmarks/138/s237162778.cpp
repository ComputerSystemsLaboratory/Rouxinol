#include <iostream>
#include <algorithm>

int main()
{
	int a, b, c, d;
	std::cin >> a >> b;
	c = a, d = b;
	if (a < b)
		std::swap(a, b);
	while (b != 0)
	{
		int r = a%b;
		a = b;
		b = r;
	}

	std::cout << a << "\n";

	return 0;
}