#include <iostream>

int cubic(int n);

int main()
{
	int x;
	std::cin >> x;

	std::cout << cubic(x) << std::endl;

	return 0;
}

int cubic(int n)
{
	return n * n * n;
}