#include <iostream>

int main(int argc, char const* argv[])
{
	int a, b, c;
	int count = 0;
	std::cin >> a >> b >> c;

	for (size_t i = a; i < b + 1; i++)
		if( c % i == 0)
			count++;

	std::cout << count << std::endl;
	return 0;
}