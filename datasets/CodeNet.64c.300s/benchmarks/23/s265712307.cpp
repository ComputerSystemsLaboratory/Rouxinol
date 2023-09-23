#include <iostream>

static bool input(int &a, int &b)
{
	if (0x00 == &a || 0x00 == &b) {
		return false;
	}

	std::cin >> a >> b;

	return true;
}

static int calcArea(const int a, const int b)
{
	return a * b;
}

static int calcLengthOfAhou(const int a, const int b)
{
	return a * 2 + b * 2;
}

int main()
{
	int a, b;

	if (true == input(a, b)) {
		std::cout << calcArea(a, b) << " " << calcLengthOfAhou(a, b) << std::endl;
	}

	return (0);
}