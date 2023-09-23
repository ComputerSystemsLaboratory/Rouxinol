#include <iostream>

int main()
{
	int a, b, c, count = 0;

	std::cin >> a >> b >> c;

	for (int i = a; i < b + 1; ++i)
		if (c%i == 0)
			++count;

	std::cout << count << std::endl;
	return 0;
}