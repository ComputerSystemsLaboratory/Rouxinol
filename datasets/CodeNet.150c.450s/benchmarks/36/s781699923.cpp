#include <iostream>

long f(long x)
{
	return x * x;
}

long integral(long x_begin, long x_end, long delta)
{
	long result = 0;
	for (long x = x_begin; x < x_end; x += delta) {
		result += f(x) * delta;
	}
	return result;
}

int main()
{
	int input;
	while (std::cin >> input) {
		std::cout << integral(0, 600, input) << std::endl;
	}
	return 0;
}