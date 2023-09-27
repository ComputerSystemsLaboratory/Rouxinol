#include <iostream>
#include <cmath>
#include <cstdlib>
#include <algorithm>
#include <iomanip>

int main(int argc, char const* argv[])
{
	double a, b, c, d, e, f;
	const unsigned precision{3};
	std::cout << std::fixed << std::setprecision(precision);

	std::cin >> a >> b >> c >> d >> e >> f;
	while (!std::cin.eof()) {
		auto x = ( e*c - b*f )/( e*a - d*b );
		auto y = ( d*c - a*f )/( d*b - e*a );
		x = (std::abs(x) < 0.5 / std::pow(10,precision)) ? 0.0 : x;
		y = (std::abs(y) < 0.5 / std::pow(10,precision)) ? 0.0 : y;
		std::cout << x << ' ' << y << std::endl;
		std::cin >> a >> b >> c >> d >> e >> f;
	}
	return 0;
}