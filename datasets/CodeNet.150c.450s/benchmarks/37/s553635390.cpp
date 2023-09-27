#include <cstdio>
#include <iostream>
#include <iomanip>

float check(float f) {
	return f == 0 ? 0 : f;
}

int main() {
	float a, b, c, d, e, f;
	while (std::cin >> a >> b >> c >> d >> e >> f) {
		float
			x = (c * e - b * f) / (a * e - b * d),
			y = (c * d - a * f) / (b * d - a * e);

		std::cout
			<< std::fixed << std::setprecision(3) << check(x)
			<< " "
			<< std::fixed << std::setprecision(3) << check(y)
			<< std::endl;

	}
}