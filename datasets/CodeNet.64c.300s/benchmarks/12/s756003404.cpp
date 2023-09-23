#include<iostream>

int main()
{
	int x = 0;
	int n = 0;
	std::cin >> x;
	
	n = x;
	for (int i = 1; i < 3; i++)
		n *= x;

	std::cout << n << std::endl;
}