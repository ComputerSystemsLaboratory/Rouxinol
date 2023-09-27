#include <iostream>

int main(int argc, char *argv[])
{
	int x = 0;

	std::cin >> x;
	x = x * x * x;
	std::cout << x << std::endl;
	return 0;
}