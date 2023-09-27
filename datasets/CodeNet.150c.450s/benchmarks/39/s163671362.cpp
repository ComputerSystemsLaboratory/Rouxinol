#include <iostream>

int main(int argc, char *argv[])
{
	int a = 0;
	int b = 0;

	std::cin >> a >> b;

	int c = a * b;
	int d = a * 2 + b * 2;
	
	std::cout << c << " " << d << std::endl;
	return 0;
}