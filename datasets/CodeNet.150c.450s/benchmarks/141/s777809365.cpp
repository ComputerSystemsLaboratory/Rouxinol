#include <iostream>

struct Vector2D {
	double x, y;

	Vector2D() : x(0.0), y(0.0) {}
	Vector2D(double init_x, double init_y) : x(init_x), y(init_y) {}
	Vector2D& operator-=(const Vector2D& rhs)
	{
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
	Vector2D p1, p2, p3, pp;
	while (std::cin >> p1.x >> p1.y >> p2.x >> p2.y >> p3.x >> p3.y >> pp.x >> pp.y) {
		// p3-based vectors
		Vector2D r1(p1 - p3), r2(p2 - p3), rp(pp - p3);

		// rp = a1 * r1 + a2 * r2
		double det = r1.x * r2.y - r2.x * r1.y;
		double a1 = ( r2.y * rp.x - r2.x * rp.y) / det;
		double a2 = (-r1.y * rp.x + r1.x * rp.y) / det;

		if (a1 > 0 && a2 > 0 && a1 + a2 < 1.0) {
			std::cout << "YES" << std::endl;
		} else {
			std::cout << "NO" << std::endl;
		}
	}

	return 0;
}