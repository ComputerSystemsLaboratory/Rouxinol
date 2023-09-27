#include <iostream>
#include <cmath>

struct Vector2D {
	double x;
	double y;

	double abs() const {
		return std::sqrt(x * x + y * y);
	}
	Vector2D& operator-=(const Vector2D& rhs) {
		x -= rhs.x;
		y -= rhs.y;
		return *this;
	}
};

Vector2D operator-(const Vector2D& lhs, const Vector2D& rhs)
{
	return Vector2D(lhs) -= rhs;
}

int main()
{
	int count = 0;
	std::cin >> count;
	for (int i = 0; i < count; ++i) {
		Vector2D pA, pB, pC, pD;
		std::cin >> pA.x >> pA.y >> pB.x >> pB.y >> pC.x >> pC.y >> pD.x >> pD.y;

		Vector2D rAB(pB - pA), rCD(pD - pC);
		const double eps = 1.0e-8;
		if (rAB.abs() >= eps && rCD.abs() >= eps && std::abs(rAB.x * rCD.y - rAB.y * rCD.x) < eps) {
			std::cout << "YES\n";
		} else {
			std::cout << "NO\n";
		}
	}

	return 0;
}