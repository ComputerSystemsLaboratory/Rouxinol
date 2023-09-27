#include<iostream>

int main (void)
{
	int a, b;
	std::cin >> a;
	std::cin >> b;

	if (a > b)
		std::cout << "a > b" << '\n';
	else if (a < b)
		std::cout << "a < b" << '\n';
	else
		std::cout << "a == b" << '\n';

}