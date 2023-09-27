#include <iostream>

int area(int height, int width);
int perimeter(int height, int width);

int main()
{
	int a, b;
	std::cin >> a >> b;

	std::cout << area(a, b) << ' ' << perimeter(a, b) << std::endl;

	return 0;
}

int area(int height, int width)
{
	return height * width;
}

int perimeter(int height, int width)
{
	return (height + width) * 2;
}