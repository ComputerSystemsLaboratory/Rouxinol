#include <iostream>

unsigned long func(unsigned long n)
{
	if(n==0)
		return 1;
	return n*func(n-1);
}

int main(void)
{
	unsigned long n;
	std::cin >> n;
	std::cout << func(n) << std::endl;
	return 0;
}