#include <iostream>

struct Point2D {
	double x, y;
	Point2D operator-(Point2D &inp) {
		Point2D ans;
		ans.x = this->x - inp.x;
		ans.y = this->y - inp.y;
		return ans;
	}
	static double crossZ(Point2D &a, Point2D &b) {
		return a.x * b.y - a.y * b.x;
	}
};

int main() {
	int dataSet;
	Point2D p[4], v[2];
	for (std::cin >> dataSet; dataSet > 0; --dataSet) {
		std::cin >> p[0].x >> p[0].y >> p[1].x >> p[1].y >> p[2].x >> p[2].y >> p[3].x >> p[3].y;
		v[0] = p[1] - p[0];
		v[1] = p[3] - p[2];
		std::cout << ((Point2D::crossZ(v[0], v[1]) == 0.) ? "YES" : "NO") << '\n';
	}
	return 0;
}