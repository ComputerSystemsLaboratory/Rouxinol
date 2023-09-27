#include <iostream>
#include <algorithm>

template<typename T>
T gcd(T a, T b) {
	while (a != 0) {
		if (a < b) { //to be a > b
			std::swap(a, b);
		}
		a = a % b;
	}
	return b;
}
template<typename T>
T lcm(const T& a, const T& b) {
	return a * b / gcd(a, b);
}

int main(int argc, char const* argv[])
{
	unsigned long a{}, b{};
	while (std::cin >> a >> b) {
		std::cout << gcd(a, b) << ' ';
		std::cout << lcm(a, b) << std::endl;
	}
	return 0;
}