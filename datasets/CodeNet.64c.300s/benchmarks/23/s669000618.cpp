#include<iostream>

int main()
{
	int a, b;
	int area, length;
	std::cin >> a >> b;
	area = a * b;
	length = a * 2 + b * 2;
	std::cout << area << " " << length << std::endl;

	return 0;
}