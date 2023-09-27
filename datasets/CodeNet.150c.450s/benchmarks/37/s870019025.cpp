#include <iostream>
#include <iomanip>

int main(int argc, char **argv) {
	double a, b, c, d, e, f, x, y;
	
	while(std::cin >> a >> b >> c >> d >> e >> f) {
		y = (c * d - a * f) / (b * d - a * e);
		x = (c - b * y) / a;
		std::cout << std::fixed << std::setprecision(3) << x << " " << y << std::endl;
	}
}
