#include<iostream>

int main()
{
	int S;
	std::cin >> S;

	int s = S % 60;
	int m = (S / 60) % 60;
	int h = S / 3600;
	std::cout << h << ':' << m << ':' << s << std::endl;
}